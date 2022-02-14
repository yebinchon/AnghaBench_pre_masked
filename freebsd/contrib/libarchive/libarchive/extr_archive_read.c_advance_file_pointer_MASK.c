
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct archive_read_filter {int fatal; scalar_t__ avail; size_t next; size_t position; size_t client_avail; char const* client_next; int (* skip ) (struct archive_read_filter*,int) ;scalar_t__ (* read ) (struct archive_read_filter*,int **) ;int end_of_file; scalar_t__ client_total; int * client_buff; TYPE_2__* archive; } ;
typedef scalar_t__ ssize_t ;
typedef int int64_t ;
struct TYPE_3__ {int cursor; int nodes; } ;
struct TYPE_4__ {TYPE_1__ client; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct archive_read_filter*,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct archive_read_filter*,int) ;
 scalar_t__ FUNC_3 (struct archive_read_filter*,int **) ;

__attribute__((used)) static int64_t
FUNC_4(struct archive_read_filter *VAR_1, int64_t VAR_2)
{
 int64_t VAR_3, VAR_4 = 0;
 ssize_t VAR_5;
 size_t VAR_6;

 if (VAR_1->fatal)
  return (-1);


 if (VAR_1->avail > 0) {
  VAR_6 = (size_t)FUNC_1(VAR_2, (int64_t)VAR_1->avail);
  VAR_1->next += VAR_6;
  VAR_1->avail -= VAR_6;
  VAR_2 -= VAR_6;
  VAR_1->position += VAR_6;
  VAR_4 += VAR_6;
 }


 if (VAR_1->client_avail > 0) {
  VAR_6 = (size_t)FUNC_1(VAR_2, (int64_t)VAR_1->client_avail);
  VAR_1->client_next += VAR_6;
  VAR_1->client_avail -= VAR_6;
  VAR_2 -= VAR_6;
  VAR_1->position += VAR_6;
  VAR_4 += VAR_6;
 }
 if (VAR_2 == 0)
  return (VAR_4);


 if (VAR_1->skip != ((void*)0)) {
  VAR_3 = (VAR_1->skip)(VAR_1, VAR_2);
  if (VAR_3 < 0) {
   VAR_1->fatal = 1;
   return (VAR_3);
  }
  VAR_1->position += VAR_3;
  VAR_4 += VAR_3;
  VAR_2 -= VAR_3;
  if (VAR_2 == 0)
   return (VAR_4);
 }


 for (;;) {
  VAR_5 = (VAR_1->read)(VAR_1, &VAR_1->client_buff);
  if (VAR_5 < 0) {
   VAR_1->client_buff = ((void*)0);
   VAR_1->fatal = 1;
   return (VAR_5);
  }

  if (VAR_5 == 0) {
   if (VAR_1->archive->client.cursor !=
         VAR_1->archive->client.nodes - 1) {
    if (FUNC_0(VAR_1,
        VAR_1->archive->client.cursor + 1)
        == VAR_0)
     continue;
   }
   VAR_1->client_buff = ((void*)0);
   VAR_1->end_of_file = 1;
   return (VAR_4);
  }

  if (VAR_5 >= VAR_2) {
   VAR_1->client_next =
       ((const char *)VAR_1->client_buff) + VAR_2;
   VAR_1->client_avail = (size_t)(VAR_5 - VAR_2);
   VAR_1->client_total = VAR_5;
   VAR_4 += VAR_2;
   VAR_1->position += VAR_2;
   return (VAR_4);
  }

  VAR_1->position += VAR_5;
  VAR_4 += VAR_5;
  VAR_2 -= VAR_5;
 }
}
