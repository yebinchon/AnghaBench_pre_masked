
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct fman_bmi_regs {int * fmbm_pfs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

uint16_t FUNC_1(struct fman_bmi_regs *VAR_1, uint8_t VAR_2)
{
 uint32_t VAR_3;

    if ((VAR_2 > 63) || (VAR_2 < 1))
            return 0;

 VAR_3 = FUNC_0(&VAR_1->fmbm_pfs[VAR_2 - 1]);
 return (uint16_t)((VAR_3 & VAR_0) + 1);
}
