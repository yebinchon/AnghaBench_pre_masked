
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_softc {int sc_dev; } ;
struct bwn_pio_rxqueue {struct bwn_mac* prq_mac; } ;
struct bwn_mac {scalar_t__ mac_status; struct bwn_softc* mac_sc; } ;


 int FUNC_0 (struct bwn_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct bwn_pio_rxqueue*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct bwn_pio_rxqueue *VAR_1)
{
 struct bwn_mac *VAR_2 = VAR_1->prq_mac;
 struct bwn_softc *VAR_3 = VAR_2->mac_sc;
 unsigned int VAR_4;

 FUNC_0(VAR_3);

 if (VAR_2->mac_status < VAR_0)
  return (0);

 for (VAR_4 = 0; VAR_4 < 5000; VAR_4++) {
  if (FUNC_1(VAR_1) == 0)
   break;
 }
 if (VAR_4 >= 5000)
  FUNC_2(VAR_3->sc_dev, "too many RX frames in PIO mode\n");
 return ((VAR_4 > 0) ? 1 : 0);
}
