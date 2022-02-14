
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* page2; } ;
typedef TYPE_2__ lithium_t ;
struct TYPE_8__ {int ctlval; TYPE_1__* desc; TYPE_2__* lith; } ;
typedef TYPE_3__ dma_chan_t ;
struct TYPE_6__ {scalar_t__ direction; int ctlreg; } ;


 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_2(dma_chan_t *VAR_4)
{
 lithium_t *VAR_5 = VAR_4->lith;
 void * VAR_6 = VAR_5->page2;

 VAR_4->ctlval &= ~(VAR_1 | VAR_2 | VAR_3);
 FUNC_0("ctlval = 0x%lx\n", VAR_4->ctlval);
 FUNC_0("ctlreg 0x%x = 0x%lx\n", VAR_4->desc->ctlreg, VAR_4->ctlval);
 FUNC_1(VAR_5, VAR_4->desc->ctlreg, VAR_4->ctlval);
 if (VAR_6 && VAR_4->desc->direction == VAR_0) {
  * (volatile unsigned long *) (VAR_6 + 0x98) = 0;
  * (volatile unsigned long *) (VAR_6 + 0x9C) = 0;
 }
}
