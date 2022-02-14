
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fman_bmi_regs {int * fmbm_pfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;

void FUNC_1(struct fman_bmi_regs *VAR_2,
    uint8_t VAR_3,
    uint32_t VAR_4,
    uint32_t VAR_5)
{
 uint32_t VAR_6;

 if ((VAR_3 > 63) || (VAR_3 < 1))
         return;


 VAR_6 = (uint32_t)((VAR_4 / VAR_1 - 1) |
  ((VAR_5 / VAR_1) <<
    VAR_0));
 FUNC_0(VAR_6, &VAR_2->fmbm_pfs[VAR_3 - 1]);
}
