
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm_dma_softc {int sc_mtx; int sc_dev; TYPE_1__* sc_dma_ch; } ;
struct TYPE_2__ {int flags; int * intr_arg; int * intr_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 struct bcm_dma_softc* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(int VAR_4)
{
 struct bcm_dma_softc *VAR_5 = VAR_3;

 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  return (-1);

 FUNC_1(&VAR_5->sc_mtx);
 if (VAR_5->sc_dma_ch[VAR_4].flags & VAR_2) {
  VAR_5->sc_dma_ch[VAR_4].flags |= VAR_0;
  VAR_5->sc_dma_ch[VAR_4].flags &= ~VAR_2;
  VAR_5->sc_dma_ch[VAR_4].intr_func = ((void*)0);
  VAR_5->sc_dma_ch[VAR_4].intr_arg = ((void*)0);


  FUNC_0(VAR_5->sc_dev, VAR_4);
 }

 FUNC_2(&VAR_5->sc_mtx);
 return (0);
}
