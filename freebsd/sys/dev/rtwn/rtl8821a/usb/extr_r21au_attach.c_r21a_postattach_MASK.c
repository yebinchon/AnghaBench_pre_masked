
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_scan_end; int ic_scan_start; int ic_ioctl; } ;
struct rtwn_softc {int sc_set_led; struct r12a_softc* sc_priv; struct ieee80211com sc_ic; } ;
struct r12a_softc {scalar_t__ board_type; int rs_scan_end; int rs_scan_start; int rs_chan_check; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int ,int ,struct rtwn_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_10)
{
 struct ieee80211com *VAR_11 = &VAR_10->sc_ic;
 struct r12a_softc *VAR_12 = VAR_10->sc_priv;

 if (VAR_12->board_type == VAR_1 ||
     VAR_12->board_type == VAR_2 ||
     VAR_12->board_type == VAR_0)
  VAR_10->sc_set_led = VAR_8;
 else
  VAR_10->sc_set_led = VAR_4;

 FUNC_0(VAR_9, &VAR_12->rs_chan_check, 0,
     VAR_5, VAR_10);


 VAR_11->ic_ioctl = VAR_3;

 VAR_12->rs_scan_start = VAR_11->ic_scan_start;
 VAR_11->ic_scan_start = VAR_7;
 VAR_12->rs_scan_end = VAR_11->ic_scan_end;
 VAR_11->ic_scan_end = VAR_6;
}
