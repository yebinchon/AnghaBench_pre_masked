
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_ring_data {int rdata_dmap; int * rdata_desc; } ;
struct bwi_softc {int * sc_parent_dtag; int * sc_rxring_dtag; struct bwi_ring_data sc_rx_rdata; int * sc_txring_dtag; struct bwi_ring_data* sc_tx_rdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct bwi_softc*,int,int) ;
 int FUNC_4 (struct bwi_softc*) ;

__attribute__((used)) static void
FUNC_5(struct bwi_softc *VAR_1)
{
 if (VAR_1->sc_txring_dtag != ((void*)0)) {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
   struct bwi_ring_data *VAR_3 = &VAR_1->sc_tx_rdata[VAR_2];

   if (VAR_3->rdata_desc != ((void*)0)) {
    FUNC_1(VAR_1->sc_txring_dtag,
        VAR_3->rdata_dmap);
    FUNC_2(VAR_1->sc_txring_dtag,
      VAR_3->rdata_desc,
      VAR_3->rdata_dmap);
   }
  }
  FUNC_0(VAR_1->sc_txring_dtag);
 }

 if (VAR_1->sc_rxring_dtag != ((void*)0)) {
  struct bwi_ring_data *VAR_4 = &VAR_1->sc_rx_rdata;

  if (VAR_4->rdata_desc != ((void*)0)) {
   FUNC_1(VAR_1->sc_rxring_dtag, VAR_4->rdata_dmap);
   FUNC_2(VAR_1->sc_rxring_dtag, VAR_4->rdata_desc,
     VAR_4->rdata_dmap);
  }
  FUNC_0(VAR_1->sc_rxring_dtag);
 }

 FUNC_4(VAR_1);
 FUNC_3(VAR_1, VAR_0, 1);

 if (VAR_1->sc_parent_dtag != ((void*)0))
  FUNC_0(VAR_1->sc_parent_dtag);
}
