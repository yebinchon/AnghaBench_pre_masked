
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dma_chan; } ;
struct TYPE_4__ {int dma_chan; } ;
struct TYPE_6__ {TYPE_2__ fsib; TYPE_1__ fsia; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_0(VAR_0);
 FUNC_0(VAR_1);
 FUNC_1(VAR_0);
 FUNC_1(VAR_1);

 VAR_2->fsia.dma_chan = -1;
 VAR_2->fsib.dma_chan = -1;
}
