
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
struct age_softc {int age_flags; struct ifnet* age_ifp; int age_miibus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct age_softc*) ;
 int VAR_2 ;
 int FUNC_1 (struct age_softc*) ;
 int FUNC_2 (struct age_softc*,int ) ;
 int FUNC_3 (struct age_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct age_softc*) ;
 int FUNC_6 (struct age_softc*) ;
 int FUNC_7 (struct age_softc*) ;
 struct mii_data* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_9, int VAR_10)
{
 struct age_softc *VAR_11;
 struct mii_data *VAR_12;
 struct ifnet *VAR_13;
 uint32_t VAR_14;

 VAR_11 = (struct age_softc *)VAR_9;

 FUNC_0(VAR_11);
 VAR_12 = FUNC_8(VAR_11->age_miibus);
 VAR_13 = VAR_11->age_ifp;
 if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0) ||
     (VAR_13->if_drv_flags & VAR_5) == 0) {
  FUNC_1(VAR_11);
  return;
 }

 VAR_11->age_flags &= ~VAR_1;
 if ((VAR_12->mii_media_status & VAR_6) != 0) {
  switch (FUNC_4(VAR_12->mii_media_active)) {
  case 128:
  case 129:
  case 130:
   VAR_11->age_flags |= VAR_1;
   break;
  default:
   break;
  }
 }


 FUNC_6(VAR_11);
 FUNC_7(VAR_11);


 if ((VAR_11->age_flags & VAR_1) != 0) {
  FUNC_5(VAR_11);
  VAR_14 = FUNC_2(VAR_11, VAR_2);

  FUNC_3(VAR_11, VAR_0, FUNC_2(VAR_11, VAR_0) |
      VAR_3 | VAR_4);
  VAR_14 |= VAR_8 | VAR_7;
  FUNC_3(VAR_11, VAR_2, VAR_14);
 }

 FUNC_1(VAR_11);
}
