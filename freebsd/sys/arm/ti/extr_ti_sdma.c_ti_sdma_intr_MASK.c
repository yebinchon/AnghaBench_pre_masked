
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_sdma_softc {int sc_active_channels; int sc_dev; struct ti_sdma_channel* sc_channel; } ;
struct ti_sdma_channel {int callback_data; int (* callback ) (unsigned int,int,int ) ;} ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 (struct ti_sdma_softc*) ;
 int FUNC_4 (struct ti_sdma_softc*) ;
 int FUNC_5 (int ,char*,unsigned int,...) ;
 int FUNC_6 (unsigned int,int,int ) ;
 int FUNC_7 (struct ti_sdma_softc*,int ) ;
 struct ti_sdma_softc* VAR_7 ;
 int FUNC_8 (struct ti_sdma_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_9(void *VAR_8)
{
 struct ti_sdma_softc *VAR_9 = VAR_7;
 uint32_t VAR_10;
 uint32_t VAR_11;
 unsigned int VAR_12, VAR_13;
 struct ti_sdma_channel* VAR_14;

 FUNC_3(VAR_9);

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {


  VAR_10 = FUNC_7(VAR_9, FUNC_2(VAR_13));
  VAR_10 &= FUNC_7(VAR_9, FUNC_1(VAR_13));
  if (VAR_10 == 0x00000000)
   continue;


  for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
   if (VAR_10 & (1 << VAR_12)) {
    VAR_14 = &VAR_9->sc_channel[VAR_12];


    VAR_11 = FUNC_7(VAR_9, FUNC_0(VAR_12));
    if (VAR_11 == 0) {
     FUNC_5(VAR_9->sc_dev, "Spurious DMA IRQ for channel "
                   "%d\n", VAR_12);
     continue;
    }


    if ((VAR_9->sc_active_channels & (1 << VAR_12)) == 0) {
     FUNC_5(VAR_9->sc_dev, "IRQ %d for a non-activated "
                   "channel %d\n", VAR_13, VAR_12);
     continue;
    }


    if (VAR_11 & VAR_1)
     FUNC_5(VAR_9->sc_dev, "Synchronization event drop "
                   "occurred during the transfer on channel %u\n",
          VAR_12);
    if (VAR_11 & VAR_3)
     FUNC_5(VAR_9->sc_dev, "Secure transaction error event "
                   "on channel %u\n", VAR_12);
    if (VAR_11 & VAR_2)
     FUNC_5(VAR_9->sc_dev, "Misaligned address error event "
                   "on channel %u\n", VAR_12);
    if (VAR_11 & VAR_4) {
     FUNC_5(VAR_9->sc_dev, "Transaction error event on "
                   "channel %u\n", VAR_12);






    }


    FUNC_8(VAR_9, FUNC_0(VAR_12), VAR_0);
    FUNC_8(VAR_9, FUNC_2(VAR_13), (1 << VAR_12));


    if (VAR_14->callback)
     VAR_14->callback(VAR_12, VAR_11, VAR_14->callback_data);
   }
  }
 }

 FUNC_4(VAR_9);

 return;
}
