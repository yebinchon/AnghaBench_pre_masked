
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct fman_fpm_regs {int fmfp_prc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;

void FUNC_1(struct fman_fpm_regs *VAR_2, uint8_t VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = (uint32_t)((VAR_3 << VAR_0) |
    VAR_1);
 FUNC_0(VAR_4, &VAR_2->fmfp_prc);
}
