
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_softc {int sc_dev; } ;
struct bwn_pio_txqueue {int tq_index; int tq_size; int tq_pktlist; struct bwn_pio_txpkt* tq_pkts; int tq_free; scalar_t__ tq_base; } ;
struct bwn_pio_txpkt {unsigned int tp_index; struct bwn_pio_txqueue* tp_queue; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bwn_mac*) ;
 unsigned int FUNC_1 (struct bwn_pio_txpkt*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct bwn_pio_txpkt*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct bwn_mac*,int) ;
 int FUNC_6 (struct bwn_mac*,struct bwn_pio_txqueue*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct bwn_mac *VAR_3, struct bwn_pio_txqueue *VAR_4,
    int VAR_5)
{
 struct bwn_pio_txpkt *VAR_6;
 struct bwn_softc *VAR_7 = VAR_3->mac_sc;
 unsigned int VAR_8;

 VAR_4->tq_base = FUNC_5(VAR_3, VAR_5) + FUNC_0(VAR_3);
 VAR_4->tq_index = VAR_5;

 VAR_4->tq_free = VAR_0;
 if (FUNC_4(VAR_7->sc_dev) >= 8)
  VAR_4->tq_size = 1920;
 else {
  VAR_4->tq_size = FUNC_6(VAR_3, VAR_4, VAR_1);
  VAR_4->tq_size -= 80;
 }

 FUNC_2(&VAR_4->tq_pktlist);
 for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_4->tq_pkts); VAR_8++) {
  VAR_6 = &(VAR_4->tq_pkts[VAR_8]);
  VAR_6->tp_index = VAR_8;
  VAR_6->tp_queue = VAR_4;
  FUNC_3(&VAR_4->tq_pktlist, VAR_6, VAR_2);
 }
}
