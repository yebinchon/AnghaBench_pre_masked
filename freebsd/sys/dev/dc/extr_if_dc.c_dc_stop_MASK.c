
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct dc_chain_data {int ** dc_tx_chain; int * dc_tx_map; int ** dc_rx_chain; int * dc_rx_map; } ;
struct dc_list_data {TYPE_1__* dc_tx_list; TYPE_1__* dc_rx_list; } ;
struct dc_softc {int dc_tx_lmap; int dc_tx_ltag; int dc_tx_mtag; int dc_smap; int dc_stag; int dc_rx_lmap; int dc_rx_ltag; int dc_rx_mtag; scalar_t__ dc_link; scalar_t__ dc_wdog_timer; int dc_wdog_ch; int dc_stat_ch; struct dc_chain_data dc_cdata; struct dc_list_data dc_ldata; struct ifnet* dc_ifp; } ;
struct TYPE_2__ {int dc_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dc_softc*,int ) ;
 int FUNC_1 (struct dc_softc*,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (struct dc_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dc_softc*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct dc_softc *VAR_17)
{
 struct ifnet *VAR_18;
 struct dc_list_data *VAR_19;
 struct dc_chain_data *VAR_20;
 int VAR_21;
 uint32_t VAR_22, VAR_23;

 FUNC_2(VAR_17);

 VAR_18 = VAR_17->dc_ifp;
 VAR_19 = &VAR_17->dc_ldata;
 VAR_20 = &VAR_17->dc_cdata;

 FUNC_6(&VAR_17->dc_stat_ch);
 FUNC_6(&VAR_17->dc_wdog_ch);
 VAR_17->dc_wdog_timer = 0;
 VAR_17->dc_link = 0;

 VAR_18->if_drv_flags &= ~(VAR_16 | VAR_15);

 VAR_23 = FUNC_0(VAR_17, VAR_5);
 if (VAR_23 & (VAR_6 | VAR_7))
  FUNC_1(VAR_17, VAR_5,
     VAR_23 & ~(VAR_6 | VAR_7));
 FUNC_1(VAR_17, VAR_4, 0x00000000);

 if (VAR_23 & (VAR_6 | VAR_7))
  FUNC_7(VAR_17);

 FUNC_1(VAR_17, VAR_11, 0x00000000);
 FUNC_1(VAR_17, VAR_8, 0x00000000);




 for (VAR_21 = 0; VAR_21 < VAR_9; VAR_21++) {
  if (VAR_20->dc_rx_chain[VAR_21] != ((void*)0)) {
   FUNC_3(VAR_17->dc_rx_mtag,
       VAR_20->dc_rx_map[VAR_21], VAR_0);
   FUNC_4(VAR_17->dc_rx_mtag,
       VAR_20->dc_rx_map[VAR_21]);
   FUNC_9(VAR_20->dc_rx_chain[VAR_21]);
   VAR_20->dc_rx_chain[VAR_21] = ((void*)0);
  }
 }
 FUNC_5(VAR_19->dc_rx_list, VAR_10);
 FUNC_3(VAR_17->dc_rx_ltag, VAR_17->dc_rx_lmap,
     VAR_2 | VAR_3);




 for (VAR_21 = 0; VAR_21 < VAR_13; VAR_21++) {
  if (VAR_20->dc_tx_chain[VAR_21] != ((void*)0)) {
   VAR_22 = FUNC_8(VAR_19->dc_tx_list[VAR_21].dc_ctl);
   if (VAR_22 & VAR_12) {
    FUNC_3(VAR_17->dc_stag, VAR_17->dc_smap,
        VAR_1);
   } else {
    FUNC_3(VAR_17->dc_tx_mtag,
        VAR_20->dc_tx_map[VAR_21], VAR_1);
    FUNC_4(VAR_17->dc_tx_mtag,
        VAR_20->dc_tx_map[VAR_21]);
    FUNC_9(VAR_20->dc_tx_chain[VAR_21]);
   }
   VAR_20->dc_tx_chain[VAR_21] = ((void*)0);
  }
 }
 FUNC_5(VAR_19->dc_tx_list, VAR_14);
 FUNC_3(VAR_17->dc_tx_ltag, VAR_17->dc_tx_lmap,
     VAR_2 | VAR_3);
}
