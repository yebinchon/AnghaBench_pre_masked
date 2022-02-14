
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mwl_vap {int mv_eapolformat; } ;
struct ieee80211vap {scalar_t__ iv_state; int iv_flags_ht; TYPE_1__* iv_txparms; struct ieee80211_node* iv_bss; } ;
struct ieee80211_node {int ni_chan; } ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;
struct TYPE_2__ {int mgmtrate; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char*) ;
 struct mwl_vap* FUNC_1 (struct ieee80211vap*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211vap *VAR_6)
{
 struct mwl_vap *VAR_7 = FUNC_1(VAR_6);
 struct ieee80211_node *VAR_8 = VAR_6->iv_bss;
 enum ieee80211_phymode VAR_9;
 uint8_t VAR_10;

 FUNC_0(VAR_6->iv_state == VAR_5, ("state %d", VAR_6->iv_state));

 VAR_9 = FUNC_3(VAR_8->ni_chan);




 if (VAR_9 == VAR_3 &&
     (VAR_6->iv_flags_ht & VAR_0) == 0)
  VAR_10 = VAR_6->iv_txparms[VAR_1].mgmtrate;
 else if (VAR_9 == VAR_4 &&
     (VAR_6->iv_flags_ht & VAR_0) == 0)
  VAR_10 = VAR_6->iv_txparms[VAR_2].mgmtrate;
 else
  VAR_10 = VAR_6->iv_txparms[VAR_9].mgmtrate;

 VAR_7->mv_eapolformat = FUNC_2(FUNC_4(VAR_10, VAR_8));
}
