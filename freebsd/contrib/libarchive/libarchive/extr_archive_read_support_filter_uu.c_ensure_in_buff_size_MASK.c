
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uudecode {size_t in_allocated; unsigned char* in_buff; int in_cnt; } ;
struct archive_read_filter {TYPE_1__* archive; } ;
struct TYPE_2__ {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (size_t) ;
 int FUNC_3 (unsigned char*,unsigned char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct archive_read_filter *VAR_4,
    struct uudecode *VAR_5, size_t VAR_6)
{

 if (VAR_6 > VAR_5->in_allocated) {
  unsigned char *VAR_7;
  size_t VAR_8;





  VAR_8 = VAR_5->in_allocated;
  do {
   if (VAR_8 < VAR_3*32)
    VAR_8 <<= 1;
   else
    VAR_8 += VAR_3;
  } while (VAR_6 > VAR_8);

  VAR_7 = FUNC_2(VAR_8);
  if (VAR_7 == ((void*)0)) {
   FUNC_1(VAR_7);
   FUNC_0(&VAR_4->archive->archive,
       VAR_2,
           "Can't allocate data for uudecode");
   return (VAR_0);
  }

  if (VAR_5->in_cnt)
   FUNC_3(VAR_7, VAR_5->in_buff, VAR_5->in_cnt);

  FUNC_1(VAR_5->in_buff);
  VAR_5->in_buff = VAR_7;
  VAR_5->in_allocated = VAR_8;
 }
 return (VAR_1);
}
