
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wiphy {int flags; } ;
struct sk_buff {int priority; } ;
struct net_device {int dummy; } ;
struct ieee80211_tdls_lnkie {int dummy; } ;
struct ieee80211_tdls_data {int dummy; } ;
struct TYPE_7__ {int bssid; int associated; } ;
struct TYPE_8__ {TYPE_3__ mgd; } ;
struct TYPE_6__ {scalar_t__ type; int * addr; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_2__ vif; struct ieee80211_local* local; } ;
struct ieee80211_mgmt {int dummy; } ;
struct TYPE_5__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;






 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct wiphy*,struct net_device*,int *,int ,int ,int ,struct sk_buff*) ;
 int FUNC_4 (struct wiphy*,struct net_device*,int *,int ,int ,int ,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (struct sk_buff*,int *,int *,int ) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int,int) ;
 int FUNC_11 (int ,int const*,size_t) ;
 int FUNC_12 (struct sk_buff*,size_t) ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (struct ieee80211_sub_if_data*,char*,int ,int *) ;

__attribute__((used)) static int FUNC_16(struct wiphy *VAR_7, struct net_device *VAR_8,
          u8 *VAR_9, u8 VAR_10, u8 VAR_11,
          u16 VAR_12, const u8 *VAR_13,
          size_t VAR_14)
{
 struct ieee80211_sub_if_data *VAR_15 = FUNC_0(VAR_8);
 struct ieee80211_local *VAR_16 = VAR_15->local;
 struct sk_buff *VAR_17 = ((void*)0);
 bool VAR_18;
 int VAR_19;

 if (!(VAR_7->flags & VAR_6))
  return -VAR_2;


 if (VAR_15->vif.type != VAR_5 ||
     !VAR_15->u.mgd.associated)
  return -VAR_0;

 FUNC_15(VAR_15, "TDLS mgmt action %d peer %pM\n",
   VAR_10, VAR_9);

 VAR_17 = FUNC_1(VAR_16->hw.extra_tx_headroom +
       FUNC_10(sizeof(struct ieee80211_mgmt),
    sizeof(struct ieee80211_tdls_data)) +
       50 +
       7 +
       VAR_14 +
       sizeof(struct ieee80211_tdls_lnkie));
 if (!VAR_17)
  return -VAR_1;

 FUNC_13(VAR_17, VAR_16->hw.extra_tx_headroom);

 switch (VAR_10) {
 case 130:
 case 129:
 case 131:
 case 128:
 case 132:
  VAR_19 = FUNC_4(VAR_7, VAR_8, VAR_9,
           VAR_10, VAR_11,
           VAR_12, VAR_17);
  VAR_18 = 0;
  break;
 case 133:
  VAR_19 = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10,
       VAR_11, VAR_12,
       VAR_17);
  VAR_18 = 1;
  break;
 default:
  VAR_19 = -VAR_2;
  break;
 }

 if (VAR_19 < 0)
  goto fail;

 if (VAR_14)
  FUNC_11(FUNC_12(VAR_17, VAR_14), VAR_13, VAR_14);


 switch (VAR_10) {
 case 130:
 case 131:
 case 128:
 case 132:

  FUNC_6(VAR_17, VAR_15->vif.addr, VAR_9,
        VAR_15->u.mgd.bssid);
  break;
 case 129:
 case 133:

  FUNC_6(VAR_17, VAR_9, VAR_15->vif.addr,
        VAR_15->u.mgd.bssid);
  break;
 default:
  VAR_19 = -VAR_2;
  goto fail;
 }

 if (VAR_18) {
  FUNC_7(VAR_15, VAR_17);
  return 0;
 }





 switch (VAR_10) {
 case 130:
 case 129:
  FUNC_14(VAR_17, VAR_3);
  VAR_17->priority = 2;
  break;
 default:
  FUNC_14(VAR_17, VAR_4);
  VAR_17->priority = 5;
  break;
 }


 FUNC_8();
 VAR_19 = FUNC_5(VAR_17, VAR_8);
 FUNC_9();

 return VAR_19;

fail:
 FUNC_2(VAR_17);
 return VAR_19;
}
