
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idle; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ bss_conf; int chanctx_conf; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; TYPE_2__ vif; } ;
struct ieee80211_local {int chanctx_mtx; } ;
struct ieee80211_chanctx {scalar_t__ refcount; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_chanctx*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_sub_if_data *VAR_3,
        struct ieee80211_chanctx *VAR_4)
{
 struct ieee80211_local *VAR_5 = VAR_3->local;

 FUNC_5(&VAR_5->chanctx_mtx);

 VAR_4->refcount--;
 FUNC_6(VAR_3->vif.chanctx_conf, ((void*)0));

 VAR_3->vif.bss_conf.idle = 1;

 if (VAR_3->vif.type != VAR_2 &&
     VAR_3->vif.type != VAR_1)
  FUNC_1(VAR_3, VAR_0);

 FUNC_0(VAR_5, VAR_3, VAR_4);

 if (VAR_4->refcount > 0) {
  FUNC_2(VAR_3->local, VAR_4);
  FUNC_4(VAR_5, VAR_4);
  FUNC_3(VAR_5, VAR_4);
 }
}
