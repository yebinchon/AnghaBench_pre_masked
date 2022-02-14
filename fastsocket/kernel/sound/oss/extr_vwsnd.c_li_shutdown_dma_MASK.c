
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {void* page1; } ;
typedef TYPE_2__ lithium_t ;
struct TYPE_9__ {TYPE_1__* desc; int ctlval; TYPE_2__* lith; } ;
typedef TYPE_3__ dma_chan_t ;
struct TYPE_7__ {scalar_t__ direction; int ctlreg; } ;


 int FUNC_0 (char*,TYPE_3__*) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(dma_chan_t *VAR_2)
{
 lithium_t *VAR_3 = VAR_2->lith;
 void * VAR_4 = VAR_3->page1;

 FUNC_0("(chan=0x%p)\n", VAR_2);

 VAR_2->ctlval &= ~VAR_1;
 FUNC_1("ctlreg 0x%x = 0x%lx\n", VAR_2->desc->ctlreg, VAR_2->ctlval);
 FUNC_2(VAR_3, VAR_2->desc->ctlreg, VAR_2->ctlval);
 if (VAR_4 && VAR_2->desc->direction == VAR_0)
  * (volatile unsigned long *) (VAR_4 + 0x500) = 0;
}
