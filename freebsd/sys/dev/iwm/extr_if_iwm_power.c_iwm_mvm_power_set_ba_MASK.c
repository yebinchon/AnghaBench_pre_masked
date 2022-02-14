
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211vap {int iv_flags; struct ieee80211_node* iv_bss; } ;
struct iwm_vap {struct ieee80211vap iv_vap; } ;
struct TYPE_3__ {int ba_enabled; int bf_enabled; } ;
struct iwm_softc {int sc_ps_disabled; TYPE_1__ sc_bf; } ;
struct iwm_beacon_filter_cmd {int bf_enable_beacon_filter; int member_0; } ;
struct ieee80211_node {int dummy; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {scalar_t__ in_assoc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct ieee80211_node*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct iwm_softc*,struct iwm_vap*,struct iwm_beacon_filter_cmd*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct iwm_softc *VAR_4, struct iwm_vap *VAR_5)
{
 struct iwm_beacon_filter_cmd VAR_6 = {
  VAR_2,
  .bf_enable_beacon_filter = FUNC_2(1),
 };
 struct ieee80211vap *VAR_7 = &VAR_5->iv_vap;
 struct ieee80211_node *VAR_8 = VAR_7->iv_bss;
 boolean_t VAR_9 = VAR_0;

 if (!VAR_4->sc_bf.bf_enabled)
  return 0;

 if (VAR_8 != ((void*)0) && FUNC_0(VAR_8)->in_assoc &&
     (VAR_7->iv_flags & VAR_1) != 0) {
  VAR_9 = VAR_3;
 }
 VAR_4->sc_bf.ba_enabled = !VAR_4->sc_ps_disabled && VAR_9;

 return FUNC_1(VAR_4, VAR_5, &VAR_6);
}
