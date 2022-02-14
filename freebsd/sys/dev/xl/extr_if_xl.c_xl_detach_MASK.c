
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ xl_tx_tag; int xl_tx_dmamap; int xl_tx_list; scalar_t__ xl_rx_tag; int xl_rx_dmamap; int xl_rx_list; } ;
struct xl_softc {int xl_flags; int xl_mtx; TYPE_1__ xl_ldata; scalar_t__ xl_mtag; int xl_tmpmap; int * xl_res; int * xl_fres; int * xl_irq; scalar_t__ xl_intrhand; int ifmedia; scalar_t__ xl_miibus; int xl_tick_callout; int xl_task; struct ifnet* xl_ifp; } ;
struct ifnet {int if_capenable; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct xl_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct xl_softc*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int,int *) ;
 int FUNC_9 (int ,int *,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,scalar_t__) ;
 struct xl_softc* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct ifnet*) ;
 int FUNC_15 (struct ifnet*) ;
 int FUNC_16 (struct ifnet*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int *) ;
 int VAR_8 ;
 int FUNC_21 (struct xl_softc*) ;

__attribute__((used)) static int
FUNC_22(device_t VAR_9)
{
 struct xl_softc *VAR_10;
 struct ifnet *VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = FUNC_12(VAR_9);
 VAR_11 = VAR_10->xl_ifp;

 FUNC_0(FUNC_19(&VAR_10->xl_mtx), ("xl mutex not initialized"));






 if (VAR_10->xl_flags & VAR_4) {
  VAR_12 = VAR_7;
  VAR_13 = VAR_3;
 } else {
  VAR_12 = VAR_6;
  VAR_13 = VAR_1;
 }


 if (FUNC_13(VAR_9)) {
  FUNC_1(VAR_10);
  FUNC_21(VAR_10);
  FUNC_2(VAR_10);
  FUNC_20(VAR_8, &VAR_10->xl_task);
  FUNC_10(&VAR_10->xl_tick_callout);
  FUNC_14(VAR_11);
 }
 if (VAR_10->xl_miibus)
  FUNC_11(VAR_9, VAR_10->xl_miibus);
 FUNC_7(VAR_9);
 FUNC_17(&VAR_10->ifmedia);

 if (VAR_10->xl_intrhand)
  FUNC_9(VAR_9, VAR_10->xl_irq, VAR_10->xl_intrhand);
 if (VAR_10->xl_irq)
  FUNC_8(VAR_9, VAR_2, 0, VAR_10->xl_irq);
 if (VAR_10->xl_fres != ((void*)0))
  FUNC_8(VAR_9, VAR_3,
      VAR_5, VAR_10->xl_fres);
 if (VAR_10->xl_res)
  FUNC_8(VAR_9, VAR_13, VAR_12, VAR_10->xl_res);

 if (VAR_11)
  FUNC_16(VAR_11);

 if (VAR_10->xl_mtag) {
  FUNC_4(VAR_10->xl_mtag, VAR_10->xl_tmpmap);
  FUNC_3(VAR_10->xl_mtag);
 }
 if (VAR_10->xl_ldata.xl_rx_tag) {
  FUNC_5(VAR_10->xl_ldata.xl_rx_tag,
      VAR_10->xl_ldata.xl_rx_dmamap);
  FUNC_6(VAR_10->xl_ldata.xl_rx_tag, VAR_10->xl_ldata.xl_rx_list,
      VAR_10->xl_ldata.xl_rx_dmamap);
  FUNC_3(VAR_10->xl_ldata.xl_rx_tag);
 }
 if (VAR_10->xl_ldata.xl_tx_tag) {
  FUNC_5(VAR_10->xl_ldata.xl_tx_tag,
      VAR_10->xl_ldata.xl_tx_dmamap);
  FUNC_6(VAR_10->xl_ldata.xl_tx_tag, VAR_10->xl_ldata.xl_tx_list,
      VAR_10->xl_ldata.xl_tx_dmamap);
  FUNC_3(VAR_10->xl_ldata.xl_tx_tag);
 }

 FUNC_18(&VAR_10->xl_mtx);

 return (0);
}
