
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ctlval; TYPE_1__* desc; int lith; } ;
typedef TYPE_2__ dma_chan_t ;
struct TYPE_4__ {int ctlreg; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static __inline__ void FUNC_2(dma_chan_t *VAR_1)
{
 VAR_1->ctlval |= VAR_0;
 FUNC_0("ctlval = 0x%lx\n", VAR_1->ctlval);
 FUNC_1(VAR_1->lith, VAR_1->desc->ctlreg, VAR_1->ctlval);
}
