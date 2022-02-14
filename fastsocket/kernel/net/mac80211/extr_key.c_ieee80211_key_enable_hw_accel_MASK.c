
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int addr; } ;
struct sta_info {TYPE_5__ sta; int uploaded; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {int crypto_tx_tailroom_needed_cnt; TYPE_3__ vif; } ;
struct TYPE_13__ {int flags; int cipher; int keyidx; } ;
struct ieee80211_key {TYPE_6__ conf; int flags; TYPE_4__* local; struct ieee80211_sub_if_data* sdata; struct sta_info* sta; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_11__ {TYPE_2__ hw; TYPE_1__* ops; } ;
struct TYPE_8__ {int set_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;





 int FUNC_1 (TYPE_4__*) ;
 int VAR_11 ;
 int FUNC_2 (TYPE_4__*,int ,struct ieee80211_sub_if_data*,TYPE_5__*,TYPE_6__*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ieee80211_sub_if_data*,char*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_key *VAR_12)
{
 struct ieee80211_sub_if_data *VAR_13;
 struct sta_info *VAR_14;
 int VAR_15;

 FUNC_3();

 if (!VAR_12->local->ops->set_key)
  goto out_unsupported;

 FUNC_1(VAR_12->local);

 VAR_14 = VAR_12->sta;





 if (VAR_14 && !(VAR_12->conf.flags & VAR_6) &&
     !(VAR_12->local->hw.flags & VAR_3))
  goto out_unsupported;

 if (VAR_14 && !VAR_14->uploaded)
  goto out_unsupported;

 VAR_13 = VAR_12->sdata;
 if (VAR_13->vif.type == VAR_9) {




  if (!(VAR_12->conf.flags & VAR_6))
   goto out_unsupported;
 }

 VAR_15 = FUNC_2(VAR_12->local, VAR_10, VAR_13,
     VAR_14 ? &VAR_14->sta : ((void*)0), &VAR_12->conf);

 if (!VAR_15) {
  VAR_12->flags |= VAR_8;

  if (!((VAR_12->conf.flags & VAR_5) ||
        (VAR_12->conf.flags & VAR_4) ||
        (VAR_12->conf.flags & VAR_7)))
   VAR_13->crypto_tx_tailroom_needed_cnt--;

  FUNC_0((VAR_12->conf.flags & VAR_7) &&
   (VAR_12->conf.flags & VAR_4));

  return 0;
 }

 if (VAR_15 != -VAR_1 && VAR_15 != -VAR_2)
  FUNC_4(VAR_13,
     "failed to set key (%d, %pM) to hardware (%d)\n",
     VAR_12->conf.keyidx,
     VAR_14 ? VAR_14->sta.addr : VAR_11, VAR_15);

 out_unsupported:
 switch (VAR_12->conf.cipher) {
 case 128:
 case 129:
 case 130:
 case 131:
 case 132:

  return 0;
 default:
  return -VAR_0;
 }
}
