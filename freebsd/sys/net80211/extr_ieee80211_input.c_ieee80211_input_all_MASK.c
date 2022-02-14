
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ieee80211com {int dummy; } ;
struct ieee80211_rx_stats {int r_flags; int c_nf; int c_rssi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*,struct ieee80211_rx_stats*) ;
 int FUNC_1 (struct ieee80211com*,struct mbuf*) ;

int
FUNC_2(struct ieee80211com *VAR_2, struct mbuf *VAR_3, int VAR_4, int VAR_5)
{
 struct ieee80211_rx_stats VAR_6;

 VAR_6.r_flags = VAR_0 | VAR_1;
 VAR_6.c_nf = VAR_5;
 VAR_6.c_rssi = VAR_4;

 if (!FUNC_0(VAR_3, &VAR_6))
  return (-1);

 return FUNC_1(VAR_2, VAR_3);
}
