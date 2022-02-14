
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ieee80211_channel* ic_curchan; } ;
struct rtwn_softc {TYPE_1__ sc_ic; struct r12a_softc* sc_priv; } ;
struct r12a_softc {int rs_flags; int ext_lna_5g; int ext_pa_5g; } ;
struct r12a_fw_cmd_iq_calib {int ext_5g_pa_lna; int band_bw; int chan; } ;
struct ieee80211_channel {int dummy; } ;
typedef int cmd ;


 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (struct rtwn_softc*,int ,char*) ;
 scalar_t__ FUNC_5 (struct rtwn_softc*,int ,struct r12a_fw_cmd_iq_calib*,int) ;
 int FUNC_6 (struct ieee80211_channel*) ;

void
FUNC_7(struct rtwn_softc *VAR_7)
{
 struct r12a_softc *VAR_8 = VAR_7->sc_priv;
 struct ieee80211_channel *VAR_9 = VAR_7->sc_ic.ic_curchan;
 struct r12a_fw_cmd_iq_calib VAR_10;

 if (VAR_8->rs_flags & VAR_1)
  return;

 FUNC_4(VAR_7, VAR_6, "Starting IQ calibration (FW)\n");

 VAR_10.chan = FUNC_6(VAR_9);
 if (FUNC_0(VAR_9))
  VAR_10.band_bw = VAR_3;
 else
  VAR_10.band_bw = VAR_2;


 if (FUNC_1(VAR_9))
  VAR_10.band_bw |= VAR_5;
 else
  VAR_10.band_bw |= VAR_4;

 VAR_10.ext_5g_pa_lna = FUNC_3(VAR_8->ext_pa_5g);
 VAR_10.ext_5g_pa_lna |= FUNC_2(VAR_8->ext_lna_5g);

 if (FUNC_5(VAR_7, VAR_0, &VAR_10, sizeof(VAR_10)) != 0) {
  FUNC_4(VAR_7, VAR_6,
      "error while sending IQ calibration command to FW!\n");
  return;
 }

 VAR_8->rs_flags |= VAR_1;
}
