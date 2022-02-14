
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_if_managed {int mtx; struct ieee80211_mgd_auth_data* auth_data; } ;
struct TYPE_5__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; struct ieee80211_local* local; } ;
struct ieee80211_mgd_auth_data {scalar_t__ tries; int expected_transaction; int sae_trans; int sae_status; int timeout_started; scalar_t__ timeout; TYPE_3__* bss; int data_len; int data; int algorithm; } ;
struct TYPE_6__ {int flags; int wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
struct TYPE_7__ {int channel; int bssid; scalar_t__ proberesp_ies; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int * FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,int,int ,int,int ,int ,int ,int ,int *,int ,int ,int) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int *,int const*,int const,int *,int ,int,int,int ,int ,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct ieee80211_if_managed*,scalar_t__) ;
 int FUNC_11 (struct ieee80211_sub_if_data*,char*,int ,...) ;

__attribute__((used)) static int FUNC_12(struct ieee80211_sub_if_data *VAR_11)
{
 struct ieee80211_local *VAR_12 = VAR_11->local;
 struct ieee80211_if_managed *VAR_13 = &VAR_11->u.mgd;
 struct ieee80211_mgd_auth_data *VAR_14 = VAR_13->auth_data;
 u32 VAR_15 = 0;

 FUNC_6(&VAR_13->mtx);

 if (FUNC_0(!VAR_14))
  return -VAR_0;

 VAR_14->tries++;

 if (VAR_14->tries > VAR_2) {
  FUNC_11(VAR_11, "authentication with %pM timed out\n",
      VAR_14->bss->bssid);





  FUNC_1(VAR_12->hw.wiphy, VAR_14->bss);

  return -VAR_1;
 }

 FUNC_2(VAR_12, VAR_11);

 if (VAR_14->bss->proberesp_ies) {
  u16 VAR_16 = 1;
  u16 VAR_17 = 0;

  FUNC_11(VAR_11, "send auth to %pM (try %d/%d)\n",
      VAR_14->bss->bssid, VAR_14->tries,
      VAR_2);

  VAR_14->expected_transaction = 2;

  if (VAR_14->algorithm == VAR_8) {
   VAR_16 = VAR_14->sae_trans;
   VAR_17 = VAR_14->sae_status;
   VAR_14->expected_transaction = VAR_16;
  }

  if (VAR_12->hw.flags & VAR_5)
   VAR_15 = VAR_6 |
       VAR_7;

  FUNC_4(VAR_11, VAR_16, VAR_14->algorithm, VAR_17,
        VAR_14->data, VAR_14->data_len,
        VAR_14->bss->bssid,
        VAR_14->bss->bssid, ((void*)0), 0, 0,
        VAR_15);
 } else {
  const u8 *VAR_18;

  FUNC_11(VAR_11, "direct probe to %pM (try %d/%i)\n",
      VAR_14->bss->bssid, VAR_14->tries,
      VAR_2);

  FUNC_7();
  VAR_18 = FUNC_3(VAR_14->bss, VAR_9);
  if (!VAR_18) {
   FUNC_8();
   return -VAR_0;
  }




  FUNC_5(VAR_11, ((void*)0), VAR_18 + 2, VAR_18[1],
      ((void*)0), 0, (u32) -1, 1, 0,
      VAR_14->bss->channel, 0);
  FUNC_8();
 }

 if (VAR_15 == 0) {
  VAR_14->timeout = VAR_10 + VAR_3;
  VAR_14->timeout_started = 1;
  FUNC_10(VAR_13, VAR_14->timeout);
 } else {
  VAR_14->timeout =
   FUNC_9(VAR_10 + VAR_4);
  VAR_14->timeout_started = 1;
  FUNC_10(VAR_13, VAR_14->timeout);
 }

 return 0;
}
