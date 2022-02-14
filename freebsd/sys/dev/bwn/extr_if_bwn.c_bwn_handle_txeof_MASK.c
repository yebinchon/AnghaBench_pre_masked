
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_txstatus {int rtscnt; scalar_t__ ampdu; scalar_t__ im; } ;
struct bwn_stats {int rts; int rtsfail; } ;
struct bwn_softc {int sc_dev; } ;
struct bwn_mac {int mac_flags; struct bwn_softc* mac_sc; struct bwn_stats mac_stats; } ;


 int FUNC_0 (struct bwn_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct bwn_mac*,struct bwn_txstatus const*) ;
 int FUNC_2 (struct bwn_mac*,int ) ;
 int FUNC_3 (struct bwn_mac*,struct bwn_txstatus const*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct bwn_mac *VAR_1, const struct bwn_txstatus *VAR_2)
{
 struct bwn_softc *VAR_3 = VAR_1->mac_sc;
 struct bwn_stats *VAR_4 = &VAR_1->mac_stats;

 FUNC_0(VAR_1->mac_sc);

 if (VAR_2->im)
  FUNC_4(VAR_3->sc_dev, "TODO: STATUS IM\n");
 if (VAR_2->ampdu)
  FUNC_4(VAR_3->sc_dev, "TODO: STATUS AMPDU\n");
 if (VAR_2->rtscnt) {
  if (VAR_2->rtscnt == 0xf)
   VAR_4->rtsfail++;
  else
   VAR_4->rts++;
 }

 if (VAR_1->mac_flags & VAR_0) {
  FUNC_1(VAR_1, VAR_2);
 } else {
  FUNC_3(VAR_1, VAR_2);
 }

 FUNC_2(VAR_1, 0);
}
