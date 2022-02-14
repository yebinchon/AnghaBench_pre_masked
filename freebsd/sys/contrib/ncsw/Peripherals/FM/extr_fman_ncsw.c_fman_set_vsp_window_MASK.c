
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fman_bmi_regs {int * fmbm_spliodn; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct fman_bmi_regs *VAR_0,
             uint8_t VAR_1,
             uint8_t VAR_2,
             uint8_t VAR_3)
{
 uint32_t VAR_4 = 0;
 if ((VAR_1 > 63) || (VAR_1 < 1))
     return;

    VAR_4 = FUNC_0(&VAR_0->fmbm_spliodn[VAR_1-1]);
    VAR_4 |= (uint32_t)((uint32_t)VAR_2 & 0x3f) << 16;
    VAR_4 |= (uint32_t)VAR_3 << 28;
    FUNC_1(VAR_4, &VAR_0->fmbm_spliodn[VAR_1-1]);
}
