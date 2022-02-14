
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fman_bmi_regs {int * fmbm_pp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

uint8_t FUNC_1(struct fman_bmi_regs *VAR_2, uint8_t VAR_3)
{
 uint32_t VAR_4;

    if ((VAR_3 > 63) || (VAR_3 < 1))
        return 0;

 VAR_4 = FUNC_0(&VAR_2->fmbm_pp[VAR_3 - 1]);
 return (uint8_t)((VAR_4 & VAR_1) >>
    VAR_0);
}
