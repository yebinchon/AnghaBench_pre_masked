
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
struct TYPE_2__ {int* an_tx_ring; scalar_t__ an_tx_cons; int an_tx_empty; scalar_t__ an_tx_prod; } ;
struct an_softc {TYPE_1__ an_rdata; int mpi350; scalar_t__ an_timer; struct ifnet* an_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct an_softc*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct an_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct ifnet*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct an_softc *VAR_6, int VAR_7)
{
 struct ifnet *VAR_8;
 int VAR_9, VAR_10;

 FUNC_1(VAR_6);
 VAR_8 = VAR_6->an_ifp;

 VAR_6->an_timer = 0;
 VAR_8->if_drv_flags &= ~VAR_5;

 if (!VAR_6->mpi350) {
  VAR_9 = FUNC_3(VAR_6, FUNC_2(VAR_6->mpi350));

  if (VAR_7 & VAR_0) {
   FUNC_4(VAR_8, VAR_3, 1);
  } else
   FUNC_4(VAR_8, VAR_4, 1);

  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
   if (VAR_9 == VAR_6->an_rdata.an_tx_ring[VAR_10]) {
    VAR_6->an_rdata.an_tx_ring[VAR_10] = 0;
    break;
   }
  }

  FUNC_0(VAR_6->an_rdata.an_tx_cons, VAR_2);
 } else {
  VAR_9 = FUNC_3(VAR_6, FUNC_2(VAR_6->mpi350));
  if (!VAR_6->an_rdata.an_tx_empty){
   if (VAR_7 & VAR_0) {
    FUNC_4(VAR_8, VAR_3, 1);
   } else
    FUNC_4(VAR_8, VAR_4, 1);
   FUNC_0(VAR_6->an_rdata.an_tx_cons, VAR_1);
   if (VAR_6->an_rdata.an_tx_prod ==
       VAR_6->an_rdata.an_tx_cons)
    VAR_6->an_rdata.an_tx_empty = 1;
  }
 }

 return;
}
