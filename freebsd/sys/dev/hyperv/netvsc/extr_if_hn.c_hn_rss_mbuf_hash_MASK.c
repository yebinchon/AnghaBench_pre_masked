
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct hn_softc {int hn_rx_ring_cnt; TYPE_1__* hn_rx_ring; } ;
struct TYPE_2__ {int hn_mbuf_hash; } ;


 int FUNC_0 (struct hn_softc*) ;

__attribute__((used)) static void
FUNC_1(struct hn_softc *VAR_0, uint32_t VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_0->hn_rx_ring_cnt; ++VAR_2)
  VAR_0->hn_rx_ring[VAR_2].hn_mbuf_hash = VAR_1;
}
