
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int mii_ticks; struct mii_data* mii_pdata; } ;
struct mii_data {scalar_t__ mii_media_active; int mii_media_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;



 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_3(struct mii_softc *VAR_21)
{
 struct mii_data *VAR_22 = VAR_21->mii_pdata;
 int VAR_23, VAR_24;

 VAR_22->mii_media_status = VAR_7;
 VAR_22->mii_media_active = VAR_8;

 VAR_24 = FUNC_1(VAR_21, VAR_14);
 if ((VAR_24 & VAR_16) != 0)
  VAR_22->mii_media_status |= VAR_6;

 VAR_23 = FUNC_1(VAR_21, VAR_20);
 if ((VAR_23 & VAR_0) != 0) {
  VAR_22->mii_media_active |= VAR_13;
  VAR_22->mii_media_status = 0;
  return;
 }

 if ((VAR_23 & VAR_1) != 0)
  VAR_22->mii_media_active |= VAR_12;

 if ((VAR_24 & VAR_17) == 0) {

  VAR_22->mii_media_active |= VAR_13;
  return;
 }

 switch ((VAR_24 & VAR_18)) {
 case 128:
  VAR_22->mii_media_active |= VAR_3;





  VAR_21->mii_ticks = 0;
  break;
 case 129:
  VAR_22->mii_media_active |= VAR_4;
  VAR_21->mii_ticks = 0;
  break;
 case 130:
  VAR_22->mii_media_active |= VAR_5;
  VAR_21->mii_ticks = 0;
  break;
 default:
  VAR_22->mii_media_active |= VAR_13;
  return;
 }

 if ((VAR_24 & VAR_15) != 0)
  VAR_22->mii_media_active |= VAR_10 | FUNC_2(VAR_21);
 else
  VAR_22->mii_media_active |= VAR_11;

 if (FUNC_0(VAR_22->mii_media_active) == VAR_3) {
  if ((FUNC_1(VAR_21, VAR_19) & VAR_2) != 0)
   VAR_22->mii_media_active |= VAR_9;
 }
}
