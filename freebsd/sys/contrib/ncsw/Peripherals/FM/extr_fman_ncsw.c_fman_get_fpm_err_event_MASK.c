
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_fpm_regs {int fmfp_ee; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

uint32_t FUNC_2(struct fman_fpm_regs *VAR_0)
{
 uint32_t VAR_1;

 VAR_1 = FUNC_0(&VAR_0->fmfp_ee);

 FUNC_1(VAR_1, &VAR_0->fmfp_ee);
 return VAR_1;
}
