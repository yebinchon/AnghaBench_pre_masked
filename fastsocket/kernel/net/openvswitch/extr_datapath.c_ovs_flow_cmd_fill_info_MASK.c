
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct sw_flow_actions {int actions_len; int actions; } ;
struct sw_flow {unsigned long used; int lock; scalar_t__ tcp_flags; int byte_count; scalar_t__ packet_count; int key; int sf_acts; } ;
struct sk_buff {int len; } ;
struct ovs_header {int dp_ifindex; } ;
struct ovs_flow_stats {scalar_t__ n_packets; int n_bytes; } ;
struct nlattr {int dummy; } ;
struct datapath {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*,struct ovs_header*) ;
 int FUNC_2 (struct sk_buff*,struct ovs_header*) ;
 struct ovs_header* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,scalar_t__) ;
 int FUNC_4 (struct datapath*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int,struct ovs_flow_stats*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_11 (int *,struct sk_buff*) ;
 int FUNC_12 (unsigned long) ;
 struct sw_flow_actions* FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct sw_flow *VAR_7, struct datapath *VAR_8,
      struct sk_buff *VAR_9, u32 VAR_10,
      u32 VAR_11, u32 VAR_12, u8 VAR_13)
{
 const int VAR_14 = VAR_9->len;
 const struct sw_flow_actions *VAR_15;
 struct nlattr *VAR_16;
 struct ovs_flow_stats VAR_17;
 struct ovs_header *VAR_18;
 struct nlattr *VAR_19;
 unsigned long VAR_20;
 u8 VAR_21;
 int VAR_22;

 VAR_15 = FUNC_13(VAR_7->sf_acts);

 VAR_18 = FUNC_3(VAR_9, VAR_10, VAR_11, &VAR_6, VAR_12, VAR_13);
 if (!VAR_18)
  return -VAR_0;

 VAR_18->dp_ifindex = FUNC_4(VAR_8);

 VAR_19 = FUNC_7(VAR_9, VAR_2);
 if (!VAR_19)
  goto nla_put_failure;
 VAR_22 = FUNC_11(&VAR_7->key, VAR_9);
 if (VAR_22)
  goto error;
 FUNC_6(VAR_9, VAR_19);

 FUNC_14(&VAR_7->lock);
 VAR_20 = VAR_7->used;
 VAR_17.n_packets = VAR_7->packet_count;
 VAR_17.n_bytes = VAR_7->byte_count;
 VAR_21 = VAR_7->tcp_flags;
 FUNC_15(&VAR_7->lock);

 if (VAR_20 &&
     FUNC_9(VAR_9, VAR_5, FUNC_12(VAR_20)))
  goto nla_put_failure;

 if (VAR_17.n_packets &&
     FUNC_8(VAR_9, VAR_3,
      sizeof(struct ovs_flow_stats), &VAR_17))
  goto nla_put_failure;

 if (VAR_21 &&
     FUNC_10(VAR_9, VAR_4, VAR_21))
  goto nla_put_failure;
 VAR_16 = FUNC_7(VAR_9, VAR_1);
 if (VAR_16) {
  VAR_22 = FUNC_0(VAR_15->actions, VAR_15->actions_len, VAR_9);
  if (!VAR_22)
   FUNC_6(VAR_9, VAR_16);
  else {
   if (VAR_14)
    goto error;

   FUNC_5(VAR_9, VAR_16);
  }
 } else if (VAR_14)
  goto nla_put_failure;

 return FUNC_2(VAR_9, VAR_18);

nla_put_failure:
 VAR_22 = -VAR_0;
error:
 FUNC_1(VAR_9, VAR_18);
 return VAR_22;
}
