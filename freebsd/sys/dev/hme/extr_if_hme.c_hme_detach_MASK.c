
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ifnet {int dummy; } ;
struct TYPE_6__ {int rb_membase; TYPE_2__* rb_rxdesc; int rb_spare_dmamap; TYPE_1__* rb_txdesc; } ;
struct hme_softc {int sc_pdmatag; int sc_cdmatag; int sc_rdmatag; int sc_tdmatag; int sc_cdmamap; TYPE_3__ sc_rb; int sc_miibus; int sc_dev; int sc_tick_ch; struct ifnet* sc_ifp; } ;
struct TYPE_5__ {int hrx_dmamap; } ;
struct TYPE_4__ {int htx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hme_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hme_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct hme_softc*) ;
 int FUNC_11 (struct ifnet*) ;

void
FUNC_12(struct hme_softc *VAR_4)
{
 struct ifnet *VAR_5 = VAR_4->sc_ifp;
 int VAR_6;

 FUNC_0(VAR_4);
 FUNC_10(VAR_4);
 FUNC_1(VAR_4);
 FUNC_7(&VAR_4->sc_tick_ch);
 FUNC_9(VAR_5);
 FUNC_11(VAR_5);
 FUNC_8(VAR_4->sc_dev, VAR_4->sc_miibus);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  FUNC_3(VAR_4->sc_tdmatag,
      VAR_4->sc_rb.rb_txdesc[VAR_6].htx_dmamap);
 }
 FUNC_3(VAR_4->sc_rdmatag, VAR_4->sc_rb.rb_spare_dmamap);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  FUNC_3(VAR_4->sc_rdmatag,
      VAR_4->sc_rb.rb_rxdesc[VAR_6].hrx_dmamap);
 }
 FUNC_4(VAR_4->sc_cdmatag, VAR_4->sc_cdmamap,
     VAR_0 | VAR_1);
 FUNC_5(VAR_4->sc_cdmatag, VAR_4->sc_cdmamap);
 FUNC_6(VAR_4->sc_cdmatag, VAR_4->sc_rb.rb_membase, VAR_4->sc_cdmamap);
 FUNC_2(VAR_4->sc_tdmatag);
 FUNC_2(VAR_4->sc_rdmatag);
 FUNC_2(VAR_4->sc_cdmatag);
 FUNC_2(VAR_4->sc_pdmatag);
}
