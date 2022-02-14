
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm_dma_softc {int sc_mtx; TYPE_1__* sc_dma_ch; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bcm_dma_softc* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(int VAR_5)
{
 struct bcm_dma_softc *VAR_6 = VAR_4;
 int VAR_7 = VAR_1;
 int VAR_8;

 if (VAR_5 >= VAR_2)
  return (VAR_1);


 FUNC_0(&VAR_6->sc_mtx);

 if (VAR_5 < 0) {
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   if (VAR_6->sc_dma_ch[VAR_8].flags & VAR_0) {
    VAR_7 = VAR_8;
    VAR_6->sc_dma_ch[VAR_7].flags &= ~VAR_0;
    VAR_6->sc_dma_ch[VAR_7].flags |= VAR_3;
    break;
   }
  }
 }
 else {
  if (VAR_6->sc_dma_ch[VAR_5].flags & VAR_0) {
   VAR_7 = VAR_5;
   VAR_6->sc_dma_ch[VAR_7].flags &= ~VAR_0;
   VAR_6->sc_dma_ch[VAR_7].flags |= VAR_3;
  }
 }

 FUNC_1(&VAR_6->sc_mtx);
 return (VAR_7);
}
