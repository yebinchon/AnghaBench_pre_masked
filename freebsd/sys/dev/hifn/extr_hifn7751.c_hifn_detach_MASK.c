
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hifn_softc {int sc_mtx; int sc_bar0res; int sc_bar1res; int sc_dmat; int sc_dmamap; int sc_dma; int sc_irq; int sc_intrhand; int sc_cid; scalar_t__ sc_rndtest; int sc_rngto; int sc_tickto; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct hifn_softc*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 struct hifn_softc* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_9)
{
 struct hifn_softc *VAR_10 = FUNC_10(VAR_9);

 FUNC_0(VAR_10 != ((void*)0), ("hifn_detach: null software carrier!"));


 FUNC_1(VAR_10, VAR_1, 0);


 FUNC_8(&VAR_10->sc_tickto);
 FUNC_8(&VAR_10->sc_rngto);






 FUNC_1(VAR_10, VAR_0, VAR_6 |
     VAR_4 | VAR_5);

 FUNC_9(VAR_10->sc_cid);

 FUNC_5(VAR_9);

 FUNC_7(VAR_9, VAR_10->sc_irq, VAR_10->sc_intrhand);

 FUNC_6(VAR_9, VAR_7, 0, VAR_10->sc_irq);

 FUNC_3(VAR_10->sc_dmat, VAR_10->sc_dmamap);
 FUNC_4(VAR_10->sc_dmat, VAR_10->sc_dma, VAR_10->sc_dmamap);
 FUNC_2(VAR_10->sc_dmat);

 FUNC_6(VAR_9, VAR_8, VAR_3, VAR_10->sc_bar1res);
 FUNC_6(VAR_9, VAR_8, VAR_2, VAR_10->sc_bar0res);

 FUNC_11(&VAR_10->sc_mtx);

 return (0);
}
