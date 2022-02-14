
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct bge_softc {int bge_link; int bge_asicrev; int bge_miibus; int bge_ifp; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bge_softc*,int ) ;
 int FUNC_1 (struct bge_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_10 ;





 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ) ;
 int const FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_16)
{
 struct bge_softc *VAR_17;
 struct mii_data *VAR_18;
 uint32_t VAR_19, VAR_20, VAR_21;

 VAR_17 = FUNC_5(VAR_16);
 if ((FUNC_6(VAR_17->bge_ifp) & VAR_10) == 0)
  return;
 VAR_18 = FUNC_5(VAR_17->bge_miibus);

 if ((VAR_18->mii_media_status & (VAR_11 | VAR_12)) ==
     (VAR_11 | VAR_12)) {
  switch (FUNC_4(VAR_18->mii_media_active)) {
  case 129:
  case 130:
   VAR_17->bge_link = 1;
   break;
  case 131:
  case 132:
  case 128:
   if (VAR_17->bge_asicrev != VAR_0)
    VAR_17->bge_link = 1;
   else
    VAR_17->bge_link = 0;
   break;
  default:
   VAR_17->bge_link = 0;
   break;
  }
 } else
  VAR_17->bge_link = 0;
 if (VAR_17->bge_link == 0)
  return;
 VAR_19 = FUNC_0(VAR_17, VAR_3) &
     ~(VAR_2 | VAR_1);
 VAR_21 = FUNC_0(VAR_17, VAR_9);
 VAR_20 = FUNC_0(VAR_17, VAR_7);

 if (FUNC_4(VAR_18->mii_media_active) == 131 ||
     FUNC_4(VAR_18->mii_media_active) == 132)
  VAR_19 |= VAR_4;
 else
  VAR_19 |= VAR_5;


 VAR_21 &= ~VAR_8;
 VAR_20 &= ~VAR_6;
 if ((FUNC_3(VAR_18->mii_media_active) & VAR_15) != 0) {
  if ((FUNC_3(VAR_18->mii_media_active) & VAR_14) != 0)
   VAR_21 |= VAR_8;
  if ((FUNC_3(VAR_18->mii_media_active) & VAR_13) != 0)
   VAR_20 |= VAR_6;
 } else
  VAR_19 |= VAR_1;

 FUNC_1(VAR_17, VAR_3, VAR_19);
 FUNC_2(40);
 FUNC_1(VAR_17, VAR_9, VAR_21);
 FUNC_1(VAR_17, VAR_7, VAR_20);
}
