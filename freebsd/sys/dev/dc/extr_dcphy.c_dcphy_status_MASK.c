
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int mii_capabilities; struct mii_data* mii_pdata; } ;
struct mii_data {int mii_media_active; int mii_media_status; int mii_ifp; } ;
struct dc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dc_softc*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct dc_softc*,int ,int) ;
 scalar_t__ FUNC_2 (struct dc_softc*) ;
 scalar_t__ FUNC_3 (struct dc_softc*) ;
 scalar_t__ FUNC_4 (struct dc_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_5 (int ) ;
 struct dc_softc* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct mii_softc *VAR_30)
{
 struct mii_data *VAR_31 = VAR_30->mii_pdata;
 int VAR_32, VAR_33;
 struct dc_softc *VAR_34;

 VAR_34 = FUNC_6(VAR_31->mii_ifp);

 VAR_31->mii_media_status = VAR_25;
 VAR_31->mii_media_active = VAR_26;

 if ((FUNC_5(VAR_31->mii_ifp) & VAR_20) == 0)
  return;

 VAR_33 = FUNC_0(VAR_34, VAR_9);
 if (!(VAR_33 & VAR_18) || !(VAR_33 & VAR_19))
  VAR_31->mii_media_status |= VAR_24;

 if (FUNC_0(VAR_34, VAR_8) & VAR_15) {

  if ((VAR_33 & VAR_16) != VAR_10) {
   if ((FUNC_3(VAR_34) || FUNC_4(VAR_34)) &&
       (VAR_33 & VAR_16) == VAR_11)
    goto skip;
   VAR_31->mii_media_active |= VAR_29;
   return;
  }

  if (VAR_33 & VAR_17) {
   VAR_32 = VAR_33 >> 16;
   if (VAR_32 & VAR_4 &&
       VAR_30->mii_capabilities & VAR_6)
    VAR_31->mii_media_active |= VAR_22 | VAR_27;
   else if (VAR_32 & VAR_2 &&
       VAR_30->mii_capabilities & VAR_5)
    VAR_31->mii_media_active |= VAR_21 | VAR_28;
   else if (VAR_32 & VAR_3 &&
       VAR_30->mii_capabilities & VAR_7)
    VAR_31->mii_media_active |= VAR_22 | VAR_28;
   else if (VAR_32 & VAR_1)
    VAR_31->mii_media_active |= VAR_23 | VAR_27;
   else if (VAR_32 & VAR_0)
    VAR_31->mii_media_active |= VAR_23 | VAR_28;
   else
    VAR_31->mii_media_active |= VAR_29;
   if (FUNC_2(VAR_34))
    FUNC_1(VAR_34, VAR_8,
        VAR_15);
   return;
  }
  if (!(VAR_33 & VAR_19))
   VAR_31->mii_media_active |= VAR_22 | VAR_28;
  else if (!(VAR_33 & VAR_18))
   VAR_31->mii_media_active |= VAR_23 | VAR_28;
  else
   VAR_31->mii_media_active |= VAR_29;
  if (FUNC_2(VAR_34))
   FUNC_1(VAR_34, VAR_8, VAR_15);
  return;
 }

skip:
 if (FUNC_0(VAR_34, VAR_12) & VAR_14)
  VAR_31->mii_media_active |= VAR_23;
 else
  VAR_31->mii_media_active |= VAR_22;
 if (FUNC_0(VAR_34, VAR_12) & VAR_13)
  VAR_31->mii_media_active |= VAR_27;
 else
  VAR_31->mii_media_active |= VAR_28;
}
