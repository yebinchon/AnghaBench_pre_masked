
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_fpm_regs {int fmfp_extc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

int FUNC_3(struct fman_fpm_regs *VAR_1)
{
 int VAR_2 = 100;

 FUNC_2(0x40000000, &VAR_1->fmfp_extc);

 while ((FUNC_1(&VAR_1->fmfp_extc) & 0x40000000) && --VAR_2)
  FUNC_0(10);

 if (!VAR_2)
  return -VAR_0;
 return 0;
}
