
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_softc {int sc_dev; } ;
struct bwn_pio_rxqueue {scalar_t__ prq_base; int prq_rev; struct bwn_mac* prq_mac; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 scalar_t__ FUNC_0 (struct bwn_mac*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bwn_mac*,int,int) ;
 scalar_t__ FUNC_3 (struct bwn_mac*,int) ;

__attribute__((used)) static void
FUNC_4(struct bwn_mac *VAR_0, struct bwn_pio_rxqueue *VAR_1,
    int VAR_2)
{
 struct bwn_softc *VAR_3 = VAR_0->mac_sc;

 VAR_1->prq_mac = VAR_0;
 VAR_1->prq_rev = FUNC_1(VAR_3->sc_dev);
 VAR_1->prq_base = FUNC_3(VAR_0, VAR_2) + FUNC_0(VAR_0);
 FUNC_2(VAR_0, VAR_2, 1);
}
