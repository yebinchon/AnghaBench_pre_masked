
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hn_softc {int hn_caps; int hn_rx_ring_cnt; TYPE_1__* hn_rx_ring; } ;
struct TYPE_2__ {int hn_rx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct hn_softc *VAR_2)
{

 if (VAR_2->hn_caps & VAR_0) {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2->hn_rx_ring_cnt; ++VAR_3)
   VAR_2->hn_rx_ring[VAR_3].hn_rx_flags |= VAR_1;
 }
}
