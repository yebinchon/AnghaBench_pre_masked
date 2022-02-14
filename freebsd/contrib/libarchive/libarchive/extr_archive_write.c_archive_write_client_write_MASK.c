
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_filter {scalar_t__ data; scalar_t__ archive; } ;
struct archive_write {scalar_t__ (* client_writer ) (int *,int ,char const*,scalar_t__) ;int client_data; int archive; } ;
struct archive_none {size_t buffer_size; size_t avail; char* next; char* buffer; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,char*,size_t) ;
 scalar_t__ FUNC_4 (int *,int ,char const*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct archive_write_filter *VAR_2,
    const void *VAR_3, size_t VAR_4)
{
 struct archive_write *VAR_5 = (struct archive_write *)VAR_2->archive;
        struct archive_none *VAR_6 = (struct archive_none *)VAR_2->data;
 const char *VAR_7 = (const char *)VAR_3;
 ssize_t VAR_8, VAR_9;
 ssize_t VAR_10;

 VAR_8 = VAR_4;







 if (VAR_6->buffer_size == 0) {
  while (VAR_8 > 0) {
   VAR_10 = (VAR_5->client_writer)(&VAR_5->archive,
       VAR_5->client_data, VAR_7, VAR_8);
   if (VAR_10 <= 0)
    return (VAR_0);
   VAR_8 -= VAR_10;
   VAR_7 += VAR_10;
  }
  return (VAR_1);
 }


 if (VAR_6->avail < VAR_6->buffer_size) {


  VAR_9 = ((size_t)VAR_8 > VAR_6->avail) ?
   VAR_6->avail : (size_t)VAR_8;
  FUNC_1(VAR_6->next, VAR_7, VAR_9);
  VAR_6->next += VAR_9;
  VAR_6->avail -= VAR_9;
  VAR_7 += VAR_9;
  VAR_8 -= VAR_9;

  if (VAR_6->avail == 0) {
   char *VAR_11 = VAR_6->buffer;
   size_t VAR_12 = VAR_6->buffer_size;
   while (VAR_12 > 0) {
    VAR_10 = (VAR_5->client_writer)(&VAR_5->archive,
        VAR_5->client_data, VAR_11, VAR_12);
    if (VAR_10 <= 0)
     return (VAR_0);
    if ((size_t)VAR_10 > VAR_12) {
     FUNC_0(&(VAR_5->archive),
         -1, "write overrun");
     return (VAR_0);
    }
    VAR_11 += VAR_10;
    VAR_12 -= VAR_10;
   }
   VAR_6->next = VAR_6->buffer;
   VAR_6->avail = VAR_6->buffer_size;
  }
 }

 while ((size_t)VAR_8 >= VAR_6->buffer_size) {

  VAR_10 = (VAR_5->client_writer)(&VAR_5->archive,
      VAR_5->client_data, VAR_7, VAR_6->buffer_size);
  if (VAR_10 <= 0)
   return (VAR_0);
  VAR_7 += VAR_10;
  VAR_8 -= VAR_10;
 }

 if (VAR_8 > 0) {

  FUNC_1(VAR_6->next, VAR_7, VAR_8);
  VAR_6->next += VAR_8;
  VAR_6->avail -= VAR_8;
 }
 return (VAR_1);
}
