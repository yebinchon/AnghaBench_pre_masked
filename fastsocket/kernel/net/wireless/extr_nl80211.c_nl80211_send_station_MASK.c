
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int flags; int beacon_interval; int dtim_period; } ;
struct station_info {int filled; int assoc_req_ies_len; int const* assoc_req_ies; scalar_t__ t_offset; int const sta_flags; TYPE_2__ bss_param; int nonpeer_pm; int peer_pm; int local_pm; int beacon_loss_count; int tx_failed; int tx_retries; int tx_packets; int rx_packets; int rxrate; int txrate; int signal_avg; int signal; int plink_state; int plid; int llid; scalar_t__ tx_bytes; scalar_t__ rx_bytes; int inactive_time; int connected_time; int generation; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nl80211_sta_flag_update {int dummy; } ;
struct net_device {int ifindex; } ;
struct TYPE_3__ {int signal_type; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,int *,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int,int const*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_65, u32 VAR_66, u32 VAR_67,
    int VAR_68,
    struct cfg80211_registered_device *VAR_69,
    struct net_device *VAR_70,
    const u8 *VAR_71, struct station_info *VAR_72)
{
 void *VAR_73;
 struct nlattr *VAR_74, *VAR_75;

 VAR_73 = FUNC_3(VAR_65, VAR_66, VAR_67, VAR_68, VAR_10);
 if (!VAR_73)
  return -1;

 if (FUNC_9(VAR_65, VAR_7, VAR_70->ifindex) ||
     FUNC_6(VAR_65, VAR_8, VAR_4, VAR_71) ||
     FUNC_9(VAR_65, VAR_5, VAR_72->generation))
  goto nla_put_failure;

 VAR_74 = FUNC_5(VAR_65, VAR_9);
 if (!VAR_74)
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_43) &&
     FUNC_9(VAR_65, VAR_18,
   VAR_72->connected_time))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_44) &&
     FUNC_9(VAR_65, VAR_19,
   VAR_72->inactive_time))
  goto nla_put_failure;
 if ((VAR_72->filled & (VAR_52 |
         VAR_53)) &&
     FUNC_9(VAR_65, VAR_27,
   (u32)VAR_72->rx_bytes))
  goto nla_put_failure;
 if ((VAR_72->filled & (VAR_59 |
         VAR_60)) &&
     FUNC_9(VAR_65, VAR_34,
   (u32)VAR_72->tx_bytes))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_53) &&
     FUNC_10(VAR_65, VAR_28,
   VAR_72->rx_bytes))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_60) &&
     FUNC_10(VAR_65, VAR_35,
   VAR_72->tx_bytes))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_45) &&
     FUNC_8(VAR_65, VAR_20, VAR_72->llid))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_49) &&
     FUNC_8(VAR_65, VAR_24, VAR_72->plid))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_50) &&
     FUNC_11(VAR_65, VAR_25,
         VAR_72->plink_state))
  goto nla_put_failure;
 switch (VAR_69->wiphy.signal_type) {
 case 128:
  if ((VAR_72->filled & VAR_55) &&
      FUNC_11(VAR_65, VAR_30,
          VAR_72->signal))
   goto nla_put_failure;
  if ((VAR_72->filled & VAR_56) &&
      FUNC_11(VAR_65, VAR_31,
          VAR_72->signal_avg))
   goto nla_put_failure;
  break;
 default:
  break;
 }
 if (VAR_72->filled & VAR_58) {
  if (!FUNC_2(VAR_65, &VAR_72->txrate,
       VAR_33))
   goto nla_put_failure;
 }
 if (VAR_72->filled & VAR_51) {
  if (!FUNC_2(VAR_65, &VAR_72->rxrate,
       VAR_26))
   goto nla_put_failure;
 }
 if ((VAR_72->filled & VAR_54) &&
     FUNC_9(VAR_65, VAR_29,
   VAR_72->rx_packets))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_62) &&
     FUNC_9(VAR_65, VAR_37,
   VAR_72->tx_packets))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_63) &&
     FUNC_9(VAR_65, VAR_38,
   VAR_72->tx_retries))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_61) &&
     FUNC_9(VAR_65, VAR_36,
   VAR_72->tx_failed))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_41) &&
     FUNC_9(VAR_65, VAR_16,
   VAR_72->beacon_loss_count))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_46) &&
     FUNC_9(VAR_65, VAR_21,
   VAR_72->local_pm))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_48) &&
     FUNC_9(VAR_65, VAR_23,
   VAR_72->peer_pm))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_47) &&
     FUNC_9(VAR_65, VAR_22,
   VAR_72->nonpeer_pm))
  goto nla_put_failure;
 if (VAR_72->filled & VAR_42) {
  VAR_75 = FUNC_5(VAR_65, VAR_17);
  if (!VAR_75)
   goto nla_put_failure;

  if (((VAR_72->bss_param.flags & VAR_0) &&
       FUNC_7(VAR_65, VAR_12)) ||
      ((VAR_72->bss_param.flags & VAR_1) &&
       FUNC_7(VAR_65, VAR_14)) ||
      ((VAR_72->bss_param.flags & VAR_2) &&
       FUNC_7(VAR_65, VAR_15)) ||
      FUNC_11(VAR_65, VAR_13,
          VAR_72->bss_param.dtim_period) ||
      FUNC_8(VAR_65, VAR_11,
    VAR_72->bss_param.beacon_interval))
   goto nla_put_failure;

  FUNC_4(VAR_65, VAR_75);
 }
 if ((VAR_72->filled & VAR_57) &&
     FUNC_6(VAR_65, VAR_32,
      sizeof(struct nl80211_sta_flag_update),
      &VAR_72->sta_flags))
  goto nla_put_failure;
 if ((VAR_72->filled & VAR_64) &&
  FUNC_10(VAR_65, VAR_39,
       VAR_72->t_offset))
  goto nla_put_failure;
 FUNC_4(VAR_65, VAR_74);

 if ((VAR_72->filled & VAR_40) &&
     FUNC_6(VAR_65, VAR_6, VAR_72->assoc_req_ies_len,
      VAR_72->assoc_req_ies))
  goto nla_put_failure;

 return FUNC_1(VAR_65, VAR_73);

 nla_put_failure:
 FUNC_0(VAR_65, VAR_73);
 return -VAR_3;
}
