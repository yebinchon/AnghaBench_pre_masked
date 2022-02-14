
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fman_bmi_regs {int * fmbm_pp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct fman_bmi_regs *VAR_4,
    uint8_t VAR_5,
    uint8_t VAR_6,
    uint8_t VAR_7)
{
 uint32_t VAR_8;

 if ((VAR_5 > 63) || (VAR_5 < 1))
     return;


 VAR_8 = FUNC_0(&VAR_4->fmbm_pp[VAR_5 - 1]) &
   ~(VAR_2 | VAR_1);
 VAR_8 |= (uint32_t)(((VAR_6 - 1) << VAR_3) |
   (VAR_7 << VAR_0));
 FUNC_1(VAR_8, &VAR_4->fmbm_pp[VAR_5 - 1]);
}
