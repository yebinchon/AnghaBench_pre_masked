
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sis_softc {int sis_flags; scalar_t__ sis_type; scalar_t__ sis_srr; int sis_dev; struct ifnet* sis_ifp; int sis_miibus; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
typedef int device_t ;


 int FUNC_0 (struct sis_softc*,int ) ;
 int FUNC_1 (struct sis_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int const FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (struct sis_softc*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct sis_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (struct sis_softc*,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_10(device_t VAR_23)
{
 struct sis_softc *VAR_24;
 struct mii_data *VAR_25;
 struct ifnet *VAR_26;
 uint32_t VAR_27;

 VAR_24 = FUNC_8(VAR_23);
 FUNC_6(VAR_24);

 VAR_25 = FUNC_8(VAR_24->sis_miibus);
 VAR_26 = VAR_24->sis_ifp;
 if (VAR_25 == ((void*)0) || VAR_26 == ((void*)0) ||
     (VAR_26->if_drv_flags & VAR_0) == 0)
  return;

 VAR_24->sis_flags &= ~VAR_13;
 if ((VAR_25->mii_media_status & (VAR_1 | VAR_2)) ==
     (VAR_1 | VAR_2)) {
  switch (FUNC_4(VAR_25->mii_media_active)) {
  case 128:
   FUNC_1(VAR_24, VAR_21, VAR_16);
   VAR_24->sis_flags |= VAR_13;
   break;
  case 129:
   FUNC_1(VAR_24, VAR_21, VAR_17);
   VAR_24->sis_flags |= VAR_13;
   break;
  default:
   break;
  }
 }

 if ((VAR_24->sis_flags & VAR_13) == 0) {






  return;
 }


 if ((FUNC_3(VAR_25->mii_media_active) & VAR_3) != 0) {
  FUNC_7(VAR_24, VAR_21,
      (VAR_19 | VAR_18));
  FUNC_7(VAR_24, VAR_15, VAR_14);
 } else {
  FUNC_5(VAR_24, VAR_21,
      (VAR_19 | VAR_18));
  FUNC_5(VAR_24, VAR_15, VAR_14);
 }

 if (VAR_24->sis_type == VAR_22 && VAR_24->sis_srr >= VAR_7) {




  FUNC_7(VAR_24, VAR_21, VAR_20);
 }

 if (VAR_24->sis_type == VAR_22 && VAR_24->sis_srr < VAR_7 &&
     FUNC_4(VAR_25->mii_media_active) == 129) {



  FUNC_1(VAR_24, VAR_5, 0x0001);
  VAR_27 = FUNC_0(VAR_24, VAR_4) & 0xfff;
  FUNC_1(VAR_24, VAR_4, VAR_27 | 0x1000);
  FUNC_2(100);
  VAR_27 = FUNC_0(VAR_24, VAR_6) & 0xff;
  if ((VAR_27 & 0x0080) == 0 || (VAR_27 > 0xd8 && VAR_27 <= 0xff)) {
   FUNC_9(VAR_24->sis_dev,
       "Applying short cable fix (reg=%x)\n", VAR_27);
   FUNC_1(VAR_24, VAR_6, 0x00e8);
   FUNC_7(VAR_24, VAR_4, 0x20);
  }
  FUNC_1(VAR_24, VAR_5, 0);
 }

 FUNC_5(VAR_24, VAR_8, VAR_11 | VAR_9);
 FUNC_7(VAR_24, VAR_8, VAR_12 | VAR_10);
}
