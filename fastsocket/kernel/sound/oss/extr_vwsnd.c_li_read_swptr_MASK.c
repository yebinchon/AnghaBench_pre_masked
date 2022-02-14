
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ctlval; TYPE_1__* desc; } ;
typedef TYPE_2__ dma_chan_t ;
struct TYPE_4__ {unsigned long swptrmask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long const) ;

__attribute__((used)) static __inline__ int FUNC_2(dma_chan_t *VAR_0)
{
 const unsigned long VAR_1 = VAR_0->desc->swptrmask;

 return FUNC_0(FUNC_1(VAR_0->ctlval, VAR_1));
}
