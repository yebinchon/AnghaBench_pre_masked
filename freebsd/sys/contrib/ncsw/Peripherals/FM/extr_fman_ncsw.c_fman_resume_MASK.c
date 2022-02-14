
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_fpm_regs {int fmfp_ee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct fman_fpm_regs *VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_0(&VAR_4->fmfp_ee);

 VAR_5 &= ~(VAR_0 |
   VAR_3 |
   VAR_2);
 VAR_5 |= VAR_1;

 FUNC_1(VAR_5, &VAR_4->fmfp_ee);
}
