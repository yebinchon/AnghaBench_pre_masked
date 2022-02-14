
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
struct ifnet {int dummy; } ;
struct hn_softc {int hn_rx_ring_cnt; int hn_rx_ring_inuse; struct hn_rx_ring* hn_rx_ring; } ;
struct hn_rxvf_setarg {struct ifnet* vf_ifp; struct hn_rx_ring* rxr; } ;
struct hn_rx_ring {struct ifnet* hn_rxvf_ifp; int hn_chan; } ;


 int FUNC_0 (struct hn_softc*) ;
 int FUNC_1 (struct task*,int ,int ,struct hn_rxvf_setarg*) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct task*) ;

__attribute__((used)) static void
FUNC_3(struct hn_softc *VAR_1, struct ifnet *VAR_2)
{
 struct hn_rx_ring *VAR_3;
 struct hn_rxvf_setarg VAR_4;
 struct task VAR_5;
 int VAR_6;

 FUNC_0(VAR_1);

 FUNC_1(&VAR_5, 0, VAR_0, &VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_1->hn_rx_ring_cnt; ++VAR_6) {
  VAR_3 = &VAR_1->hn_rx_ring[VAR_6];

  if (VAR_6 < VAR_1->hn_rx_ring_inuse) {
   VAR_4.rxr = VAR_3;
   VAR_4.vf_ifp = VAR_2;
   FUNC_2(VAR_3->hn_chan, &VAR_5);
  } else {
   VAR_3->hn_rxvf_ifp = VAR_2;
  }
 }
}
