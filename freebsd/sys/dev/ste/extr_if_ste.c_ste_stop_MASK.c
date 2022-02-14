
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int ste_tx_tag; struct ste_chain* ste_tx_chain; int ste_rx_tag; struct ste_chain_onefrag* ste_rx_chain; } ;
struct ste_softc {TYPE_1__ ste_cdata; int ste_dev; scalar_t__ ste_timer; int ste_callout; struct ifnet* ste_ifp; } ;
struct ste_chain_onefrag {int * ste_mbuf; int ste_map; } ;
struct ste_chain {int * ste_mbuf; int ste_map; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ste_softc*,int ) ;
 int FUNC_1 (struct ste_softc*,int ) ;
 int FUNC_2 (struct ste_softc*,int ,int ) ;
 int FUNC_3 (struct ste_softc*,int ,int) ;
 int FUNC_4 (struct ste_softc*,int ,int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct ste_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ste_softc*) ;
 int FUNC_13 (struct ste_softc*) ;

__attribute__((used)) static void
FUNC_14(struct ste_softc *VAR_21)
{
 struct ifnet *VAR_22;
 struct ste_chain_onefrag *VAR_23;
 struct ste_chain *VAR_24;
 uint32_t VAR_25;
 int VAR_26;

 FUNC_6(VAR_21);
 VAR_22 = VAR_21->ste_ifp;

 FUNC_9(&VAR_21->ste_callout);
 VAR_21->ste_timer = 0;
 VAR_22->if_drv_flags &= ~(VAR_3|VAR_2);

 FUNC_3(VAR_21, VAR_8, 0);
 FUNC_3(VAR_21, VAR_4, 0);

 VAR_25 = FUNC_1(VAR_21, VAR_5);
 VAR_25 |= VAR_7 | VAR_6;
 FUNC_4(VAR_21, VAR_5, VAR_25);
 FUNC_13(VAR_21);

 FUNC_2(VAR_21, VAR_15, 0);
 FUNC_2(VAR_21, VAR_19, 0);

 FUNC_4(VAR_21, VAR_14, 0);
 FUNC_4(VAR_21, VAR_18, 0);

 VAR_25 = FUNC_0(VAR_21, VAR_10);
 VAR_25 |= VAR_13 | VAR_11 |
     VAR_12;
 FUNC_3(VAR_21, VAR_10, VAR_25);
 for (VAR_26 = 0; VAR_26 < VAR_17; VAR_26++) {
  FUNC_5(10);
  if ((FUNC_0(VAR_21, VAR_10) & (VAR_13 |
      VAR_11 | VAR_12)) == 0)
   break;
 }
 if (VAR_26 == VAR_17)
  FUNC_10(VAR_21->ste_dev, "Stopping MAC timed out\n");

 FUNC_0(VAR_21, VAR_9);
 FUNC_12(VAR_21);

 for (VAR_26 = 0; VAR_26 < VAR_16; VAR_26++) {
  VAR_23 = &VAR_21->ste_cdata.ste_rx_chain[VAR_26];
  if (VAR_23->ste_mbuf != ((void*)0)) {
   FUNC_7(VAR_21->ste_cdata.ste_rx_tag,
       VAR_23->ste_map, VAR_0);
   FUNC_8(VAR_21->ste_cdata.ste_rx_tag,
       VAR_23->ste_map);
   FUNC_11(VAR_23->ste_mbuf);
   VAR_23->ste_mbuf = ((void*)0);
  }
 }

 for (VAR_26 = 0; VAR_26 < VAR_20; VAR_26++) {
  VAR_24 = &VAR_21->ste_cdata.ste_tx_chain[VAR_26];
  if (VAR_24->ste_mbuf != ((void*)0)) {
   FUNC_7(VAR_21->ste_cdata.ste_tx_tag,
       VAR_24->ste_map, VAR_1);
   FUNC_8(VAR_21->ste_cdata.ste_tx_tag,
       VAR_24->ste_map);
   FUNC_11(VAR_24->ste_mbuf);
   VAR_24->ste_mbuf = ((void*)0);
  }
 }
}
