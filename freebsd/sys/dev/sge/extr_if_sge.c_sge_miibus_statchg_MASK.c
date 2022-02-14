
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sge_softc {int sge_flags; struct ifnet* sge_ifp; int sge_miibus; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
typedef int device_t ;


 int FUNC_0 (struct sge_softc*,int ) ;
 int FUNC_1 (struct sge_softc*,int ,int) ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_17)
{
 struct sge_softc *VAR_18;
 struct mii_data *VAR_19;
 struct ifnet *VAR_20;
 uint32_t VAR_21, VAR_22;

 VAR_18 = FUNC_4(VAR_17);
 VAR_19 = FUNC_4(VAR_18->sge_miibus);
 VAR_20 = VAR_18->sge_ifp;
 if (VAR_19 == ((void*)0) || VAR_20 == ((void*)0) ||
     (VAR_20->if_drv_flags & VAR_0) == 0)
  return;
 VAR_22 = 0;
 VAR_18->sge_flags &= ~VAR_13;
 if ((VAR_19->mii_media_status & (VAR_1 | VAR_2)) ==
     (VAR_1 | VAR_2)) {
  switch (FUNC_3(VAR_19->mii_media_active)) {
  case 128:
   VAR_18->sge_flags |= VAR_13;
   VAR_22 = VAR_6;
   break;
  case 129:
   VAR_18->sge_flags |= VAR_13;
   VAR_22 = VAR_7;
   break;
  case 130:
   if ((VAR_18->sge_flags & VAR_10) == 0) {
    VAR_18->sge_flags |= VAR_13;
    VAR_22 = VAR_8;
   }
   break;
  default:
   break;
                }
        }
 if ((VAR_18->sge_flags & VAR_13) == 0)
  return;

 VAR_21 = FUNC_0(VAR_18, VAR_16);
 VAR_21 &= ~(0x0f000000 | VAR_5 | VAR_9);
 if (VAR_22 == VAR_8) {
  VAR_21 |= 0x07000000;
  VAR_18->sge_flags |= VAR_15;
 } else {
  VAR_21 |= 0x04000000;
  VAR_18->sge_flags &= ~VAR_15;
 }




 VAR_21 |= VAR_22;
 if ((FUNC_2(VAR_19->mii_media_active) & VAR_3) != 0) {
  VAR_21 |= VAR_5;
  VAR_18->sge_flags |= VAR_11;
 } else
  VAR_18->sge_flags &= ~VAR_11;
 FUNC_1(VAR_18, VAR_16, VAR_21);
 if ((VAR_18->sge_flags & VAR_14) != 0) {
  FUNC_1(VAR_18, VAR_4, 0x0441);
  FUNC_1(VAR_18, VAR_4, 0x0440);
 }
}
