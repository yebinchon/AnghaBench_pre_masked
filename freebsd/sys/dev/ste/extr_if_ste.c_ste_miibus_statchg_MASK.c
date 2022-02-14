
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ste_softc {int ste_flags; struct ifnet* ste_ifp; int ste_miibus; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
typedef int device_t ;


 int FUNC_0 (struct ste_softc*,int ) ;
 int FUNC_1 (struct ste_softc*,int ,int) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_8)
{
 struct ste_softc *VAR_9;
 struct mii_data *VAR_10;
 struct ifnet *VAR_11;
 uint16_t VAR_12;

 VAR_9 = FUNC_4(VAR_8);

 VAR_10 = FUNC_4(VAR_9->ste_miibus);
 VAR_11 = VAR_9->ste_ifp;
 if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0) ||
     (VAR_11->if_drv_flags & VAR_0) == 0)
  return;

 VAR_9->ste_flags &= ~VAR_4;
 if ((VAR_10->mii_media_status & (VAR_1 | VAR_2)) ==
     (VAR_1 | VAR_2)) {
  switch (FUNC_3(VAR_10->mii_media_active)) {
  case 128:
  case 129:
  case 131:
  case 130:
   VAR_9->ste_flags |= VAR_4;
  default:
   break;
  }
 }


 if ((VAR_9->ste_flags & VAR_4) != 0) {
  VAR_12 = FUNC_0(VAR_9, VAR_5);
  VAR_12 &= ~(VAR_6 | VAR_7);
  if ((FUNC_2(VAR_10->mii_media_active) & VAR_3) != 0) {
   VAR_12 |= VAR_7;
  }
  FUNC_1(VAR_9, VAR_5, VAR_12);
 }
}
