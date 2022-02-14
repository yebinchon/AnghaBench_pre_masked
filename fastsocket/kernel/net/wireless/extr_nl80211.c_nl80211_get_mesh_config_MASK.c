
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; int mesh_id_len; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct mesh_config {int dot11MeshAwakeWindowDuration; int power_mode; int dot11MeshHWMPconfirmationInterval; int dot11MeshHWMProotInterval; int dot11MeshHWMPactivePathToRootTimeout; int ht_opmode; int rssi_threshold; int dot11MeshForwarding; int dot11MeshGateAnnouncementProtocol; int dot11MeshHWMPRannInterval; int dot11MeshHWMPRootMode; int dot11MeshHWMPnetDiameterTraversalTime; int dot11MeshHWMPperrMinInterval; int dot11MeshHWMPpreqMinInterval; int dot11MeshHWMPactivePathTimeout; int min_discovery_timeout; int path_refresh_time; int dot11MeshHWMPmaxPREQretries; int dot11MeshNbrOffsetMaxNeighbor; int auto_open_plinks; int element_ttl; int dot11MeshTTL; int dot11MeshMaxRetries; int dot11MeshMaxPeerLinks; int dot11MeshHoldingTimeout; int dot11MeshConfirmTimeout; int dot11MeshRetryTimeout; } ;
struct genl_info {int snd_seq; int snd_pid; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {int ifindex; TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
typedef int cur_params ;
struct TYPE_2__ {int get_mesh_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (struct mesh_config*,int *,int) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 struct sk_buff* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct net_device*,struct net_device*,struct mesh_config*) ;
 int FUNC_13 (struct wireless_dev*) ;
 int FUNC_14 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_37,
       struct genl_info *VAR_38)
{
 struct cfg80211_registered_device *VAR_39 = VAR_38->user_ptr[0];
 struct net_device *VAR_40 = VAR_38->user_ptr[1];
 struct wireless_dev *VAR_41 = VAR_40->ieee80211_ptr;
 struct mesh_config VAR_42;
 int VAR_43 = 0;
 void *VAR_44;
 struct nlattr *VAR_45;
 struct sk_buff *VAR_46;

 if (VAR_41->iftype != VAR_7)
  return -VAR_2;

 if (!VAR_39->ops->get_mesh_config)
  return -VAR_2;

 FUNC_13(VAR_41);

 if (!VAR_41->mesh_id_len)
  FUNC_3(&VAR_42, &VAR_36, sizeof(VAR_42));
 else
  VAR_43 = FUNC_12(VAR_39, VAR_40, &VAR_42);
 FUNC_14(VAR_41);

 if (VAR_43)
  return VAR_43;


 VAR_46 = FUNC_11(VAR_35, VAR_3);
 if (!VAR_46)
  return -VAR_1;
 VAR_44 = FUNC_4(VAR_46, VAR_38->snd_pid, VAR_38->snd_seq, 0,
        VAR_6);
 if (!VAR_44)
  goto out;
 VAR_45 = FUNC_6(VAR_46, VAR_5);
 if (!VAR_45)
  goto nla_put_failure;
 if (FUNC_8(VAR_46, VAR_4, VAR_40->ifindex) ||
     FUNC_7(VAR_46, VAR_31,
   VAR_42.dot11MeshRetryTimeout) ||
     FUNC_7(VAR_46, VAR_10,
   VAR_42.dot11MeshConfirmTimeout) ||
     FUNC_7(VAR_46, VAR_14,
   VAR_42.dot11MeshHoldingTimeout) ||
     FUNC_7(VAR_46, VAR_26,
   VAR_42.dot11MeshMaxPeerLinks) ||
     FUNC_9(VAR_46, VAR_27,
         VAR_42.dot11MeshMaxRetries) ||
     FUNC_9(VAR_46, VAR_34,
         VAR_42.dot11MeshTTL) ||
     FUNC_9(VAR_46, VAR_11,
         VAR_42.element_ttl) ||
     FUNC_9(VAR_46, VAR_8,
         VAR_42.auto_open_plinks) ||
     FUNC_8(VAR_46, VAR_33,
   VAR_42.dot11MeshNbrOffsetMaxNeighbor) ||
     FUNC_9(VAR_46, VAR_18,
         VAR_42.dot11MeshHWMPmaxPREQretries) ||
     FUNC_8(VAR_46, VAR_29,
   VAR_42.path_refresh_time) ||
     FUNC_7(VAR_46, VAR_28,
   VAR_42.min_discovery_timeout) ||
     FUNC_8(VAR_46, VAR_16,
   VAR_42.dot11MeshHWMPactivePathTimeout) ||
     FUNC_7(VAR_46, VAR_22,
   VAR_42.dot11MeshHWMPpreqMinInterval) ||
     FUNC_7(VAR_46, VAR_21,
   VAR_42.dot11MeshHWMPperrMinInterval) ||
     FUNC_7(VAR_46, VAR_19,
   VAR_42.dot11MeshHWMPnetDiameterTraversalTime) ||
     FUNC_9(VAR_46, VAR_24,
         VAR_42.dot11MeshHWMPRootMode) ||
     FUNC_7(VAR_46, VAR_23,
   VAR_42.dot11MeshHWMPRannInterval) ||
     FUNC_9(VAR_46, VAR_13,
         VAR_42.dot11MeshGateAnnouncementProtocol) ||
     FUNC_9(VAR_46, VAR_12,
         VAR_42.dot11MeshForwarding) ||
     FUNC_8(VAR_46, VAR_32,
   VAR_42.rssi_threshold) ||
     FUNC_8(VAR_46, VAR_15,
   VAR_42.ht_opmode) ||
     FUNC_8(VAR_46, VAR_20,
   VAR_42.dot11MeshHWMPactivePathToRootTimeout) ||
     FUNC_7(VAR_46, VAR_25,
   VAR_42.dot11MeshHWMProotInterval) ||
     FUNC_7(VAR_46, VAR_17,
   VAR_42.dot11MeshHWMPconfirmationInterval) ||
     FUNC_8(VAR_46, VAR_30,
   VAR_42.power_mode) ||
     FUNC_7(VAR_46, VAR_9,
   VAR_42.dot11MeshAwakeWindowDuration))
  goto nla_put_failure;
 FUNC_5(VAR_46, VAR_45);
 FUNC_1(VAR_46, VAR_44);
 return FUNC_2(VAR_46, VAR_38);

 nla_put_failure:
 FUNC_0(VAR_46, VAR_44);
 out:
 FUNC_10(VAR_46);
 return -VAR_0;
}
