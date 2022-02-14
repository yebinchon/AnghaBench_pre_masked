
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sta_info {struct ieee80211_sub_if_data* sdata; struct ieee80211_local* local; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {int recalc_smps; int smps_mode; TYPE_1__ vif; } ;
struct TYPE_7__ {scalar_t__ action; int smps_control; } ;
struct TYPE_8__ {TYPE_2__ ht_smps; } ;
struct TYPE_9__ {scalar_t__ category; TYPE_3__ u; } ;
struct TYPE_10__ {TYPE_4__ action; } ;
struct ieee80211_mgmt {TYPE_5__ u; int frame_control; } ;
struct ieee80211_local {int hw; } ;
struct ieee80211_hdr {int addr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;



 int FUNC_0 (struct sta_info*,int ,int) ;
 int* FUNC_1 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static void FUNC_6(struct sta_info *VAR_6, struct sk_buff *VAR_7)
{
 struct ieee80211_mgmt *VAR_8 = (void *) VAR_7->data;
 struct ieee80211_local *VAR_9 = VAR_6->local;
 struct ieee80211_sub_if_data *VAR_10 = VAR_6->sdata;

 if (FUNC_3(VAR_8->frame_control)) {
  struct ieee80211_hdr *VAR_11 = (void *) VAR_7->data;
  u8 *VAR_12 = FUNC_1(VAR_11);
  u16 VAR_13 = VAR_12[0] & 0xf;

  FUNC_0(VAR_6, VAR_11->addr1, VAR_13);
 }

 if (FUNC_2(VAR_8->frame_control) &&
     VAR_8->u.action.category == VAR_4 &&
     VAR_8->u.action.u.ht_smps.action == VAR_5 &&
     VAR_10->vif.type == VAR_3 &&
     FUNC_5(VAR_10)) {







  switch (VAR_8->u.action.u.ht_smps.smps_control) {
  case 129:
   VAR_10->smps_mode = VAR_0;
   break;
  case 128:
   VAR_10->smps_mode = VAR_2;
   break;
  case 130:
  default:
   VAR_10->smps_mode = VAR_1;
   break;
  }

  FUNC_4(&VAR_9->hw, &VAR_10->recalc_smps);
 }
}
