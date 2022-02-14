
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm_dma_softc {TYPE_1__* sc_dma_ch; } ;
struct bcm_dma_cb {int info; } ;
struct TYPE_2__ {int flags; void (* intr_func ) (int,void*) ;struct bcm_dma_cb* cb; void* intr_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bcm_dma_softc* VAR_3 ;

int
FUNC_0(int VAR_4, void (*VAR_5)(int, void *), void *VAR_6)
{
 struct bcm_dma_softc *VAR_7 = VAR_3;
 struct bcm_dma_cb *VAR_8;

 if (VAR_4 < 0 || VAR_4 >= VAR_0)
  return (-1);

 if (!(VAR_7->sc_dma_ch[VAR_4].flags & VAR_1))
  return (-1);

 VAR_7->sc_dma_ch[VAR_4].intr_func = VAR_5;
 VAR_7->sc_dma_ch[VAR_4].intr_arg = VAR_6;
 VAR_8 = VAR_7->sc_dma_ch[VAR_4].cb;
 VAR_8->info |= VAR_2;

 return (0);
}
