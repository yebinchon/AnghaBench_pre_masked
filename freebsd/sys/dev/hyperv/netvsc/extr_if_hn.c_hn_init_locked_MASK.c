
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
struct hn_softc {int hn_flags; int hn_tx_ring_inuse; scalar_t__ hn_pollhz; TYPE_1__* hn_tx_ring; struct ifnet* hn_ifp; } ;
struct TYPE_2__ {scalar_t__ hn_oactive; } ;


 int VAR_0 ;
 int FUNC_0 (struct hn_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (struct hn_softc*,scalar_t__) ;
 int FUNC_4 (struct hn_softc*,int) ;
 int FUNC_5 (struct hn_softc*) ;
 int FUNC_6 (struct hn_softc*) ;
 scalar_t__ FUNC_7 (struct hn_softc*) ;

__attribute__((used)) static void
FUNC_8(struct hn_softc *VAR_3)
{
 struct ifnet *VAR_4 = VAR_3->hn_ifp;
 int VAR_5;

 FUNC_0(VAR_3);

 if ((VAR_3->hn_flags & VAR_0) == 0)
  return;

 if (VAR_4->if_drv_flags & VAR_2)
  return;


 FUNC_5(VAR_3);


 FUNC_1(&VAR_4->if_drv_flags, VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_3->hn_tx_ring_inuse; ++VAR_5)
  VAR_3->hn_tx_ring[VAR_5].hn_oactive = 0;


 FUNC_4(VAR_3, VAR_3->hn_tx_ring_inuse);

 if (FUNC_7(VAR_3)) {

  FUNC_6(VAR_3);
 }


 FUNC_2(&VAR_4->if_drv_flags, VAR_2);


 if (VAR_3->hn_pollhz > 0)
  FUNC_3(VAR_3, VAR_3->hn_pollhz);
}
