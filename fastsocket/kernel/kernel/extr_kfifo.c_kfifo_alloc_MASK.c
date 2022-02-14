
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfifo {int dummy; } ;
typedef int spinlock_t ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct kfifo* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct kfifo*) ;
 int FUNC_3 (unsigned int) ;
 struct kfifo* FUNC_4 (unsigned char*,unsigned int,int ,int *) ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (unsigned int,int ) ;
 unsigned int FUNC_7 (unsigned int) ;

struct kfifo *FUNC_8(unsigned int VAR_1, gfp_t VAR_2, spinlock_t *VAR_3)
{
 unsigned char *VAR_4;
 struct kfifo *VAR_5;





 if (!FUNC_3(VAR_1)) {
  FUNC_0(VAR_1 > 0x80000000);
  VAR_1 = FUNC_7(VAR_1);
 }

 VAR_4 = FUNC_6(VAR_1, VAR_2);
 if (!VAR_4)
  return FUNC_1(-VAR_0);

 VAR_5 = FUNC_4(VAR_4, VAR_1, VAR_2, VAR_3);

 if (FUNC_2(VAR_5))
  FUNC_5(VAR_4);

 return VAR_5;
}
