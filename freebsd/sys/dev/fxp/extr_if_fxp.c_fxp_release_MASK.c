
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fxp_tx {int tx_map; int * tx_mbuf; } ;
struct TYPE_2__ {struct fxp_tx* tx_list; struct fxp_rx* rx_list; scalar_t__ cbl_list; } ;
struct fxp_softc {int sc_mtx; scalar_t__ ifp; scalar_t__ mcs_tag; scalar_t__ cbl_tag; scalar_t__ fxp_stag; scalar_t__ fxp_txmtag; TYPE_1__ fxp_desc; scalar_t__ fxp_rxmtag; int spare_map; int fxp_res; int fxp_spec; int dev; int mcs_map; scalar_t__ mcsp; int fxp_smap; scalar_t__ fxp_stats; int cbl_map; int sc_media; scalar_t__ miibus; int * ih; } ;
struct fxp_rx {int rx_map; int * rx_mbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fxp_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14(struct fxp_softc *VAR_5)
{
 struct fxp_rx *VAR_6;
 struct fxp_tx *VAR_7;
 int VAR_8;

 FUNC_0(VAR_5, VAR_4);
 FUNC_1(VAR_5->ih == ((void*)0),
     ("fxp_release() called with intr handle still active"));
 if (VAR_5->miibus)
  FUNC_9(VAR_5->dev, VAR_5->miibus);
 FUNC_7(VAR_5->dev);
 FUNC_11(&VAR_5->sc_media);
 if (VAR_5->fxp_desc.cbl_list) {
  FUNC_5(VAR_5->cbl_tag, VAR_5->cbl_map);
  FUNC_6(VAR_5->cbl_tag, VAR_5->fxp_desc.cbl_list,
      VAR_5->cbl_map);
 }
 if (VAR_5->fxp_stats) {
  FUNC_5(VAR_5->fxp_stag, VAR_5->fxp_smap);
  FUNC_6(VAR_5->fxp_stag, VAR_5->fxp_stats, VAR_5->fxp_smap);
 }
 if (VAR_5->mcsp) {
  FUNC_5(VAR_5->mcs_tag, VAR_5->mcs_map);
  FUNC_6(VAR_5->mcs_tag, VAR_5->mcsp, VAR_5->mcs_map);
 }
 FUNC_8(VAR_5->dev, VAR_5->fxp_spec, VAR_5->fxp_res);
 if (VAR_5->fxp_rxmtag) {
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   VAR_6 = &VAR_5->fxp_desc.rx_list[VAR_8];
   if (VAR_6->rx_mbuf != ((void*)0)) {
    FUNC_4(VAR_5->fxp_rxmtag, VAR_6->rx_map,
        VAR_0);
    FUNC_5(VAR_5->fxp_rxmtag, VAR_6->rx_map);
    FUNC_12(VAR_6->rx_mbuf);
   }
   FUNC_3(VAR_5->fxp_rxmtag, VAR_6->rx_map);
  }
  FUNC_3(VAR_5->fxp_rxmtag, VAR_5->spare_map);
  FUNC_2(VAR_5->fxp_rxmtag);
 }
 if (VAR_5->fxp_txmtag) {
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   VAR_7 = &VAR_5->fxp_desc.tx_list[VAR_8];
   if (VAR_7->tx_mbuf != ((void*)0)) {
    FUNC_4(VAR_5->fxp_txmtag, VAR_7->tx_map,
        VAR_1);
    FUNC_5(VAR_5->fxp_txmtag, VAR_7->tx_map);
    FUNC_12(VAR_7->tx_mbuf);
   }
   FUNC_3(VAR_5->fxp_txmtag, VAR_7->tx_map);
  }
  FUNC_2(VAR_5->fxp_txmtag);
 }
 if (VAR_5->fxp_stag)
  FUNC_2(VAR_5->fxp_stag);
 if (VAR_5->cbl_tag)
  FUNC_2(VAR_5->cbl_tag);
 if (VAR_5->mcs_tag)
  FUNC_2(VAR_5->mcs_tag);
 if (VAR_5->ifp)
  FUNC_10(VAR_5->ifp);

 FUNC_13(&VAR_5->sc_mtx);
}
