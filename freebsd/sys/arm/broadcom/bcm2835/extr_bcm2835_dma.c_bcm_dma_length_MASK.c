
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bcm_dma_softc {TYPE_1__* sc_dma_ch; } ;
struct bcm_dma_cb {int len; } ;
struct TYPE_2__ {int flags; struct bcm_dma_cb* cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bcm_dma_softc* VAR_2 ;

uint32_t
FUNC_0(int VAR_3)
{
 struct bcm_dma_softc *VAR_4 = VAR_2;
 struct bcm_dma_cb *VAR_5;

 if (VAR_3 < 0 || VAR_3 >= VAR_0)
  return (0);

 if (!(VAR_4->sc_dma_ch[VAR_3].flags & VAR_1))
  return (0);

 VAR_5 = VAR_4->sc_dma_ch[VAR_3].cb;

 return (VAR_5->len);
}
