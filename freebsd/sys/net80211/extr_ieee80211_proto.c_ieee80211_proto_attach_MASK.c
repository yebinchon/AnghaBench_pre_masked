
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int wme_hipri_switch_hysteresis; } ;
struct ieee80211com {int ic_raw_xmit; int ic_send_mgmt; TYPE_1__ ic_wme; int ic_restart_task; int ic_chw_task; int ic_bmiss_task; int ic_chan_task; int ic_promisc_task; int ic_mcast_task; int ic_parent_task; int ic_protmode; scalar_t__ ic_headroom; } ;
struct ieee80211_qosframe_addr4 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int ,int ,struct ieee80211com*) ;
 int VAR_6 ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct ieee80211com*) ;
 int FUNC_4 (struct ieee80211com*) ;
 int FUNC_5 (struct ieee80211com*) ;
 int VAR_7 ;
 int FUNC_6 (struct ieee80211com*) ;
 int FUNC_7 (struct ieee80211com*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void
FUNC_8(struct ieee80211com *VAR_19)
{
 uint8_t VAR_20;


 VAR_20 = VAR_19->ic_headroom
  + sizeof(struct ieee80211_qosframe_addr4)
  + VAR_3 + VAR_4
  + VAR_2;

 if (FUNC_0(VAR_20) > VAR_10) {

  VAR_10 = FUNC_0(VAR_20);
  VAR_9 = VAR_10 + VAR_11;
  VAR_8 = VAR_5 - VAR_9;
 }
 VAR_19->ic_protmode = VAR_1;

 FUNC_1(&VAR_19->ic_parent_task, 0, VAR_13, VAR_19);
 FUNC_1(&VAR_19->ic_mcast_task, 0, VAR_17, VAR_19);
 FUNC_1(&VAR_19->ic_promisc_task, 0, VAR_18, VAR_19);
 FUNC_1(&VAR_19->ic_chan_task, 0, VAR_15, VAR_19);
 FUNC_1(&VAR_19->ic_bmiss_task, 0, VAR_6, VAR_19);
 FUNC_1(&VAR_19->ic_chw_task, 0, VAR_16, VAR_19);
 FUNC_1(&VAR_19->ic_restart_task, 0, VAR_14, VAR_19);

 VAR_19->ic_wme.wme_hipri_switch_hysteresis =
  VAR_0;


 VAR_19->ic_send_mgmt = VAR_7;
 VAR_19->ic_raw_xmit = VAR_12;

 FUNC_2(VAR_19);
 FUNC_6(VAR_19);
 FUNC_7(VAR_19);
 FUNC_3(VAR_19);



 FUNC_5(VAR_19);
}
