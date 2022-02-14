
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
struct atse_softc {int atse_flags; struct ifnet* atse_ifp; int atse_miibus; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct atse_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct atse_softc*,int ) ;
 int FUNC_2 (struct atse_softc*,int ,int ) ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int ) ;

void
FUNC_6(device_t VAR_11)
{
 struct atse_softc *VAR_12;
 struct mii_data *VAR_13;
 struct ifnet *VAR_14;
 uint32_t VAR_15;

 VAR_12 = FUNC_5(VAR_11);
 FUNC_0(VAR_12);

 VAR_13 = FUNC_5(VAR_12->atse_miibus);
 VAR_14 = VAR_12->atse_ifp;
 if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0) ||
     (VAR_14->if_drv_flags & VAR_7) == 0) {
  return;
 }

 VAR_15 = FUNC_1(VAR_12, VAR_1);


 VAR_12->atse_flags &= ~VAR_0;

 if ((VAR_13->mii_media_status & (VAR_8 | VAR_9)) ==
     (VAR_8 | VAR_9)) {

  switch (FUNC_4(VAR_13->mii_media_active)) {
  case 128:
   VAR_15 |= VAR_2;
   VAR_15 &= ~VAR_3;
   VAR_12->atse_flags |= VAR_0;
   break;
  case 129:
   VAR_15 &= ~VAR_2;
   VAR_15 &= ~VAR_3;
   VAR_12->atse_flags |= VAR_0;
   break;
  case 130:
   VAR_15 &= ~VAR_2;
   VAR_15 |= VAR_3;
   VAR_12->atse_flags |= VAR_0;
   break;
  default:
   break;
  }
 }

 if ((VAR_12->atse_flags & VAR_0) == 0) {

  return;
 }

 if (FUNC_3(VAR_13->mii_media_active & VAR_10) != 0) {
  VAR_15 &= ~VAR_4;
 } else {
  VAR_15 |= VAR_4;
 }




 VAR_15 |= VAR_6;
 VAR_15 |= VAR_5;

 FUNC_2(VAR_12, VAR_1, VAR_15);
}
