
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct hn_softc {int hn_flags; int hn_vf_lock; int * hn_xact; int hn_prichan; int * hn_vf_taskq; int * hn_mgmt_taskq0; int ** hn_tx_taskqs; int hn_media; struct ifnet* hn_vf_ifp; int * hn_ifnet_lnkhand; int * hn_ifnet_dethand; int * hn_ifnet_atthand; int * hn_ifnet_evthand; int * hn_ifaddr_evthand; struct ifnet* hn_ifp; } ;
typedef int device_t ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct hn_softc*) ;
 int FUNC_2 (struct hn_softc*) ;
 int FUNC_3 (struct hn_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 struct hn_softc* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (struct hn_softc*) ;
 int FUNC_10 (struct hn_softc*) ;
 int FUNC_11 (struct hn_softc*,struct ifnet*) ;
 int FUNC_12 (struct hn_softc*,int) ;
 int FUNC_13 (struct hn_softc*) ;
 int FUNC_14 (struct hn_softc*) ;
 int VAR_4 ;
 int ** VAR_5 ;
 int FUNC_15 (struct ifnet*) ;
 int VAR_6 ;
 int FUNC_16 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_10)
{
 struct hn_softc *VAR_11 = FUNC_5(VAR_10);
 struct ifnet *VAR_12 = VAR_11->hn_ifp, *VAR_13;

 if (VAR_11->hn_xact != ((void*)0) && FUNC_19(VAR_11->hn_prichan)) {




  FUNC_22(VAR_11->hn_xact);
 }

 if (VAR_11->hn_ifaddr_evthand != ((void*)0))
  FUNC_0(VAR_6, VAR_11->hn_ifaddr_evthand);
 if (VAR_11->hn_ifnet_evthand != ((void*)0))
  FUNC_0(VAR_8, VAR_11->hn_ifnet_evthand);
 if (VAR_11->hn_ifnet_atthand != ((void*)0)) {
  FUNC_0(VAR_3,
      VAR_11->hn_ifnet_atthand);
 }
 if (VAR_11->hn_ifnet_dethand != ((void*)0)) {
  FUNC_0(VAR_7,
      VAR_11->hn_ifnet_dethand);
 }
 if (VAR_11->hn_ifnet_lnkhand != ((void*)0))
  FUNC_0(VAR_9, VAR_11->hn_ifnet_lnkhand);

 VAR_13 = VAR_11->hn_vf_ifp;
 FUNC_4();
 if (VAR_13 != ((void*)0))
  FUNC_11(VAR_11, VAR_13);

 if (FUNC_6(VAR_10)) {
  FUNC_1(VAR_11);
  if (VAR_11->hn_flags & VAR_0) {
   if (VAR_12->if_drv_flags & VAR_1)
    FUNC_12(VAR_11, 1);





   FUNC_13(VAR_11);
   FUNC_14(VAR_11);
  }
  FUNC_3(VAR_11);
  FUNC_7(VAR_12);
 }

 FUNC_16(&VAR_11->hn_media);
 FUNC_9(VAR_11);
 FUNC_10(VAR_11);

 if (VAR_11->hn_tx_taskqs != ((void*)0) && VAR_11->hn_tx_taskqs != VAR_5) {
  int VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_4; ++VAR_14)
   FUNC_18(VAR_11->hn_tx_taskqs[VAR_14]);
  FUNC_8(VAR_11->hn_tx_taskqs, VAR_2);
 }
 FUNC_18(VAR_11->hn_mgmt_taskq0);
 if (VAR_11->hn_vf_taskq != ((void*)0))
  FUNC_18(VAR_11->hn_vf_taskq);

 if (VAR_11->hn_xact != ((void*)0)) {




  FUNC_20(VAR_11->hn_prichan);
  FUNC_21(VAR_11->hn_xact);
 }

 FUNC_15(VAR_12);

 FUNC_2(VAR_11);
 FUNC_17(&VAR_11->hn_vf_lock);
 return (0);
}
