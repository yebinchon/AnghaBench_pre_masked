
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct bcm_dma_softc {TYPE_2__* sc_dma_ch; } ;
struct TYPE_4__ {int flags; TYPE_1__* cb; } ;
struct TYPE_3__ {int info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct bcm_dma_softc* VAR_9 ;

int
FUNC_0(int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 struct bcm_dma_softc *VAR_14 = VAR_9;
 uint32_t VAR_15;

 if (VAR_10 < 0 || VAR_10 >= VAR_1)
  return (-1);

 if (!(VAR_14->sc_dma_ch[VAR_10].flags & VAR_2))
  return (-1);

 VAR_15 = VAR_14->sc_dma_ch[VAR_10].cb->info;
 VAR_15 &= ~VAR_4;
 VAR_15 |= (VAR_11 << VAR_5) & VAR_4;

 if (VAR_11)
  VAR_15 |= VAR_6;
 else
  VAR_15 &= ~VAR_6;

 if (VAR_13 == VAR_0)
  VAR_15 |= VAR_8;
 else
  VAR_15 &= ~VAR_8;

 if (VAR_12 == VAR_3)
  VAR_15 |= VAR_7;
 else
  VAR_15 &= ~VAR_7;

 VAR_14->sc_dma_ch[VAR_10].cb->info = VAR_15;

 return (0);
}
