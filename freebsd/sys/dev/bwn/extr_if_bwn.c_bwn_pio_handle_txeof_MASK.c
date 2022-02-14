
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bwn_txstatus {int cookie; } ;
struct bwn_softc {scalar_t__ sc_watchdog_timer; } ;
struct bwn_pio_txqueue {int tq_pktlist; int tq_free; int tq_used; } ;
struct bwn_pio_txpkt {TYPE_2__* tp_m; int * tp_ni; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct TYPE_4__ {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (struct bwn_softc*) ;
 scalar_t__ FUNC_1 (struct bwn_mac*) ;
 int FUNC_2 (int *,struct bwn_pio_txpkt*,int ) ;
 struct bwn_pio_txqueue* FUNC_3 (struct bwn_mac*,int ,struct bwn_pio_txpkt**) ;
 int FUNC_4 (int *,struct bwn_txstatus const*) ;
 int FUNC_5 (int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7(struct bwn_mac *VAR_1,
    const struct bwn_txstatus *VAR_2)
{
 struct bwn_pio_txqueue *VAR_3;
 struct bwn_pio_txpkt *VAR_4 = ((void*)0);
 struct bwn_softc *VAR_5 = VAR_1->mac_sc;

 FUNC_0(VAR_5);

 VAR_3 = FUNC_3(VAR_1, VAR_2->cookie, &VAR_4);
 if (VAR_3 == ((void*)0))
  return;

 VAR_3->tq_used -= FUNC_6(VAR_4->tp_m->m_pkthdr.len + FUNC_1(VAR_1), 4);
 VAR_3->tq_free++;

 if (VAR_4->tp_ni != ((void*)0)) {




  FUNC_4(VAR_4->tp_ni, VAR_2);
 }
 FUNC_5(VAR_4->tp_ni, VAR_4->tp_m, 0);
 VAR_4->tp_ni = ((void*)0);
 VAR_4->tp_m = ((void*)0);
 FUNC_2(&VAR_3->tq_pktlist, VAR_4, VAR_0);

 VAR_5->sc_watchdog_timer = 0;
}
