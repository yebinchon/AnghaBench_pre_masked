
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int rl_tx_desc_cnt; int rl_rx_desc_cnt; scalar_t__ rl_stag; int rl_smap; scalar_t__ rl_stats; scalar_t__ rl_stats_addr; scalar_t__ rl_jrx_mtag; scalar_t__ rl_jrx_sparemap; TYPE_2__* rl_jrx_desc; scalar_t__ rl_rx_mtag; scalar_t__ rl_rx_sparemap; TYPE_1__* rl_rx_desc; scalar_t__ rl_tx_mtag; TYPE_3__* rl_tx_desc; scalar_t__ rl_tx_list_tag; int rl_tx_list_map; scalar_t__ rl_tx_list; scalar_t__ rl_tx_list_addr; scalar_t__ rl_rx_list_tag; int rl_rx_list_map; scalar_t__ rl_rx_list; scalar_t__ rl_rx_list_addr; } ;
struct rl_softc {int suspended; int rl_flags; int rl_res_id; int rl_mtx; scalar_t__ rl_parent_tag; TYPE_4__ rl_ldata; int * rl_res; int rl_res_type; int * rl_res_pba; int ** rl_irq; int ** rl_intrhand; scalar_t__ rl_miibus; int rl_inttask; int rl_stat_callout; struct ifnet* rl_ifp; } ;
struct ifnet {int if_capenable; int if_flags; } ;
typedef int device_t ;
struct TYPE_7__ {scalar_t__ tx_dmamap; } ;
struct TYPE_6__ {scalar_t__ rx_dmamap; } ;
struct TYPE_5__ {scalar_t__ rx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct rl_softc*) ;
 int FUNC_3 (struct rl_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,int *) ;
 int FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,scalar_t__) ;
 struct rl_softc* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct ifnet*) ;
 int FUNC_16 (struct ifnet*) ;
 int FUNC_17 (struct ifnet*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct ifnet*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct rl_softc*) ;
 int FUNC_23 (int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_24(device_t VAR_7)
{
 struct rl_softc *VAR_8;
 struct ifnet *VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_13(VAR_7);
 VAR_9 = VAR_8->rl_ifp;
 FUNC_0(FUNC_19(&VAR_8->rl_mtx), ("re mutex not initialized"));


 if (FUNC_14(VAR_7)) {




  FUNC_2(VAR_8);



  FUNC_22(VAR_8);
  FUNC_3(VAR_8);
  FUNC_11(&VAR_8->rl_stat_callout);
  FUNC_23(VAR_6, &VAR_8->rl_inttask);
  VAR_9->if_flags &= ~VAR_1;
  FUNC_15(VAR_9);
 }
 if (VAR_8->rl_miibus)
  FUNC_12(VAR_7, VAR_8->rl_miibus);
 FUNC_8(VAR_7);






 if (VAR_8->rl_intrhand[0] != ((void*)0)) {
  FUNC_10(VAR_7, VAR_8->rl_irq[0], VAR_8->rl_intrhand[0]);
  VAR_8->rl_intrhand[0] = ((void*)0);
 }
 if (VAR_9 != ((void*)0)) {



  FUNC_17(VAR_9);
 }
 if ((VAR_8->rl_flags & (VAR_2 | VAR_3)) == 0)
  VAR_11 = 0;
 else
  VAR_11 = 1;
 if (VAR_8->rl_irq[0] != ((void*)0)) {
  FUNC_9(VAR_7, VAR_4, VAR_11, VAR_8->rl_irq[0]);
  VAR_8->rl_irq[0] = ((void*)0);
 }
 if ((VAR_8->rl_flags & (VAR_2 | VAR_3)) != 0)
  FUNC_21(VAR_7);
 if (VAR_8->rl_res_pba) {
  VAR_11 = FUNC_1(4);
  FUNC_9(VAR_7, VAR_5, VAR_11, VAR_8->rl_res_pba);
 }
 if (VAR_8->rl_res)
  FUNC_9(VAR_7, VAR_8->rl_res_type, VAR_8->rl_res_id,
      VAR_8->rl_res);



 if (VAR_8->rl_ldata.rl_rx_list_tag) {
  if (VAR_8->rl_ldata.rl_rx_list_addr)
   FUNC_6(VAR_8->rl_ldata.rl_rx_list_tag,
       VAR_8->rl_ldata.rl_rx_list_map);
  if (VAR_8->rl_ldata.rl_rx_list)
   FUNC_7(VAR_8->rl_ldata.rl_rx_list_tag,
       VAR_8->rl_ldata.rl_rx_list,
       VAR_8->rl_ldata.rl_rx_list_map);
  FUNC_4(VAR_8->rl_ldata.rl_rx_list_tag);
 }



 if (VAR_8->rl_ldata.rl_tx_list_tag) {
  if (VAR_8->rl_ldata.rl_tx_list_addr)
   FUNC_6(VAR_8->rl_ldata.rl_tx_list_tag,
       VAR_8->rl_ldata.rl_tx_list_map);
  if (VAR_8->rl_ldata.rl_tx_list)
   FUNC_7(VAR_8->rl_ldata.rl_tx_list_tag,
       VAR_8->rl_ldata.rl_tx_list,
       VAR_8->rl_ldata.rl_tx_list_map);
  FUNC_4(VAR_8->rl_ldata.rl_tx_list_tag);
 }



 if (VAR_8->rl_ldata.rl_tx_mtag) {
  for (VAR_10 = 0; VAR_10 < VAR_8->rl_ldata.rl_tx_desc_cnt; VAR_10++) {
   if (VAR_8->rl_ldata.rl_tx_desc[VAR_10].tx_dmamap)
    FUNC_5(VAR_8->rl_ldata.rl_tx_mtag,
        VAR_8->rl_ldata.rl_tx_desc[VAR_10].tx_dmamap);
  }
  FUNC_4(VAR_8->rl_ldata.rl_tx_mtag);
 }
 if (VAR_8->rl_ldata.rl_rx_mtag) {
  for (VAR_10 = 0; VAR_10 < VAR_8->rl_ldata.rl_rx_desc_cnt; VAR_10++) {
   if (VAR_8->rl_ldata.rl_rx_desc[VAR_10].rx_dmamap)
    FUNC_5(VAR_8->rl_ldata.rl_rx_mtag,
        VAR_8->rl_ldata.rl_rx_desc[VAR_10].rx_dmamap);
  }
  if (VAR_8->rl_ldata.rl_rx_sparemap)
   FUNC_5(VAR_8->rl_ldata.rl_rx_mtag,
       VAR_8->rl_ldata.rl_rx_sparemap);
  FUNC_4(VAR_8->rl_ldata.rl_rx_mtag);
 }
 if (VAR_8->rl_ldata.rl_jrx_mtag) {
  for (VAR_10 = 0; VAR_10 < VAR_8->rl_ldata.rl_rx_desc_cnt; VAR_10++) {
   if (VAR_8->rl_ldata.rl_jrx_desc[VAR_10].rx_dmamap)
    FUNC_5(VAR_8->rl_ldata.rl_jrx_mtag,
        VAR_8->rl_ldata.rl_jrx_desc[VAR_10].rx_dmamap);
  }
  if (VAR_8->rl_ldata.rl_jrx_sparemap)
   FUNC_5(VAR_8->rl_ldata.rl_jrx_mtag,
       VAR_8->rl_ldata.rl_jrx_sparemap);
  FUNC_4(VAR_8->rl_ldata.rl_jrx_mtag);
 }


 if (VAR_8->rl_ldata.rl_stag) {
  if (VAR_8->rl_ldata.rl_stats_addr)
   FUNC_6(VAR_8->rl_ldata.rl_stag,
       VAR_8->rl_ldata.rl_smap);
  if (VAR_8->rl_ldata.rl_stats)
   FUNC_7(VAR_8->rl_ldata.rl_stag,
       VAR_8->rl_ldata.rl_stats, VAR_8->rl_ldata.rl_smap);
  FUNC_4(VAR_8->rl_ldata.rl_stag);
 }

 if (VAR_8->rl_parent_tag)
  FUNC_4(VAR_8->rl_parent_tag);

 FUNC_18(&VAR_8->rl_mtx);

 return (0);
}
