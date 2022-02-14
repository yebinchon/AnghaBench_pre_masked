
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct archive_read_filter {int position; int data; TYPE_2__* archive; } ;
typedef int int64_t ;
struct TYPE_3__ {int (* skipper ) (int *,int ,int) ;int (* seeker ) (int *,int ,int,int ) ;} ;
struct TYPE_4__ {int archive; TYPE_1__ client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int,int ) ;

__attribute__((used)) static int64_t
FUNC_3(struct archive_read_filter *VAR_2, int64_t VAR_3)
{
 if (VAR_3 < 0)
  FUNC_0(1, "Negative skip requested.");
 if (VAR_3 == 0)
  return 0;

 if (VAR_2->archive->client.skipper != ((void*)0)) {



  int64_t VAR_4 = (int64_t)1 << 30;
  int64_t VAR_5 = 0;
  for (;;) {
   int64_t VAR_6, VAR_7 = VAR_3;
   if (VAR_7 > VAR_4)
    VAR_7 = VAR_4;
   VAR_6 = (VAR_2->archive->client.skipper)
    (&VAR_2->archive->archive, VAR_2->data, VAR_7);
   VAR_5 += VAR_6;
   if (VAR_6 == 0 || VAR_6 == VAR_3)
    return (VAR_5);
   if (VAR_6 > VAR_3)
    return VAR_0;
   VAR_3 -= VAR_6;
  }
 } else if (VAR_2->archive->client.seeker != ((void*)0)
  && VAR_3 > 64 * 1024) {
  int64_t VAR_8 = VAR_2->position;
  int64_t VAR_9 = (VAR_2->archive->client.seeker)
      (&VAR_2->archive->archive, VAR_2->data, VAR_3, VAR_1);
  if (VAR_9 != VAR_8 + VAR_3)
   return VAR_0;
  return VAR_9 - VAR_8;
 }
 return 0;
}
