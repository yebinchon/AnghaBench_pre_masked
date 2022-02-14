
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
struct fman_fpm_regs {int * fmfp_cev; int * fmfp_cee; int * fmfp_fcev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

uint32_t FUNC_2(struct fman_fpm_regs *VAR_0, uint8_t VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = FUNC_0(&VAR_0->fmfp_fcev[VAR_1]) &
   FUNC_0(&VAR_0->fmfp_cee[VAR_1]);
 FUNC_1(VAR_2, &VAR_0->fmfp_cev[VAR_1]);

 return VAR_2;
}
