
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int dummy; } ;
struct iwm_mcast_filter_cmd {int filter_own; int pass_all; int bssid; scalar_t__ count; scalar_t__ port_id; } ;
struct ieee80211vap {struct ieee80211_node* iv_bss; } ;
struct ieee80211_node {int ni_bssid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iwm_mcast_filter_cmd*,int ) ;
 int FUNC_2 (struct iwm_softc*,int ,int ,size_t,struct iwm_mcast_filter_cmd*) ;
 struct iwm_mcast_filter_cmd* FUNC_3 (size_t,int ,int) ;
 size_t FUNC_4 (int,int) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211vap *VAR_6, struct iwm_softc *VAR_7)
{
 struct ieee80211_node *VAR_8 = VAR_6->iv_bss;
 struct iwm_mcast_filter_cmd *VAR_9;
 size_t VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(sizeof(*VAR_9), 4);
 VAR_9 = FUNC_3(VAR_10, VAR_3, VAR_4 | VAR_5);
 if (VAR_9 == ((void*)0))
  return VAR_0;
 VAR_9->filter_own = 1;
 VAR_9->port_id = 0;
 VAR_9->count = 0;
 VAR_9->pass_all = 1;
 FUNC_0(VAR_9->bssid, VAR_8->ni_bssid);

 VAR_11 = FUNC_2(VAR_7, VAR_2,
     VAR_1, VAR_10, VAR_9);
 FUNC_1(VAR_9, VAR_3);

 return (VAR_11);
}
