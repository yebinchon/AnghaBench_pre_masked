
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bcm_dma_softc {TYPE_1__* sc_dma_ch; int sc_mem; } ;
struct bcm_dma_cb {int info; } ;
typedef int device_t ;
struct TYPE_2__ {struct bcm_dma_cb* cb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct bcm_dma_cb*,int) ;
 struct bcm_dma_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_7, int VAR_8)
{
 struct bcm_dma_softc *VAR_9 = FUNC_6(VAR_7);
 struct bcm_dma_cb *VAR_10;
 uint32_t VAR_11;
 int VAR_12;

 if (VAR_8 < 0 || VAR_8 >= VAR_0)
  return;

 VAR_11 = FUNC_3(VAR_9->sc_mem, FUNC_2(VAR_8));

 if (VAR_11 & VAR_2) {

  FUNC_4(VAR_9->sc_mem, FUNC_2(VAR_8), 0);

  VAR_12 = 1000;
  do {
   VAR_11 = FUNC_3(VAR_9->sc_mem, FUNC_2(VAR_8));
  } while (!(VAR_11 & VAR_5) && (VAR_12-- > 0));

  if (!(VAR_11 & VAR_5)) {
   FUNC_7(VAR_7,
       "Can't abort DMA transfer at channel %d\n", VAR_8);
  }

  FUNC_4(VAR_9->sc_mem, FUNC_1(VAR_8), 0);


  FUNC_4(VAR_9->sc_mem, FUNC_2(VAR_8),
      VAR_1 | VAR_4 | VAR_3| VAR_2);
 }


 FUNC_4(VAR_9->sc_mem, FUNC_0(VAR_8), 0);
 FUNC_4(VAR_9->sc_mem, FUNC_1(VAR_8), 0);


 VAR_10 = VAR_9->sc_dma_ch[VAR_8].cb;
 FUNC_5(VAR_10, sizeof(*VAR_10));
 VAR_10->info = VAR_6;
}
