
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {int if_drv_flags; int if_xname; } ;
struct hn_softc {int hn_flags; int hn_xvf_flags; int hn_tx_ring_inuse; TYPE_2__* hn_tx_ring; TYPE_1__* hn_vf_ifp; struct ifnet* hn_ifp; } ;
struct TYPE_4__ {scalar_t__ hn_oactive; } ;
struct TYPE_3__ {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hn_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct hn_softc*,int ) ;
 int FUNC_4 (struct hn_softc*,int ) ;
 int FUNC_5 (struct hn_softc*) ;
 int FUNC_6 (struct hn_softc*) ;
 int FUNC_7 (struct hn_softc*) ;
 int FUNC_8 (struct hn_softc*) ;
 int FUNC_9 (struct hn_softc*,int) ;

__attribute__((used)) static void
FUNC_10(struct hn_softc *VAR_7, bool VAR_8)
{
 struct ifnet *VAR_9 = VAR_7->hn_ifp;
 int VAR_10;

 FUNC_0(VAR_7);

 FUNC_1(VAR_7->hn_flags & VAR_1,
     ("synthetic parts were not attached"));


 FUNC_2(&VAR_9->if_drv_flags, VAR_5);


 FUNC_4(VAR_7, 0);

 if (VAR_7->hn_xvf_flags & VAR_3) {
  FUNC_1(VAR_7->hn_vf_ifp != ((void*)0),
      ("%s: VF is not attached", VAR_9->if_xname));


  FUNC_9(VAR_7, 0 );






  FUNC_3(VAR_7, VAR_2);




  FUNC_8(VAR_7);
  VAR_7->hn_vf_ifp->if_flags &= ~VAR_6;
  FUNC_7(VAR_7);
 }


 FUNC_6(VAR_7);


 FUNC_2(&VAR_9->if_drv_flags, VAR_4);
 for (VAR_10 = 0; VAR_10 < VAR_7->hn_tx_ring_inuse; ++VAR_10)
  VAR_7->hn_tx_ring[VAR_10].hn_oactive = 0;





 if (!VAR_8 && (VAR_7->hn_flags & VAR_0))
  FUNC_5(VAR_7);
}
