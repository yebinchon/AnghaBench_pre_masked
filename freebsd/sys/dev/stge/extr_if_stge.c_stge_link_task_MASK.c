
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stge_softc {int sc_link; int sc_MACCtrl; int sc_dev; int sc_miibus; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct stge_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (struct stge_softc*) ;
 struct mii_data* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_16, int VAR_17)
{
 struct stge_softc *VAR_18;
 struct mii_data *VAR_19;
 uint32_t VAR_20, VAR_21;
 int VAR_22;

 VAR_18 = (struct stge_softc *)VAR_16;
 FUNC_4(VAR_18);

 VAR_19 = FUNC_6(VAR_18->sc_miibus);
 if (VAR_19->mii_media_status & VAR_3) {
  if (FUNC_3(VAR_19->mii_media_active) != VAR_8)
   VAR_18->sc_link = 1;
 } else
  VAR_18->sc_link = 0;

 VAR_18->sc_MACCtrl = 0;
 if (((VAR_19->mii_media_active & VAR_7) & VAR_6) != 0)
  VAR_18->sc_MACCtrl |= VAR_9;
 if (((VAR_19->mii_media_active & VAR_7) & VAR_4) != 0)
  VAR_18->sc_MACCtrl |= VAR_11;
 if (((VAR_19->mii_media_active & VAR_7) & VAR_5) != 0)
  VAR_18->sc_MACCtrl |= VAR_12;




 VAR_20 = VAR_21 = FUNC_0(VAR_18, VAR_14) & VAR_10;
 VAR_20 &= ~(VAR_9|VAR_11|VAR_12);
 VAR_20 |= VAR_18->sc_MACCtrl;
 FUNC_1(VAR_18, VAR_14, VAR_20);
 if (((VAR_21 ^ VAR_18->sc_MACCtrl) & VAR_9) != 0) {

  VAR_21 = FUNC_0(VAR_18, VAR_13);
  VAR_21 |= VAR_2 | VAR_1;
  FUNC_1(VAR_18, VAR_13, VAR_21);
  for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
   FUNC_2(100);
   if ((FUNC_0(VAR_18, VAR_13) & VAR_0) == 0)
    break;
  }
  if (VAR_22 == VAR_15)
   FUNC_7(VAR_18->sc_dev, "reset failed to complete\n");
 }
 FUNC_5(VAR_18);
}
