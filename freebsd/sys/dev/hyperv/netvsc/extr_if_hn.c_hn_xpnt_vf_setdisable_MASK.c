
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hn_softc {int hn_rx_ring_cnt; TYPE_1__* hn_rx_ring; int hn_vf_lock; int * hn_vf_ifp; int hn_xvf_flags; } ;
struct TYPE_2__ {int hn_rx_flags; } ;


 int FUNC_0 (struct hn_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct hn_softc *VAR_2, bool VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2);


 FUNC_1(&VAR_2->hn_vf_lock);
 VAR_2->hn_xvf_flags &= ~VAR_1;
 if (VAR_3)
  VAR_2->hn_vf_ifp = ((void*)0);
 FUNC_2(&VAR_2->hn_vf_lock);

 for (VAR_4 = 0; VAR_4 < VAR_2->hn_rx_ring_cnt; ++VAR_4)
  VAR_2->hn_rx_ring[VAR_4].hn_rx_flags &= ~VAR_0;
}
