
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ is_rx_authfail_code; int is_rx_auth_fail; int is_rx_bad_auth; } ;
struct ieee80211vap {scalar_t__ iv_state; TYPE_1__ iv_stats; } ;
struct ieee80211_node {scalar_t__ ni_authmode; int ni_macaddr; struct ieee80211vap* ni_vap; } ;
struct ieee80211_frame {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211vap*,int,int ,char*,char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ieee80211vap*,int,struct ieee80211_node*,char*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ieee80211vap*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_node *VAR_8, struct ieee80211_frame *VAR_9,
    int VAR_10, int VAR_11, uint16_t VAR_12, uint16_t VAR_13)
{
 struct ieee80211vap *VAR_14 = VAR_8->ni_vap;

 if (VAR_8->ni_authmode == VAR_1) {
  FUNC_0(VAR_14, VAR_2,
      VAR_8->ni_macaddr, "open auth",
      "bad sta auth mode %u", VAR_8->ni_authmode);
  VAR_14->iv_stats.is_rx_bad_auth++;
  return;
 }
 if (VAR_14->iv_state != VAR_6 ||
     VAR_12 != VAR_0) {
  VAR_14->iv_stats.is_rx_bad_auth++;
  return;
 }
 if (VAR_13 != 0) {
  FUNC_1(VAR_14, VAR_3 | VAR_2,
      VAR_8, "open auth failed (reason %d)", VAR_13);
  VAR_14->iv_stats.is_rx_auth_fail++;
  VAR_14->iv_stats.is_rx_authfail_code = VAR_13;
  FUNC_2(VAR_14, VAR_7,
      VAR_4);
 } else
  FUNC_2(VAR_14, VAR_5, 0);
}
