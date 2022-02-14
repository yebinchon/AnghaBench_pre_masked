
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rssiinfo {int rssi_total; int rssi_samples; } ;
struct ieee80211vap {TYPE_1__* iv_ic; } ;
struct ieee80211_node {scalar_t__ ni_associd; struct ieee80211vap* ni_vap; } ;
typedef scalar_t__ int8_t ;
struct TYPE_2__ {scalar_t__ (* ic_node_getrssi ) (struct ieee80211_node*) ;} ;


 scalar_t__ FUNC_0 (struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct ieee80211_node *VAR_1)
{
 struct rssiinfo *VAR_2 = VAR_0;
 struct ieee80211vap *VAR_3 = VAR_1->ni_vap;
 int8_t VAR_4;


 if (VAR_1->ni_associd == 0)
  return;
 VAR_4 = VAR_3->iv_ic->ic_node_getrssi(VAR_1);
 if (VAR_4 != 0) {
  VAR_2->rssi_samples++;
  VAR_2->rssi_total += VAR_4;
 }
}
