
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int hn_flags; int hn_rx_ring_cnt; struct hn_rx_ring* hn_rx_ring; } ;
struct hn_rx_ring {int hn_rx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_0(const struct hn_softc *VAR_2)
{
 int VAR_3;

 if (VAR_2->hn_flags & VAR_0)
  return (0);

 for (VAR_3 = 0; VAR_3 < VAR_2->hn_rx_ring_cnt; ++VAR_3) {
  const struct hn_rx_ring *VAR_4 = &VAR_2->hn_rx_ring[VAR_3];

  if (VAR_4->hn_rx_flags & VAR_1)
   return (0);
 }
 return (1);
}
