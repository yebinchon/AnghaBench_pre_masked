
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_dma_softc {int sc_dma_tag; int sc_mem; int sc_dev; } ;
struct bcm_dma_ch {int flags; int intr_arg; int ch; int (* intr_func ) (int ,int ) ;int dma_map; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 struct bcm_dma_softc* VAR_6 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,char*,int,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_7)
{
 struct bcm_dma_softc *VAR_8 = VAR_6;
 struct bcm_dma_ch *VAR_9 = (struct bcm_dma_ch *)VAR_7;
 uint32_t VAR_10, VAR_11;


 VAR_10 = FUNC_4(VAR_8->sc_mem, FUNC_0(VAR_9->ch));







 if (!(VAR_9->flags & VAR_0))
  return;


 if (!(VAR_10 & (VAR_4 | VAR_3)))
  return;

 if (VAR_10 & VAR_3) {
  VAR_11 = FUNC_4(VAR_8->sc_mem, FUNC_1(VAR_9->ch));
  FUNC_6(VAR_8->sc_dev, "DMA error %d on CH%d\n",
   VAR_11 & VAR_5, VAR_9->ch);
  FUNC_5(VAR_8->sc_mem, FUNC_1(VAR_9->ch),
      VAR_11 & VAR_5);
  FUNC_2(VAR_8->sc_dev, VAR_9->ch);
 }

 if (VAR_10 & VAR_4) {

  FUNC_5(VAR_8->sc_mem, FUNC_0(VAR_9->ch),
      VAR_4 | VAR_2);


  FUNC_3(VAR_8->sc_dma_tag, VAR_9->dma_map,
      VAR_1);


  if (VAR_9->intr_func)
   VAR_9->intr_func(VAR_9->ch, VAR_9->intr_arg);
 }
}
