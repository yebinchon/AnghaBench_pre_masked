
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_scan_end; int ic_scan_start; } ;
struct rtwn_softc {char* fwname; int fwsig; struct ieee80211com sc_ic; struct r92c_softc* sc_priv; } ;
struct r92c_softc {int chip; scalar_t__ board_type; int rs_scan_end; int rs_scan_start; int * rs_txagc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void
FUNC_0(struct rtwn_softc *VAR_7)
{
 struct r92c_softc *VAR_8 = VAR_7->sc_priv;
 struct ieee80211com *VAR_9 = &VAR_7->sc_ic;

 if (!(VAR_8->chip & VAR_1) &&
     VAR_8->board_type == VAR_0)
  VAR_8->rs_txagc = &VAR_5[0];
 else
  VAR_8->rs_txagc = &VAR_6[0];

 if ((VAR_8->chip & (VAR_2 | VAR_1)) ==
     VAR_2)
  VAR_7->fwname = "rtwn-rtl8192cfwE";
 else
  VAR_7->fwname = "rtwn-rtl8192cfwE_B";
 VAR_7->fwsig = 0x88c;

 VAR_8->rs_scan_start = VAR_9->ic_scan_start;
 VAR_9->ic_scan_start = VAR_4;
 VAR_8->rs_scan_end = VAR_9->ic_scan_end;
 VAR_9->ic_scan_end = VAR_3;
}
