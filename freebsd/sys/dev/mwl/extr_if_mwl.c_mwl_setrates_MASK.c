
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mwl_vap {int mv_hvap; int mv_eapolformat; } ;
struct ieee80211vap {scalar_t__ iv_state; struct ieee80211_node* iv_bss; } ;
struct ieee80211_txparam {scalar_t__ ucastrate; int mcastrate; int mgmtrate; } ;
struct ieee80211_node {struct ieee80211_txparam* ni_txparms; } ;
typedef int rates ;
struct TYPE_4__ {int MgtRate; int McastRate; } ;
typedef TYPE_1__ MWL_HAL_TXRATE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 struct mwl_vap* FUNC_1 (struct ieee80211vap*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ,struct ieee80211_node*) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211vap *VAR_4)
{
 struct mwl_vap *VAR_5 = FUNC_1(VAR_4);
 struct ieee80211_node *VAR_6 = VAR_4->iv_bss;
 const struct ieee80211_txparam *VAR_7 = VAR_6->ni_txparms;
 MWL_HAL_TXRATE VAR_8;

 FUNC_0(VAR_4->iv_state == VAR_1, ("state %d", VAR_4->iv_state));





 FUNC_3(&VAR_8, 0, sizeof(VAR_8));

 VAR_8.MgtRate = VAR_7->mgmtrate;

 VAR_8.McastRate = VAR_7->mcastrate;


 VAR_5->mv_eapolformat = FUNC_2(FUNC_4(VAR_8.MgtRate, VAR_6));

 return FUNC_5(VAR_5->mv_hvap,
     VAR_7->ucastrate != VAR_0 ?
  VAR_3 : VAR_2, &VAR_8);
}
