
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee802_11_elems {scalar_t__ challenge_len; scalar_t__ challenge; } ;
struct TYPE_7__ {struct ieee80211_mgd_auth_data* auth_data; } ;
struct TYPE_8__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; TYPE_2__ u; } ;
struct TYPE_9__ {int * variable; } ;
struct TYPE_10__ {TYPE_3__ auth; } ;
struct ieee80211_mgmt {TYPE_4__ u; } ;
struct ieee80211_mgd_auth_data {int expected_transaction; int key_idx; int key_len; int key; TYPE_6__* bss; int algorithm; } ;
struct TYPE_11__ {int flags; } ;
struct ieee80211_local {TYPE_5__ hw; } ;
struct TYPE_12__ {int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int,int ,int ,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int *,size_t,int,struct ieee802_11_elems*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_sub_if_data *VAR_3,
         struct ieee80211_mgmt *VAR_4, size_t VAR_5)
{
 struct ieee80211_local *VAR_6 = VAR_3->local;
 struct ieee80211_mgd_auth_data *VAR_7 = VAR_3->u.mgd.auth_data;
 u8 *VAR_8;
 struct ieee802_11_elems VAR_9;
 u32 VAR_10 = 0;

 VAR_8 = VAR_4->u.auth.variable;
 FUNC_2(VAR_8, VAR_5 - (VAR_8 - (u8 *) VAR_4), 0, &VAR_9);
 if (!VAR_9.challenge)
  return;
 VAR_7->expected_transaction = 4;
 FUNC_0(VAR_3->local, VAR_3);
 if (VAR_6->hw.flags & VAR_0)
  VAR_10 = VAR_1 |
      VAR_2;
 FUNC_1(VAR_3, 3, VAR_7->algorithm, 0,
       VAR_9.challenge - 2, VAR_9.challenge_len + 2,
       VAR_7->bss->bssid, VAR_7->bss->bssid,
       VAR_7->key, VAR_7->key_len,
       VAR_7->key_idx, VAR_10);
}
