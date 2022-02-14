
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
struct bge_softc {int bge_flags; int bge_miibus; } ;
typedef int if_t ;


 int VAR_0 ;
 int FUNC_0 (struct bge_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bge_softc*) ;
 int FUNC_2 (struct bge_softc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct mii_data* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct bge_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_7(if_t VAR_13, struct ifmediareq *VAR_14)
{
 struct bge_softc *VAR_15 = FUNC_5(VAR_13);
 struct mii_data *VAR_16;

 FUNC_0(VAR_15);

 if ((FUNC_4(VAR_13) & VAR_5) == 0) {
  FUNC_1(VAR_15);
  return;
 }
 if (VAR_15->bge_flags & VAR_0) {
  VAR_14->ifm_status = VAR_8;
  VAR_14->ifm_active = VAR_9;
  if (FUNC_2(VAR_15, VAR_4) &
      VAR_2)
   VAR_14->ifm_status |= VAR_7;
  else {
   VAR_14->ifm_active |= VAR_12;
   FUNC_1(VAR_15);
   return;
  }
  VAR_14->ifm_active |= VAR_6;
  if (FUNC_2(VAR_15, VAR_3) & VAR_1)
   VAR_14->ifm_active |= VAR_11;
  else
   VAR_14->ifm_active |= VAR_10;
  FUNC_1(VAR_15);
  return;
 }

 VAR_16 = FUNC_3(VAR_15->bge_miibus);
 FUNC_6(VAR_16);
 VAR_14->ifm_active = VAR_16->mii_media_active;
 VAR_14->ifm_status = VAR_16->mii_media_status;

 FUNC_1(VAR_15);
}
