
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ vlan_tci; } ;
struct ovs_header {int dp_ifindex; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct dp_upcall_info {int pid; struct nlattr* userdata; int key; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 int VAR_7 ;
 int FUNC_3 (struct sk_buff*,struct ovs_header*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 struct ovs_header* FUNC_5 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_6 (struct net*,struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct nlattr*) ;
 int FUNC_11 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct sk_buff*,struct nlattr*) ;
 int FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_19(struct net *VAR_8, int VAR_9,
      struct sk_buff *VAR_10,
      const struct dp_upcall_info *VAR_11)
{
 struct ovs_header *VAR_12;
 struct sk_buff *VAR_13 = ((void*)0);
 struct sk_buff *VAR_14;
 struct nlattr *VAR_15;
 int VAR_16;

 if (FUNC_18(VAR_10)) {
  VAR_13 = FUNC_14(VAR_10, VAR_2);
  if (!VAR_13)
   return -VAR_1;

  VAR_13 = FUNC_2(VAR_13, FUNC_17(VAR_13));
  if (!VAR_13)
   return -VAR_1;

  VAR_13->vlan_tci = 0;
  VAR_10 = VAR_13;
 }

 if (FUNC_8(VAR_10->len) > VAR_6) {
  VAR_16 = -VAR_0;
  goto out;
 }

 VAR_14 = FUNC_4(FUNC_16(VAR_10, VAR_11->userdata), VAR_2);
 if (!VAR_14) {
  VAR_16 = -VAR_1;
  goto out;
 }

 VAR_12 = FUNC_5(VAR_14, 0, 0, &VAR_7,
        0, VAR_11->cmd);
 VAR_12->dp_ifindex = VAR_9;

 VAR_15 = FUNC_12(VAR_14, VAR_3);
 FUNC_13(VAR_11->key, VAR_14);
 FUNC_11(VAR_14, VAR_15);

 if (VAR_11->userdata)
  FUNC_0(VAR_14, VAR_5,
     FUNC_10(VAR_11->userdata),
     FUNC_9(VAR_11->userdata));

 VAR_15 = FUNC_1(VAR_14, VAR_4, VAR_10->len);

 FUNC_15(VAR_10, FUNC_9(VAR_15));

 FUNC_3(VAR_14, VAR_12);
 VAR_16 = FUNC_6(VAR_8, VAR_14, VAR_11->pid);

out:
 FUNC_7(VAR_13);
 return VAR_16;
}
