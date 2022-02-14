
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {int iftype; struct cfg80211_internal_bss* current_bss; TYPE_1__* netdev; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int skb; } ;
struct TYPE_7__ {int signal_type; } ;
struct cfg80211_registered_device {TYPE_3__ wiphy; int bss_generation; } ;
struct cfg80211_bss {int signal; TYPE_2__* channel; scalar_t__ capability; scalar_t__ beacon_interval; int beacon_ies; int ies; int bssid; } ;
struct cfg80211_internal_bss {scalar_t__ ts; struct cfg80211_bss pub; } ;
struct cfg80211_bss_ies {int data; scalar_t__ len; int tsf; } ;
struct TYPE_8__ {int pid; } ;
struct TYPE_6__ {int center_freq; } ;
struct TYPE_5__ {int ifindex; } ;


 int FUNC_0 (struct wireless_dev*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;



 int FUNC_2 (struct netlink_callback*,void*,int *) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int FUNC_4 (struct sk_buff*,void*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_20 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_21 ;
 void* FUNC_7 (struct sk_buff*,int ,int ,int,int ) ;
 int FUNC_8 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_9 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ,int ) ;
 int FUNC_14 (struct sk_buff*,int ,int ) ;
 struct cfg80211_bss_ies* FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_19(struct sk_buff *VAR_22, struct netlink_callback *VAR_23,
       u32 VAR_24, int VAR_25,
       struct cfg80211_registered_device *VAR_26,
       struct wireless_dev *VAR_27,
       struct cfg80211_internal_bss *VAR_28)
{
 struct cfg80211_bss *VAR_29 = &VAR_28->pub;
 const struct cfg80211_bss_ies *VAR_30;
 void *VAR_31;
 struct nlattr *VAR_32;
 bool VAR_33 = 0;

 FUNC_0(VAR_27);

 VAR_31 = FUNC_7(VAR_22, FUNC_1(VAR_23->skb).pid, VAR_24, VAR_25,
        VAR_19);
 if (!VAR_31)
  return -1;

 FUNC_2(VAR_23, VAR_31, &VAR_21);

 if (FUNC_12(VAR_22, VAR_3, VAR_26->bss_generation))
  goto nla_put_failure;
 if (VAR_27->netdev &&
     FUNC_12(VAR_22, VAR_4, VAR_27->netdev->ifindex))
  goto nla_put_failure;
 if (FUNC_13(VAR_22, VAR_5, FUNC_18(VAR_27)))
  goto nla_put_failure;

 VAR_32 = FUNC_9(VAR_22, VAR_2);
 if (!VAR_32)
  goto nla_put_failure;
 if ((!FUNC_5(VAR_29->bssid) &&
      FUNC_10(VAR_22, VAR_8, VAR_1, VAR_29->bssid)))
  goto nla_put_failure;

 FUNC_16();
 VAR_30 = FUNC_15(VAR_29->ies);
 if (VAR_30) {
  if (FUNC_13(VAR_22, VAR_18, VAR_30->tsf))
   goto fail_unlock_rcu;
  VAR_33 = 1;
  if (VAR_30->len && FUNC_10(VAR_22, VAR_11,
     VAR_30->len, VAR_30->data))
   goto fail_unlock_rcu;
 }
 VAR_30 = FUNC_15(VAR_29->beacon_ies);
 if (VAR_30) {
  if (!VAR_33 && FUNC_13(VAR_22, VAR_18, VAR_30->tsf))
   goto fail_unlock_rcu;
  if (VAR_30->len && FUNC_10(VAR_22, VAR_6,
     VAR_30->len, VAR_30->data))
   goto fail_unlock_rcu;
 }
 FUNC_17();

 if (VAR_29->beacon_interval &&
     FUNC_11(VAR_22, VAR_7, VAR_29->beacon_interval))
  goto nla_put_failure;
 if (FUNC_11(VAR_22, VAR_9, VAR_29->capability) ||
     FUNC_12(VAR_22, VAR_10, VAR_29->channel->center_freq) ||
     FUNC_12(VAR_22, VAR_12,
   FUNC_6(VAR_20 - VAR_28->ts)))
  goto nla_put_failure;

 switch (VAR_26->wiphy.signal_type) {
 case 132:
  if (FUNC_12(VAR_22, VAR_13, VAR_29->signal))
   goto nla_put_failure;
  break;
 case 131:
  if (FUNC_14(VAR_22, VAR_14, VAR_29->signal))
   goto nla_put_failure;
  break;
 default:
  break;
 }

 switch (VAR_27->iftype) {
 case 129:
 case 128:
  if (VAR_28 == VAR_27->current_bss &&
      FUNC_12(VAR_22, VAR_15,
    VAR_16))
   goto nla_put_failure;
  break;
 case 130:
  if (VAR_28 == VAR_27->current_bss &&
      FUNC_12(VAR_22, VAR_15,
    VAR_17))
   goto nla_put_failure;
  break;
 default:
  break;
 }

 FUNC_8(VAR_22, VAR_32);

 return FUNC_4(VAR_22, VAR_31);

 fail_unlock_rcu:
 FUNC_17();
 nla_put_failure:
 FUNC_3(VAR_22, VAR_31);
 return -VAR_0;
}
