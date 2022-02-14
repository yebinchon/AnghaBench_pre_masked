
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct fman_rg {TYPE_2__* bmi_rg; TYPE_1__* dma_rg; } ;
struct TYPE_4__ {int * fmbm_spliodn; } ;
struct TYPE_3__ {int * fmdmplr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct fman_rg *VAR_2, uint8_t VAR_3,
    uint16_t VAR_4,
    uint16_t VAR_5)
{
 uint32_t VAR_6;

 if ((VAR_3 > 63) || (VAR_3 < 1))
         return;


 VAR_6 = FUNC_0(&VAR_2->dma_rg->fmdmplr[VAR_3 / 2]);
 if (VAR_3 % 2) {
  VAR_6 &= ~VAR_1;
  VAR_6 |= (uint32_t)VAR_4;
 } else {
  VAR_6 &= ~(VAR_1 << VAR_0);
  VAR_6 |= (uint32_t)VAR_4 << VAR_0;
 }
 FUNC_1(VAR_6, &VAR_2->dma_rg->fmdmplr[VAR_3 / 2]);
 FUNC_1((uint32_t)VAR_5,
   &VAR_2->bmi_rg->fmbm_spliodn[VAR_3 - 1]);
}
