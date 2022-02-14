
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* desc; int lith; } ;
typedef TYPE_2__ dma_chan_t ;
struct TYPE_4__ {int hwptrreg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static __inline__ int FUNC_2(dma_chan_t *VAR_0)
{
 return FUNC_0(FUNC_1(VAR_0->lith, VAR_0->desc->hwptrreg));
}
