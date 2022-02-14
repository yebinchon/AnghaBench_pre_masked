
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {int iv_flags; scalar_t__ iv_dtim_period; struct ieee80211_node* iv_bss; } ;
struct iwm_vap {int color; int id; struct ieee80211vap iv_vap; } ;
struct iwm_softc {scalar_t__ sc_ps_disabled; } ;
struct iwm_mac_power_cmd {void* tx_data_timeout; void* rx_data_timeout; int flags; int keep_alive_seconds; void* id_and_color; } ;
struct ieee80211_node {int ni_intval; } ;
typedef int boolean_t ;
struct TYPE_2__ {scalar_t__ in_assoc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct ieee80211_node*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct iwm_softc*,struct iwm_mac_power_cmd*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void
FUNC_7(struct iwm_softc *VAR_8, struct iwm_vap *VAR_9,
 struct iwm_mac_power_cmd *VAR_10)
{
 struct ieee80211vap *VAR_11 = &VAR_9->iv_vap;
 struct ieee80211_node *VAR_12 = VAR_11->iv_bss;
 int VAR_13, VAR_14;
 int VAR_15;
 boolean_t VAR_16 = VAR_0;

 VAR_10->id_and_color = FUNC_3(FUNC_0(VAR_9->id,
     VAR_9->color));
 VAR_13 = VAR_11->iv_dtim_period ?: 1;







 VAR_14 = VAR_13 * VAR_12->ni_intval;
 VAR_15
     = FUNC_4(3 * VAR_14, 1000 * VAR_6);
 VAR_15 = FUNC_6(VAR_15, 1000) / 1000;
 VAR_10->keep_alive_seconds = FUNC_2(VAR_15);

 if (VAR_8->sc_ps_disabled)
  return;

 VAR_10->flags |= FUNC_2(VAR_5);

 if (FUNC_1(VAR_12)->in_assoc &&
     (VAR_11->iv_flags & VAR_1) != 0) {
  VAR_16 = VAR_7;
 }
 if (!VAR_16)
  return;

 VAR_10->flags |= FUNC_2(VAR_4);

 FUNC_5(VAR_8, VAR_10);

 VAR_10->rx_data_timeout =
  FUNC_3(VAR_2);
 VAR_10->tx_data_timeout =
  FUNC_3(VAR_3);
}
