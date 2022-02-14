
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_tx_radiotap_header {int wt_ihdr; } ;
struct rtwn_rx_radiotap_header {int wr_ihdr; } ;
struct rtwn_softc {int sc_ic; struct rtwn_tx_radiotap_header sc_txtap; struct rtwn_rx_radiotap_header sc_rxtap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int,int ,int *,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_2)
{
 struct rtwn_rx_radiotap_header *VAR_3 = &VAR_2->sc_rxtap;
 struct rtwn_tx_radiotap_header *VAR_4 = &VAR_2->sc_txtap;

 FUNC_0(&VAR_2->sc_ic,
     &VAR_4->wt_ihdr, sizeof(*VAR_4), VAR_1,
     &VAR_3->wr_ihdr, sizeof(*VAR_3), VAR_0);
}
