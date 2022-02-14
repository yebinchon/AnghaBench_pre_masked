
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
struct alc_softc {int alc_flags; struct ifnet* alc_ifp; int alc_miibus; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct alc_softc*,int ) ;
 int FUNC_1 (struct alc_softc*,int ,int) ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct alc_softc*,int ,int) ;
 int FUNC_4 (struct alc_softc*,int) ;
 int FUNC_5 (struct alc_softc*) ;
 int FUNC_6 (struct alc_softc*) ;
 int FUNC_7 (struct alc_softc*) ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_8)
{
 struct alc_softc *VAR_9;
 struct mii_data *VAR_10;
 struct ifnet *VAR_11;
 uint32_t VAR_12;

 VAR_9 = FUNC_8(VAR_8);

 VAR_10 = FUNC_8(VAR_9->alc_miibus);
 VAR_11 = VAR_9->alc_ifp;
 if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0) ||
     (VAR_11->if_drv_flags & VAR_3) == 0)
  return;

 VAR_9->alc_flags &= ~VAR_1;
 if ((VAR_10->mii_media_status & (VAR_4 | VAR_5)) ==
     (VAR_4 | VAR_5)) {
  switch (FUNC_2(VAR_10->mii_media_active)) {
  case 128:
  case 129:
   VAR_9->alc_flags |= VAR_1;
   break;
  case 130:
   if ((VAR_9->alc_flags & VAR_0) == 0)
    VAR_9->alc_flags |= VAR_1;
   break;
  default:
   break;
  }
 }

 FUNC_7(VAR_9);


 if ((VAR_9->alc_flags & VAR_1) != 0) {
  FUNC_6(VAR_9);
  FUNC_5(VAR_9);

  VAR_12 = FUNC_0(VAR_9, VAR_2);
  VAR_12 |= VAR_7 | VAR_6;
  FUNC_1(VAR_9, VAR_2, VAR_12);
 }
 FUNC_3(VAR_9, 0, FUNC_2(VAR_10->mii_media_active));
 FUNC_4(VAR_9, FUNC_2(VAR_10->mii_media_active));
}
