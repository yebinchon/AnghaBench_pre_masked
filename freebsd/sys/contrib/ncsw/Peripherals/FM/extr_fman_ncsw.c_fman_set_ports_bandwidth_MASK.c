
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fman_bmi_regs {int * fmbm_arb; } ;


 int FUNC_0 (int,int *) ;

void FUNC_1(struct fman_bmi_regs *VAR_0, uint8_t *VAR_1)
{
 int VAR_2;
 uint8_t VAR_3;
 uint32_t VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < 64; VAR_2++) {
  if (VAR_1[VAR_2] > 1) {


   VAR_3 = (uint8_t)(32 - 4 * ((VAR_2 % 8) + 1));
   VAR_4 |= ((VAR_1[VAR_2] - 1) << VAR_3);
  }
  if (VAR_2 % 8 == 7) {
   FUNC_0(VAR_4, &VAR_0->fmbm_arb[VAR_2 / 8]);
   VAR_4 = 0;
  }
 }
}
