
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint32_t ;
struct ieee80211com {int ic_curchan; int ic_macaddr; int ic_vaps; } ;
struct uath_softc {int sc_flags; int watchdog_ch; int * sc_xfer; int sc_dev; scalar_t__ sc_msgid; scalar_t__ sc_intrx_nextnum; struct ieee80211com sc_ic; } ;
struct ieee80211vap {int iv_myaddr; } ;


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
 int FUNC_0 (struct uath_softc*,int ,char*,int ,int ) ;
 int VAR_14 ;
 struct ieee80211vap* FUNC_1 (int *) ;
 int VAR_15 ;
 int FUNC_2 (struct uath_softc*) ;
 size_t VAR_16 ;
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
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,struct uath_softc*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;
 int VAR_30 ;
 int FUNC_7 (struct uath_softc*,int ,int *,int ,int *,int,int ) ;
 int FUNC_8 (struct uath_softc*,int ,int *,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct uath_softc*,int ,int) ;
 int FUNC_11 (struct uath_softc*,int ,int ,int ) ;
 int FUNC_12 (struct uath_softc*,int,int ) ;
 int FUNC_13 (struct uath_softc*) ;
 int FUNC_14 (struct uath_softc*,int ) ;
 int VAR_31 ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(struct uath_softc *VAR_32)
{
 struct ieee80211com *VAR_33 = &VAR_32->sc_ic;
 struct ieee80211vap *VAR_34 = FUNC_1(&VAR_33->ic_vaps);
 uint32_t VAR_35;
 int VAR_36;

 FUNC_2(VAR_32);

 if (VAR_32->sc_flags & VAR_25)
  FUNC_13(VAR_32);


 VAR_32->sc_intrx_nextnum = VAR_32->sc_msgid = 0;

 VAR_35 = FUNC_6(0);
 FUNC_8(VAR_32, VAR_26, &VAR_35, sizeof VAR_35, 0);


 FUNC_11(VAR_32, VAR_4,
     VAR_34 ? VAR_34->iv_myaddr : VAR_33->ic_macaddr, VAR_14);


 FUNC_10(VAR_32, VAR_8, 0x00000001);
 FUNC_10(VAR_32, VAR_1, 0x00000001);
 FUNC_10(VAR_32, VAR_0, 0x0000003f);
 FUNC_10(VAR_32, VAR_13, 0x00000001);

 FUNC_10(VAR_32, VAR_9, 1);
 FUNC_10(VAR_32, VAR_12, 0x00000000);
 FUNC_10(VAR_32, VAR_11, 0x0000003c);
 FUNC_10(VAR_32, VAR_10, 0x0000003c);
 FUNC_10(VAR_32, VAR_6, 0x00000000);
 FUNC_10(VAR_32, VAR_2, 0x00000000);
 FUNC_10(VAR_32, VAR_3, 0x00000003);
 FUNC_10(VAR_32, VAR_7, 0x00000000);
 FUNC_10(VAR_32, VAR_5, 0x00000002);

 VAR_36 = FUNC_7(VAR_32, VAR_29, ((void*)0), 0,
     &VAR_35, sizeof(VAR_35), VAR_17);
 if (VAR_36) {
  FUNC_5(VAR_32->sc_dev,
      "could not start target, error %d\n", VAR_36);
  goto fail;
 }
 FUNC_0(VAR_32, VAR_18, "%s returns handle: 0x%x\n",
     FUNC_9(VAR_29), FUNC_3(VAR_35));


 VAR_36 = FUNC_14(VAR_32, VAR_33->ic_curchan);
 if (VAR_36) {
  FUNC_5(VAR_32->sc_dev,
      "could not switch channel, error %d\n", VAR_36);
  goto fail;
 }

 VAR_35 = FUNC_6(VAR_15);
 FUNC_8(VAR_32, VAR_28, &VAR_35, sizeof VAR_35, 0);

 FUNC_8(VAR_32, VAR_27, ((void*)0), 0, 0);

 FUNC_15(VAR_32->sc_xfer[VAR_16]);

 FUNC_12(VAR_32, 0x0, VAR_19);
 FUNC_12(VAR_32,
     VAR_24 | VAR_23 |
     VAR_21 | VAR_22,
     VAR_20);

 VAR_32->sc_flags |= VAR_25;

 FUNC_4(&VAR_32->watchdog_ch, VAR_30, VAR_31, VAR_32);

 return (0);

fail:
 FUNC_13(VAR_32);
 return (VAR_36);
}
