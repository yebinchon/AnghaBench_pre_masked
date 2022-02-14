
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct bfe_softc {TYPE_1__* sc_mii; int bfe_flags; int bfe_miibus; } ;
typedef int device_t ;
struct TYPE_2__ {int mii_media_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bfe_softc*,int ) ;
 int FUNC_1 (struct bfe_softc*,int ,int ) ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_11)
{
 struct bfe_softc *VAR_12;
 struct mii_data *VAR_13;
 u_int32_t VAR_14, VAR_15;

 VAR_12 = FUNC_4(VAR_11);
 VAR_13 = FUNC_4(VAR_12->bfe_miibus);

 VAR_12->bfe_flags &= ~VAR_0;
 if ((VAR_13->mii_media_status & (VAR_7 | VAR_8)) ==
     (VAR_7 | VAR_8)) {
  switch (FUNC_3(VAR_13->mii_media_active)) {
  case 128:
  case 129:
   VAR_12->bfe_flags |= VAR_0;
   break;
  default:
   break;
  }
 }


 VAR_14 = FUNC_0(VAR_12, VAR_5);
 VAR_14 &= ~VAR_6;
 if ((FUNC_2(VAR_13->mii_media_active) & VAR_10) != 0) {
  VAR_14 |= VAR_6;
  VAR_15 = 0;
 }
 FUNC_1(VAR_12, VAR_5, VAR_14);
}
