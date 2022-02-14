
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_softc {int mii_ticks; struct mii_data* mii_pdata; } ;
struct mii_data {scalar_t__ mii_media_active; int mii_media_status; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_3(struct mii_softc *VAR_22)
{
 struct mii_data *VAR_23 = VAR_22->mii_pdata;
 uint32_t VAR_24, VAR_25, VAR_26;

 VAR_23->mii_media_status = VAR_12;
 VAR_23->mii_media_active = VAR_13;

 VAR_24 = FUNC_1(VAR_22, VAR_21) | FUNC_1(VAR_22, VAR_21);
 if ((VAR_24 & VAR_6) != 0)
  VAR_23->mii_media_status |= VAR_11;

 VAR_25 = FUNC_1(VAR_22, VAR_20);
 if ((VAR_25 & VAR_4) != 0) {
  VAR_23->mii_media_active |= VAR_18;
  VAR_23->mii_media_status = 0;
  return;
 }

 if ((VAR_25 & VAR_5) != 0)
  VAR_23->mii_media_active |= VAR_17;

 VAR_26 = FUNC_1(VAR_22, VAR_0);
 if ((VAR_26 & VAR_2) == 0) {

  VAR_23->mii_media_active |= VAR_18;
  return;
 }

 switch (VAR_26 & VAR_3) {
 case 130:
  VAR_23->mii_media_active |= VAR_8;





  VAR_22->mii_ticks = 0;
  break;
 case 129:
  VAR_23->mii_media_active |= VAR_9;
  VAR_22->mii_ticks = 0;
  break;
 case 128:
  VAR_23->mii_media_active |= VAR_10;
  VAR_22->mii_ticks = 0;
  break;
 default:
  VAR_23->mii_media_active |= VAR_18;
  return;
 }

 if ((VAR_26 & VAR_1) != 0)
  VAR_23->mii_media_active |= VAR_15 | FUNC_2(VAR_22);
 else
  VAR_23->mii_media_active |= VAR_16;

 if ((FUNC_0(VAR_23->mii_media_active) == VAR_8) &&
     (FUNC_1(VAR_22, VAR_19) & VAR_7) != 0)
  VAR_23->mii_media_active |= VAR_14;
}
