
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mii_data {int mii_media_active; } ;
struct alc_softc {int alc_flags; TYPE_1__* alc_ident; int alc_miibus; } ;
struct TYPE_2__ {scalar_t__ deviceid; } ;


 int VAR_0 ;
 int FUNC_0 (struct alc_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct alc_softc*,int ) ;
 int FUNC_2 (struct alc_softc*,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct mii_data* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct alc_softc *VAR_16)
{
 struct mii_data *VAR_17;
 uint32_t VAR_18;

 FUNC_0(VAR_16);

 VAR_17 = FUNC_5(VAR_16->alc_miibus);
 VAR_18 = FUNC_1(VAR_16, VAR_1);
 VAR_18 &= ~(VAR_8 | VAR_15 | VAR_10 |
     VAR_13);
 if ((VAR_16->alc_flags & VAR_0) != 0 ||
     VAR_16->alc_ident->deviceid == VAR_2 ||
     VAR_16->alc_ident->deviceid == VAR_3 ||
     VAR_16->alc_ident->deviceid == VAR_4)
  VAR_18 |= VAR_9 | VAR_14;

 switch (FUNC_4(VAR_17->mii_media_active)) {
 case 128:
 case 129:
  VAR_18 |= VAR_12;
  break;
 case 130:
  VAR_18 |= VAR_11;
  break;
 }
 if ((FUNC_3(VAR_17->mii_media_active) & VAR_7) != 0) {
  VAR_18 |= VAR_8;
  if ((FUNC_3(VAR_17->mii_media_active) & VAR_6) != 0)
   VAR_18 |= VAR_15;
  if ((FUNC_3(VAR_17->mii_media_active) & VAR_5) != 0)
   VAR_18 |= VAR_10;
 }
 FUNC_2(VAR_16, VAR_1, VAR_18);
}
