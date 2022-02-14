
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hn_softc {int hn_tx_ring_cnt; TYPE_1__* hn_tx_ring; } ;
struct TYPE_2__ {int hn_chim_size; } ;



__attribute__((used)) static void
FUNC_0(struct hn_softc *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->hn_tx_ring_cnt; ++VAR_2)
  VAR_0->hn_tx_ring[VAR_2].hn_chim_size = VAR_1;
}
