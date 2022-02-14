
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rssiinfo {int rssi_total; int rssi_samples; } ;
struct ieee80211vap {TYPE_1__* iv_ic; } ;
struct ieee80211_node {int ni_capinfo; struct ieee80211vap* ni_vap; } ;
typedef scalar_t__ int8_t ;
struct TYPE_2__ {scalar_t__ (* ic_node_getrssi ) (struct ieee80211_node*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, struct ieee80211_node *VAR_2)
{
 struct rssiinfo *VAR_3 = VAR_1;
 struct ieee80211vap *VAR_4 = VAR_2->ni_vap;
 int8_t VAR_5;



 if ((VAR_2->ni_capinfo & VAR_0) == 0)
  return;
 VAR_5 = VAR_4->iv_ic->ic_node_getrssi(VAR_2);
 if (VAR_5 != 0) {
  VAR_3->rssi_samples++;
  VAR_3->rssi_total += VAR_5;
 }
}
