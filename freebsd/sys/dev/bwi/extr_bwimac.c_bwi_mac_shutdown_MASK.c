
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_softc {int (* sc_free_tx_ring ) (struct bwi_softc*,int) ;int (* sc_free_rx_ring ) (struct bwi_softc*) ;int (* sc_free_txstats ) (struct bwi_softc*) ;} ;
struct bwi_mac {int mac_flags; int mac_regwin; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bwi_softc*,int ,int ) ;
 int FUNC_1 (struct bwi_mac*) ;
 int FUNC_2 (struct bwi_softc*,int *,int ) ;
 int FUNC_3 (struct bwi_mac*) ;
 int FUNC_4 (struct bwi_softc*) ;
 int FUNC_5 (struct bwi_softc*) ;
 int FUNC_6 (struct bwi_softc*,int) ;

void
FUNC_7(struct bwi_mac *VAR_5)
{
 struct bwi_softc *VAR_6 = VAR_5->mac_sc;
 int VAR_7;

 if (VAR_5->mac_flags & VAR_2)
  VAR_6->sc_free_txstats(VAR_6);

 VAR_6->sc_free_rx_ring(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7)
  VAR_6->sc_free_tx_ring(VAR_6, VAR_7);

 FUNC_3(VAR_5);



 FUNC_1(VAR_5);

 FUNC_3(VAR_5);
 FUNC_0(VAR_6, VAR_0, VAR_1);
 FUNC_2(VAR_6, &VAR_5->mac_regwin, 0);

 VAR_5->mac_flags &= ~VAR_3;
}
