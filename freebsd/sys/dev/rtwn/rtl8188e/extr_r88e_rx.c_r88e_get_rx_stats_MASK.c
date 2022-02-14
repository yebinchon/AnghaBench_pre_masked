
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_ht40; } ;
struct r88e_rx_phystat {int chan; } ;
struct ieee80211_rx_stats {int r_flags; int c_ieee; int c_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rtwn_softc*,struct ieee80211_rx_stats*,void const*,void const*) ;

void
FUNC_2(struct rtwn_softc *VAR_3, struct ieee80211_rx_stats *VAR_4,
    const void *VAR_5, const void *VAR_6)
{
 const struct r88e_rx_phystat *VAR_7 = VAR_6;

 FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

 if (!VAR_3->sc_ht40) {
  VAR_4->r_flags |= VAR_2 | VAR_1;
  VAR_4->c_ieee = VAR_7->chan;
  VAR_4->c_freq = FUNC_0(VAR_4->c_ieee,
      VAR_0);
 }
}
