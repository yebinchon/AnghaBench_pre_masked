
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int skb_mark; int priority; } ;
struct TYPE_6__ {TYPE_1__ phy; } ;
struct sw_flow_actions {TYPE_2__ key; int sf_acts; } ;
struct sw_flow {TYPE_2__ key; int sf_acts; } ;
struct sk_buff {int sk; int mark; int priority; int protocol; } ;
struct ovs_header {int dp_ifindex; } ;
struct nlattr {int dummy; } ;
struct genl_info {struct nlattr** attrs; struct ovs_header* userhdr; } ;
struct ethhdr {int h_proto; } ;
struct datapath {int dummy; } ;
struct TYPE_7__ {struct sw_flow_actions* flow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sw_flow_actions*) ;
 scalar_t__ VAR_5 ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (struct sw_flow_actions*) ;
 struct sk_buff* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;
 struct ethhdr* FUNC_5 (struct sk_buff*) ;
 struct datapath* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct nlattr*) ;
 int FUNC_12 (int ,struct nlattr*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct datapath*,struct sk_buff*) ;
 struct sw_flow_actions* FUNC_15 (int) ;
 struct sw_flow_actions* FUNC_16 () ;
 int FUNC_17 (struct sk_buff*,int,TYPE_2__*,int*) ;
 int FUNC_18 (struct sw_flow_actions*) ;
 int FUNC_19 (struct sw_flow_actions*,int,struct nlattr*) ;
 int FUNC_20 (int ,struct sw_flow_actions*) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (struct sk_buff*,scalar_t__) ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct nlattr*,TYPE_2__*,int ,struct sw_flow_actions**) ;

__attribute__((used)) static int FUNC_27(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct ovs_header *VAR_11 = VAR_10->userhdr;
 struct nlattr **VAR_12 = VAR_10->attrs;
 struct sw_flow_actions *VAR_13;
 struct sk_buff *VAR_14;
 struct sw_flow *VAR_15;
 struct datapath *VAR_16;
 struct ethhdr *VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_19 = -VAR_0;
 if (!VAR_12[VAR_8] || !VAR_12[VAR_7] ||
     !VAR_12[VAR_6])
  goto err;

 VAR_18 = FUNC_11(VAR_12[VAR_8]);
 VAR_14 = FUNC_3(VAR_5 + VAR_18, VAR_4);
 VAR_19 = -VAR_2;
 if (!VAR_14)
  goto err;
 FUNC_23(VAR_14, VAR_5);

 FUNC_12(FUNC_4(VAR_14, VAR_18), VAR_12[VAR_8], VAR_18);

 FUNC_24(VAR_14);
 VAR_17 = FUNC_5(VAR_14);




 if (FUNC_13(VAR_17->h_proto) >= 1536)
  VAR_14->protocol = VAR_17->h_proto;
 else
  VAR_14->protocol = FUNC_7(VAR_3);


 VAR_15 = FUNC_16();
 VAR_19 = FUNC_2(VAR_15);
 if (FUNC_0(VAR_15))
  goto err_kfree_skb;

 VAR_19 = FUNC_17(VAR_14, -1, &VAR_15->key, &VAR_20);
 if (VAR_19)
  goto err_flow_free;

 VAR_19 = FUNC_19(VAR_15, VAR_20, VAR_12[VAR_7]);
 if (VAR_19)
  goto err_flow_free;
 VAR_13 = FUNC_15(FUNC_11(VAR_12[VAR_6]));
 VAR_19 = FUNC_2(VAR_13);
 if (FUNC_0(VAR_13))
  goto err_flow_free;

 VAR_19 = FUNC_26(VAR_12[VAR_6], &VAR_15->key, 0, &VAR_13);
 FUNC_20(VAR_15->sf_acts, VAR_13);
 if (VAR_19)
  goto err_flow_free;

 FUNC_1(VAR_14)->flow = VAR_15;
 VAR_14->priority = VAR_15->key.phy.priority;
 VAR_14->mark = VAR_15->key.phy.skb_mark;

 FUNC_21();
 VAR_16 = FUNC_6(FUNC_25(VAR_9->sk), VAR_11->dp_ifindex);
 VAR_19 = -VAR_1;
 if (!VAR_16)
  goto err_unlock;

 FUNC_9();
 VAR_19 = FUNC_14(VAR_16, VAR_14);
 FUNC_10();
 FUNC_22();

 FUNC_18(VAR_15);
 return VAR_19;

err_unlock:
 FUNC_22();
err_flow_free:
 FUNC_18(VAR_15);
err_kfree_skb:
 FUNC_8(VAR_14);
err:
 return VAR_19;
}
