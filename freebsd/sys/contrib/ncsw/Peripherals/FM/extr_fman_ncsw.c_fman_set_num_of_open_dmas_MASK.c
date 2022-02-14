
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fman_bmi_regs {int fmbm_cfg2; int * fmbm_pp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct fman_bmi_regs *VAR_6,
    uint8_t VAR_7,
    uint8_t VAR_8,
    uint8_t VAR_9,
    uint8_t VAR_10)
{
 uint32_t VAR_11 = 0;

 if ((VAR_7 > 63) || (VAR_7 < 1))
     return;


 VAR_11 = FUNC_0(&VAR_6->fmbm_pp[VAR_7 - 1]) &
   ~(VAR_3 | VAR_5);
 VAR_11 |= (uint32_t)(((VAR_8-1) << VAR_4) |
   (VAR_9 << VAR_2));
 FUNC_1(VAR_11, &VAR_6->fmbm_pp[VAR_7 - 1]);



    if (VAR_10)
    {
        VAR_11 = FUNC_0(&VAR_6->fmbm_cfg2) & ~VAR_0;
        VAR_11 |= (uint32_t)(VAR_10 - 1) << VAR_1;
        FUNC_1(VAR_11, &VAR_6->fmbm_cfg2);
    }
}
