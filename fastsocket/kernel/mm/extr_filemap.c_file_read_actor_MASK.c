
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {unsigned long buf; } ;
struct TYPE_5__ {unsigned long count; unsigned long written; TYPE_1__ arg; int error; } ;
typedef TYPE_2__ read_descriptor_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,char*,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,char*,unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 char* FUNC_3 (struct page*) ;
 char* FUNC_4 (struct page*,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (char*,int ) ;

int FUNC_7(read_descriptor_t *VAR_2, struct page *VAR_3,
   unsigned long VAR_4, unsigned long VAR_5)
{
 char *VAR_6;
 unsigned long VAR_7, VAR_8 = VAR_2->count;

 if (VAR_5 > VAR_8)
  VAR_5 = VAR_8;





 if (!FUNC_2(VAR_2->arg.buf, VAR_5)) {
  VAR_6 = FUNC_4(VAR_3, VAR_1);
  VAR_7 = FUNC_1(VAR_2->arg.buf,
      VAR_6 + VAR_4, VAR_5);
  FUNC_6(VAR_6, VAR_1);
  if (VAR_7 == 0)
   goto success;
 }


 VAR_6 = FUNC_3(VAR_3);
 VAR_7 = FUNC_0(VAR_2->arg.buf, VAR_6 + VAR_4, VAR_5);
 FUNC_5(VAR_3);

 if (VAR_7) {
  VAR_5 -= VAR_7;
  VAR_2->error = -VAR_0;
 }
success:
 VAR_2->count = VAR_8 - VAR_5;
 VAR_2->written += VAR_5;
 VAR_2->arg.buf += VAR_5;
 return VAR_5;
}
