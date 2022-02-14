
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int * xl_tx_list; int * xl_rx_list; } ;
struct TYPE_7__ {TYPE_2__* xl_tx_chain; TYPE_1__* xl_rx_chain; } ;
struct xl_softc {int xl_flags; TYPE_4__ xl_ldata; TYPE_3__ xl_cdata; int xl_mtag; int xl_tick_callout; int xl_fhandle; int xl_ftag; scalar_t__ xl_wdog_timer; struct ifnet* xl_ifp; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_6__ {int * xl_mbuf; int xl_map; } ;
struct TYPE_5__ {int * xl_mbuf; int xl_map; } ;


 int FUNC_0 (struct xl_softc*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct xl_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct xl_softc*) ;

__attribute__((used)) static void
FUNC_10(struct xl_softc *VAR_19)
{
 int VAR_20;
 struct ifnet *VAR_21 = VAR_19->xl_ifp;

 FUNC_2(VAR_19);

 VAR_19->xl_wdog_timer = 0;

 FUNC_0(VAR_19, VAR_12, VAR_5);
 FUNC_0(VAR_19, VAR_12, VAR_8);
 FUNC_0(VAR_19, VAR_12, VAR_4);
 FUNC_0(VAR_19, VAR_12, VAR_6);
 FUNC_9(VAR_19);
 FUNC_0(VAR_19, VAR_12, VAR_10);
 FUNC_0(VAR_19, VAR_12, VAR_2);
 FUNC_1(800);
 FUNC_0(VAR_19, VAR_12, VAR_3|VAR_16);
 FUNC_0(VAR_19, VAR_12, VAR_9|0);
 FUNC_0(VAR_19, VAR_12, VAR_4|0);
 if (VAR_19->xl_flags & VAR_13)
  FUNC_5(VAR_19->xl_ftag, VAR_19->xl_fhandle, 4, 0x8000);


 FUNC_7(&VAR_19->xl_tick_callout);




 for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++) {
  if (VAR_19->xl_cdata.xl_rx_chain[VAR_20].xl_mbuf != ((void*)0)) {
   FUNC_4(VAR_19->xl_mtag,
       VAR_19->xl_cdata.xl_rx_chain[VAR_20].xl_map);
   FUNC_3(VAR_19->xl_mtag,
       VAR_19->xl_cdata.xl_rx_chain[VAR_20].xl_map);
   FUNC_8(VAR_19->xl_cdata.xl_rx_chain[VAR_20].xl_mbuf);
   VAR_19->xl_cdata.xl_rx_chain[VAR_20].xl_mbuf = ((void*)0);
  }
 }
 if (VAR_19->xl_ldata.xl_rx_list != ((void*)0))
  FUNC_6(VAR_19->xl_ldata.xl_rx_list, VAR_15);



 for (VAR_20 = 0; VAR_20 < VAR_17; VAR_20++) {
  if (VAR_19->xl_cdata.xl_tx_chain[VAR_20].xl_mbuf != ((void*)0)) {
   FUNC_4(VAR_19->xl_mtag,
       VAR_19->xl_cdata.xl_tx_chain[VAR_20].xl_map);
   FUNC_3(VAR_19->xl_mtag,
       VAR_19->xl_cdata.xl_tx_chain[VAR_20].xl_map);
   FUNC_8(VAR_19->xl_cdata.xl_tx_chain[VAR_20].xl_mbuf);
   VAR_19->xl_cdata.xl_tx_chain[VAR_20].xl_mbuf = ((void*)0);
  }
 }
 if (VAR_19->xl_ldata.xl_tx_list != ((void*)0))
  FUNC_6(VAR_19->xl_ldata.xl_tx_list, VAR_18);

 VAR_21->if_drv_flags &= ~(VAR_1 | VAR_0);
}
