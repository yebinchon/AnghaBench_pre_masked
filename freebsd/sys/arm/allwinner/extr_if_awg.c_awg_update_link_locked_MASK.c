
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct awg_softc {int link; int miibus; int ifp; } ;


 int FUNC_0 (struct awg_softc*) ;
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




 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int const FUNC_2 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct awg_softc*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (struct awg_softc*,int ,int) ;
 int VAR_19 ;
 struct mii_data* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct awg_softc *VAR_20)
{
 struct mii_data *VAR_21;
 uint32_t VAR_22;

 FUNC_0(VAR_20);

 if ((FUNC_6(VAR_20->ifp) & VAR_9) == 0)
  return;
 VAR_21 = FUNC_5(VAR_20->miibus);

 if ((VAR_21->mii_media_status & (VAR_10 | VAR_11)) ==
     (VAR_10 | VAR_11)) {
  switch (FUNC_2(VAR_21->mii_media_active)) {
  case 130:
  case 131:
  case 129:
  case 128:
   VAR_20->link = 1;
   break;
  default:
   VAR_20->link = 0;
   break;
  }
 } else
  VAR_20->link = 0;

 if (VAR_20->link == 0)
  return;

 VAR_22 = FUNC_3(VAR_20, VAR_6);
 VAR_22 &= ~(VAR_1 | VAR_0);

 if (FUNC_2(VAR_21->mii_media_active) == 130 ||
     FUNC_2(VAR_21->mii_media_active) == 131)
  VAR_22 |= VAR_4 << VAR_5;
 else if (FUNC_2(VAR_21->mii_media_active) == 129)
  VAR_22 |= VAR_3 << VAR_5;
 else
  VAR_22 |= VAR_2 << VAR_5;

 if ((FUNC_1(VAR_21->mii_media_active) & VAR_14) != 0)
  VAR_22 |= VAR_0;

 FUNC_4(VAR_20, VAR_6, VAR_22);

 VAR_22 = FUNC_3(VAR_20, VAR_7);
 VAR_22 &= ~VAR_17;
 if ((FUNC_1(VAR_21->mii_media_active) & VAR_12) != 0)
  VAR_22 |= VAR_17;
 FUNC_4(VAR_20, VAR_7, VAR_22);

 VAR_22 = FUNC_3(VAR_20, VAR_8);
 VAR_22 &= ~(VAR_15|VAR_18);
 if ((FUNC_1(VAR_21->mii_media_active) & VAR_13) != 0)
  VAR_22 |= VAR_18;
 if ((FUNC_1(VAR_21->mii_media_active) & VAR_14) != 0)
  VAR_22 |= VAR_19 << VAR_16;
 FUNC_4(VAR_20, VAR_8, VAR_22);
}
