
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpc3_regs {int * pbdma; } ;
struct TYPE_2__ {int pbusnr; int * pbus; } ;
struct hal2_codec {TYPE_1__ pbus; } ;



__attribute__((used)) static void FUNC_0(struct hal2_codec *VAR_0, struct hpc3_regs *VAR_1,
       int VAR_2)
{
 VAR_0->pbus.pbusnr = VAR_2;
 VAR_0->pbus.pbus = &VAR_1->pbdma[VAR_2];
}
