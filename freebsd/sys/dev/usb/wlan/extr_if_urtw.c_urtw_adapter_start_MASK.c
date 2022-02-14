
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct ieee80211com {int * ic_macaddr; int ic_vaps; } ;
struct urtw_softc {scalar_t__ (* sc_rf_init ) (struct urtw_softc*) ;int sc_sens; int (* sc_rf_set_sens ) (struct urtw_softc*,int ) ;struct ieee80211com sc_ic; } ;
struct ieee80211vap {int * iv_myaddr; } ;


 struct ieee80211vap* FUNC_0 (int *) ;
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
 scalar_t__ FUNC_1 (struct urtw_softc*) ;
 int FUNC_2 (struct urtw_softc*,int ) ;
 scalar_t__ FUNC_3 (struct urtw_softc*) ;
 scalar_t__ FUNC_4 (struct urtw_softc*,int ) ;
 scalar_t__ FUNC_5 (struct urtw_softc*) ;
 int FUNC_6 (struct urtw_softc*,int const*) ;
 scalar_t__ FUNC_7 (struct urtw_softc*,int ) ;
 scalar_t__ FUNC_8 (struct urtw_softc*) ;
 scalar_t__ FUNC_9 (struct urtw_softc*) ;
 int FUNC_10 (struct urtw_softc*,int ,int) ;
 int FUNC_11 (struct urtw_softc*,int ,int ) ;
 int FUNC_12 (struct urtw_softc*,int ,int) ;

__attribute__((used)) static usb_error_t
FUNC_13(struct urtw_softc *VAR_13)
{
 struct ieee80211com *VAR_14 = &VAR_13->sc_ic;
 struct ieee80211vap *VAR_15 = FUNC_0(&VAR_14->ic_vaps);
 const uint8_t *VAR_16;
 usb_error_t VAR_17;

 VAR_17 = FUNC_5(VAR_13);
 if (VAR_17)
  goto fail;

 FUNC_12(VAR_13, VAR_0, 0);
 FUNC_12(VAR_13, VAR_5, 0);


 FUNC_12(VAR_13, VAR_0, 4);
 VAR_17 = FUNC_4(VAR_13, VAR_7);
 if (VAR_17 != 0)
  goto fail;

 VAR_17 = FUNC_7(VAR_13, VAR_3);
 if (VAR_17)
  goto fail;

 VAR_16 = VAR_15 ? VAR_15->iv_myaddr : VAR_14->ic_macaddr;
 FUNC_6(VAR_13, VAR_16);
 if (VAR_17)
  goto fail;

 VAR_17 = FUNC_7(VAR_13, VAR_4);
 if (VAR_17)
  goto fail;

 VAR_17 = FUNC_9(VAR_13);
 if (VAR_17)
  goto fail;

 FUNC_11(VAR_13, VAR_6, 0);
 FUNC_12(VAR_13, VAR_12, 0);
 FUNC_12(VAR_13, VAR_9, VAR_10 | 0x1);
 VAR_17 = FUNC_8(VAR_13);
 if (VAR_17 != 0)
  goto fail;

 VAR_17 = VAR_13->sc_rf_init(VAR_13);
 if (VAR_17 != 0)
  goto fail;
 if (VAR_13->sc_rf_set_sens != ((void*)0))
  VAR_13->sc_rf_set_sens(VAR_13, VAR_13->sc_sens);


 FUNC_10(VAR_13, VAR_8, 1);
 FUNC_10(VAR_13, VAR_1, 0x10);
 FUNC_12(VAR_13, VAR_11, 0x80);
 FUNC_12(VAR_13, VAR_2, 0x60);

 FUNC_10(VAR_13, VAR_8, 0);
 FUNC_12(VAR_13, VAR_0, 4);

 VAR_17 = FUNC_3(VAR_13);
 if (VAR_17 != 0)
  goto fail;

fail:
 return (VAR_17);
}
