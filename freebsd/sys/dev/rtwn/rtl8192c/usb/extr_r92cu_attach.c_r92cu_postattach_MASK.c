
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_scan_end; int ic_scan_start; } ;
struct rtwn_softc {char* fwname; int fwsig; void* agc_size; int * agc_prog; struct ieee80211com sc_ic; struct r92c_softc* sc_priv; } ;
struct r92c_softc {int chip; scalar_t__ board_type; int rs_scan_end; int rs_scan_start; int * rs_txagc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_9)
{
 struct r92c_softc *VAR_10 = VAR_9->sc_priv;
 struct ieee80211com *VAR_11 = &VAR_9->sc_ic;

 if (!(VAR_10->chip & VAR_1) &&
     VAR_10->board_type == VAR_0) {
  VAR_9->agc_prog = &VAR_5[0];
  VAR_9->agc_size = FUNC_0(VAR_5);
  VAR_10->rs_txagc = &VAR_6[0];
 } else {
  VAR_9->agc_prog = &VAR_7[0];
  VAR_9->agc_size = FUNC_0(VAR_7);
  VAR_10->rs_txagc = &VAR_8[0];
 }

 if ((VAR_10->chip & (VAR_2 | VAR_1)) ==
      VAR_2) {
  VAR_9->fwname = "rtwn-rtl8192cfwU";
 } else {
  VAR_9->fwname = "rtwn-rtl8192cfwT";
 }
 VAR_9->fwsig = 0x88c;

 VAR_10->rs_scan_start = VAR_11->ic_scan_start;
 VAR_11->ic_scan_start = VAR_4;
 VAR_10->rs_scan_end = VAR_11->ic_scan_end;
 VAR_11->ic_scan_end = VAR_3;
}
