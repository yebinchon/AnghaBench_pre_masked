
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211com {scalar_t__ ic_opmode; scalar_t__ ic_promisc; int ic_macaddr; int ic_curchan; int ic_vaps; } ;
struct rum_softc {int sc_running; scalar_t__ sc_clr_shkeys; int * sc_xfer; int sta; TYPE_1__* wme_params; struct ieee80211com sc_ic; } ;
struct ieee80211vap {int iv_myaddr; } ;
struct TYPE_5__ {int val; int reg; } ;
struct TYPE_4__ {int wmep_aifsn; int wmep_logcwmin; int wmep_logcwmax; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_0 (struct rum_softc*) ;
 int FUNC_1 (struct rum_softc*) ;
 struct ieee80211vap* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct rum_softc*) ;
 int FUNC_5 (struct rum_softc*) ;
 int FUNC_6 (struct rum_softc*) ;
 TYPE_2__* VAR_17 ;
 int FUNC_7 (struct rum_softc*,int ) ;
 int FUNC_8 (struct rum_softc*,int ,int ,int) ;
 int FUNC_9 (struct rum_softc*) ;
 int FUNC_10 (struct rum_softc*,int ) ;
 int FUNC_11 (struct rum_softc*,int ) ;
 int FUNC_12 (struct rum_softc*,int ) ;
 int FUNC_13 (struct rum_softc*) ;
 int FUNC_14 (struct rum_softc*) ;
 int FUNC_15 (struct rum_softc*,int ,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int
FUNC_18(struct rum_softc *VAR_18)
{
 struct ieee80211com *VAR_19 = &VAR_18->sc_ic;
 struct ieee80211vap *VAR_20 = FUNC_2(&VAR_19->ic_vaps);
 uint32_t VAR_21;
 int VAR_22, VAR_23;

 FUNC_0(VAR_18);
 if (VAR_18->sc_running) {
  VAR_23 = 0;
  goto end;
 }


 for (VAR_22 = 0; VAR_22 < FUNC_3(VAR_17); VAR_22++)
  FUNC_15(VAR_18, VAR_17[VAR_22].reg, VAR_17[VAR_22].val);


 VAR_18->wme_params[0].wmep_aifsn = 2;
 VAR_18->wme_params[0].wmep_logcwmin = 4;
 VAR_18->wme_params[0].wmep_logcwmax = 10;


 FUNC_15(VAR_18, VAR_10, VAR_11 | VAR_12);
 FUNC_15(VAR_18, VAR_10, 0);


 if ((VAR_23 = FUNC_5(VAR_18)) != 0)
  goto end;

 if ((VAR_23 = FUNC_4(VAR_18)) != 0)
  goto end;


 FUNC_10(VAR_18, VAR_19->ic_curchan);
 FUNC_9(VAR_18);
 FUNC_11(VAR_18, VAR_19->ic_curchan);


 FUNC_8(VAR_18, VAR_13, VAR_18->sta, sizeof VAR_18->sta);


 if (VAR_18->sc_clr_shkeys == 0) {
  FUNC_6(VAR_18);
  VAR_18->sc_clr_shkeys = 1;
 }

 FUNC_12(VAR_18, VAR_20 ? VAR_20->iv_myaddr : VAR_19->ic_macaddr);


 FUNC_15(VAR_18, VAR_10, VAR_9);




 FUNC_13(VAR_18);


 VAR_21 = FUNC_7(VAR_18, VAR_14) & 0xffff;

 VAR_21 |= VAR_6 | VAR_3;
 if (VAR_19->ic_opmode != VAR_1) {
  VAR_21 |= VAR_4 | VAR_8 |
         VAR_2;
  if (VAR_19->ic_opmode != VAR_0)
   VAR_21 |= VAR_7;
  if (VAR_19->ic_promisc == 0)
   VAR_21 |= VAR_5;
 }
 FUNC_15(VAR_18, VAR_14, VAR_21);

 VAR_18->sc_running = 1;
 FUNC_17(VAR_18->sc_xfer[VAR_16]);
 FUNC_16(VAR_18->sc_xfer[VAR_15]);

end: FUNC_1(VAR_18);

 if (VAR_23 != 0)
  FUNC_14(VAR_18);

 return VAR_23;
}
