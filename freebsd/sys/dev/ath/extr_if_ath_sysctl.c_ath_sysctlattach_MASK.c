
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ath_softc {int sc_eecc; int sc_eerd; int sc_ledon; int sc_ledidle; int sc_txintrperiod; int sc_monpass; int sc_tdmadbaprep; int sc_tdmaswbaprep; int sc_tdmaguard; int sc_tdmabintval; int sc_cabq_enable; int sc_txq_node_maxdepth; int sc_txq_mcastq_maxdepth; int sc_txq_data_minfree; int sc_delim_min_pad; int sc_rts_aggr_limit; int sc_aggr_limit; int sc_tid_hwq_hi; int sc_tid_hwq_lo; int sc_hwq_limit_aggr; int sc_hwq_limit_nonaggr; int sc_led_pwr_pin; int sc_led_net_pin; int sc_ktrdebug; int sc_debug; struct ath_hal* sc_ah; int sc_dev; } ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,struct ath_softc*,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,int ,int ,char*,int,int*,int ,char*) ;
 int FUNC_4 (struct sysctl_oid*) ;
 scalar_t__ FUNC_5 (struct ath_hal*) ;
 scalar_t__ FUNC_6 (struct ath_hal*) ;
 scalar_t__ FUNC_7 (struct ath_hal*) ;
 scalar_t__ FUNC_8 (struct ath_hal*) ;
 int FUNC_9 (struct ath_hal*) ;
 int VAR_7 ;
 int FUNC_10 (struct ath_softc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
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
 struct sysctl_ctx_list* FUNC_11 (int ) ;
 struct sysctl_oid* FUNC_12 (int ) ;

void
FUNC_13(struct ath_softc *VAR_28)
{
 struct sysctl_ctx_list *VAR_29 = FUNC_11(VAR_28->sc_dev);
 struct sysctl_oid *VAR_30 = FUNC_12(VAR_28->sc_dev);
 struct ath_hal *VAR_31 = VAR_28->sc_ah;

 FUNC_3(VAR_29, FUNC_4(VAR_30), VAR_6,
  "countrycode", VAR_1, &VAR_28->sc_eecc, 0,
  "EEPROM country code");
 FUNC_3(VAR_29, FUNC_4(VAR_30), VAR_6,
  "regdomain", VAR_1, &VAR_28->sc_eerd, 0,
  "EEPROM regdomain code");
 FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
  "slottime", VAR_3 | VAR_2, VAR_28, 0,
  VAR_20, "I", "802.11 slot time (us)");
 FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
  "acktimeout", VAR_3 | VAR_2, VAR_28, 0,
  VAR_7, "I", "802.11 ACK timeout (us)");
 FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
  "ctstimeout", VAR_3 | VAR_2, VAR_28, 0,
  VAR_8, "I", "802.11 CTS timeout (us)");

 FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
  "softled", VAR_3 | VAR_2, VAR_28, 0,
  VAR_21, "I", "enable/disable software LED support");
 FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
  "ledpin", VAR_3 | VAR_2, VAR_28, 0,
  VAR_15, "I", "GPIO pin connected to LED");
 FUNC_3(VAR_29, FUNC_4(VAR_30), VAR_6,
  "ledon", VAR_2, &VAR_28->sc_ledon, 0,
  "setting to turn LED on");
 FUNC_3(VAR_29, FUNC_4(VAR_30), VAR_6,
  "ledidle", VAR_2, &VAR_28->sc_ledidle, 0,
  "idle time for inactivity LED (ticks)");

 FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
  "hardled", VAR_3 | VAR_2, VAR_28, 0,
  VAR_13, "I", "enable/disable hardware LED support");

 FUNC_0(VAR_29, FUNC_4(VAR_30), VAR_6,
  "led_net_pin", VAR_2, &VAR_28->sc_led_net_pin, 0,
  "MAC Network LED pin, or -1 to disable");
 FUNC_0(VAR_29, FUNC_4(VAR_30), VAR_6,
  "led_pwr_pin", VAR_2, &VAR_28->sc_led_pwr_pin, 0,
  "MAC Power LED pin, or -1 to disable");

 FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
  "txantenna", VAR_3 | VAR_2, VAR_28, 0,
  VAR_27, "I", "antenna switch");
 FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
  "rxantenna", VAR_3 | VAR_2, VAR_28, 0,
  VAR_18, "I", "default/rx antenna");
 if (FUNC_5(VAR_31))
  FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
   "diversity", VAR_3 | VAR_2, VAR_28, 0,
   VAR_10, "I", "antenna diversity");
 VAR_28->sc_txintrperiod = VAR_0;
 FUNC_3(VAR_29, FUNC_4(VAR_30), VAR_6,
  "txintrperiod", VAR_2, &VAR_28->sc_txintrperiod, 0,
  "tx descriptor batching");
 FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
  "diag", VAR_3 | VAR_2, VAR_28, 0,
  VAR_9, "I", "h/w diagnostic control");
 FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
  "tpscale", VAR_3 | VAR_2, VAR_28, 0,
  VAR_25, "I", "tx power scaling");
 if (FUNC_8(VAR_31)) {
  FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
   "tpc", VAR_3 | VAR_2, VAR_28, 0,
   VAR_23, "I", "enable/disable per-packet TPC");
  FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
   "tpack", VAR_3 | VAR_2, VAR_28, 0,
   VAR_22, "I", "tx power for ack frames");
  FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
   "tpcts", VAR_3 | VAR_2, VAR_28, 0,
   VAR_24, "I", "tx power for cts frames");
 }
 if (FUNC_7(VAR_31)) {
  FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
   "rfsilent", VAR_3 | VAR_2, VAR_28, 0,
   VAR_17, "I", "h/w RF silent config");
  FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
   "rfkill", VAR_3 | VAR_2, VAR_28, 0,
   VAR_16, "I", "enable/disable RF kill switch");
 }

 FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
  "txagg", VAR_3 | VAR_2, VAR_28, 0,
  VAR_26, "I", "");

 FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
  "forcebstuck", VAR_3 | VAR_2, VAR_28, 0,
  VAR_11, "I", "");

 FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
  "hangcheck", VAR_3 | VAR_2, VAR_28, 0,
  VAR_12, "I", "");

 if (FUNC_6(VAR_31)) {
  FUNC_1(VAR_29, FUNC_4(VAR_30), VAR_6,
   "intmit", VAR_3 | VAR_2, VAR_28, 0,
   VAR_14, "I", "interference mitigation");
 }
 VAR_28->sc_monpass = VAR_4 | VAR_5;
 FUNC_3(VAR_29, FUNC_4(VAR_30), VAR_6,
  "monpass", VAR_2, &VAR_28->sc_monpass, 0,
  "mask of error frames to pass when monitoring");

 FUNC_0(VAR_29, FUNC_4(VAR_30), VAR_6,
  "hwq_limit_nonaggr", VAR_2, &VAR_28->sc_hwq_limit_nonaggr, 0,
  "Hardware non-AMPDU queue depth before software-queuing TX frames");
 FUNC_0(VAR_29, FUNC_4(VAR_30), VAR_6,
  "hwq_limit_aggr", VAR_2, &VAR_28->sc_hwq_limit_aggr, 0,
  "Hardware AMPDU queue depth before software-queuing TX frames");
 FUNC_0(VAR_29, FUNC_4(VAR_30), VAR_6,
  "tid_hwq_lo", VAR_2, &VAR_28->sc_tid_hwq_lo, 0,
  "");
 FUNC_0(VAR_29, FUNC_4(VAR_30), VAR_6,
  "tid_hwq_hi", VAR_2, &VAR_28->sc_tid_hwq_hi, 0,
  "");


 FUNC_0(VAR_29, FUNC_4(VAR_30), VAR_6,
  "aggr_limit", VAR_2, &VAR_28->sc_aggr_limit, 0,
  "Maximum A-MPDU size, or 0 for 'default'");
 FUNC_0(VAR_29, FUNC_4(VAR_30), VAR_6,
  "rts_aggr_limit", VAR_2, &VAR_28->sc_rts_aggr_limit, 0,
  "Maximum A-MPDU size for RTS-protected frames, or '0' "
  "for default");
 FUNC_0(VAR_29, FUNC_4(VAR_30), VAR_6,
  "delim_min_pad", VAR_2, &VAR_28->sc_delim_min_pad, 0,
  "Enforce a minimum number of delimiters per A-MPDU "
  " sub-frame");

 FUNC_0(VAR_29, FUNC_4(VAR_30), VAR_6,
  "txq_data_minfree", VAR_2, &VAR_28->sc_txq_data_minfree,
  0, "Minimum free buffers before adding a data frame"
  " to the TX queue");
 FUNC_0(VAR_29, FUNC_4(VAR_30), VAR_6,
  "txq_mcastq_maxdepth", VAR_2,
  &VAR_28->sc_txq_mcastq_maxdepth, 0,
  "Maximum buffer depth for multicast/broadcast frames");
 FUNC_0(VAR_29, FUNC_4(VAR_30), VAR_6,
  "txq_node_maxdepth", VAR_2,
  &VAR_28->sc_txq_node_maxdepth, 0,
  "Maximum buffer depth for a single node");
}
