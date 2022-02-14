
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vte_softc {int vte_flags; int vte_int_rx_mod; int vte_int_tx_mod; struct ifnet* vte_ifp; int vte_miibus; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
typedef int device_t ;


 int FUNC_0 (struct vte_softc*,int ,int) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int const FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct vte_softc*) ;
 int FUNC_4 (struct vte_softc*) ;
 int FUNC_5 (struct vte_softc*) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_8)
{
 struct vte_softc *VAR_9;
 struct mii_data *VAR_10;
 struct ifnet *VAR_11;
 uint16_t VAR_12;

 VAR_9 = FUNC_2(VAR_8);

 VAR_10 = FUNC_2(VAR_9->vte_miibus);
 VAR_11 = VAR_9->vte_ifp;
 if ((VAR_11->if_drv_flags & VAR_0) == 0)
  return;

 VAR_9->vte_flags &= ~VAR_3;
 if ((VAR_10->mii_media_status & (VAR_1 | VAR_2)) ==
     (VAR_1 | VAR_2)) {
  switch (FUNC_1(VAR_10->mii_media_active)) {
  case 128:
  case 129:
   VAR_9->vte_flags |= VAR_3;
   break;
  default:
   break;
  }
 }


 FUNC_5(VAR_9);

 if ((VAR_9->vte_flags & VAR_3) != 0) {




  if (FUNC_1(VAR_10->mii_media_active) == 129)
   VAR_12 = 18 << VAR_5;
  else
   VAR_12 = 1 << VAR_5;
  VAR_12 |= VAR_9->vte_int_rx_mod << VAR_4;

  FUNC_0(VAR_9, VAR_6, VAR_12);

  if (FUNC_1(VAR_10->mii_media_active) == 129)
   VAR_12 = 18 << VAR_5;
  else
   VAR_12 = 1 << VAR_5;
  VAR_12 |= VAR_9->vte_int_tx_mod << VAR_4;

  FUNC_0(VAR_9, VAR_7, VAR_12);

  FUNC_3(VAR_9);
  FUNC_4(VAR_9);
 }
}
