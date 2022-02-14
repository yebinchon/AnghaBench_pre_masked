
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcamsg {scalar_t__ tca__pad2; scalar_t__ tca__pad1; int tca_family; } ;
struct tc_action {TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_flags; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int dummy; } ;
struct TYPE_2__ {int (* walk ) (struct sk_buff*,struct netlink_callback*,int ,struct tc_action*) ;int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tcamsg* FUNC_0 (struct nlmsghdr*) ;
 int VAR_4 ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 struct tc_action* FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (struct tc_action*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct nlattr**,int ,struct nlattr*,int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct sk_buff*,int *,int ,int ,int) ;
 unsigned char* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,struct netlink_callback*,int ,struct tc_action*) ;
 TYPE_1__* FUNC_14 (struct nlattr*) ;

__attribute__((used)) static int FUNC_15(struct nlattr *VAR_13, struct nlmsghdr *VAR_14, u32 VAR_15)
{
 struct sk_buff *VAR_16;
 unsigned char *VAR_17;
 struct nlmsghdr *VAR_18;
 struct tcamsg *VAR_19;
 struct netlink_callback VAR_20;
 struct nlattr *VAR_21;
 struct nlattr *VAR_22[VAR_10+1];
 struct nlattr *VAR_23;
 struct tc_action *VAR_24 = FUNC_3(0);
 int VAR_25 = -VAR_2;

 if (VAR_24 == ((void*)0)) {
  FUNC_10("tca_action_flush: couldnt create tc_action\n");
  return VAR_25;
 }

 VAR_16 = FUNC_2(VAR_4, VAR_3);
 if (!VAR_16) {
  FUNC_10("tca_action_flush: failed skb alloc\n");
  FUNC_4(VAR_24);
  return VAR_25;
 }

 VAR_17 = FUNC_12(VAR_16);

 VAR_25 = FUNC_9(VAR_22, VAR_10, VAR_13, ((void*)0));
 if (VAR_25 < 0)
  goto err_out;

 VAR_25 = -VAR_1;
 VAR_23 = VAR_22[VAR_9];
 VAR_24->ops = FUNC_14(VAR_23);
 if (VAR_24->ops == ((void*)0))
  goto err_out;

 VAR_18 = FUNC_1(VAR_16, VAR_15, VAR_14->nlmsg_seq, VAR_7, sizeof(*VAR_19));
 VAR_19 = FUNC_0(VAR_18);
 VAR_19->tca_family = VAR_0;
 VAR_19->tca__pad1 = 0;
 VAR_19->tca__pad2 = 0;

 VAR_21 = FUNC_8(VAR_16, VAR_11);
 if (VAR_21 == ((void*)0))
  goto nla_put_failure;

 VAR_25 = VAR_24->ops->walk(VAR_16, &VAR_20, VAR_7, VAR_24);
 if (VAR_25 < 0)
  goto nla_put_failure;
 if (VAR_25 == 0)
  goto noflush_out;

 FUNC_7(VAR_16, VAR_21);

 VAR_18->nlmsg_len = FUNC_12(VAR_16) - VAR_17;
 VAR_18->nlmsg_flags |= VAR_6;
 FUNC_6(VAR_24->ops->owner);
 FUNC_4(VAR_24);
 VAR_25 = FUNC_11(VAR_16, &VAR_12, VAR_15, VAR_8, VAR_14->nlmsg_flags&VAR_5);
 if (VAR_25 > 0)
  return 0;

 return VAR_25;

nla_put_failure:
nlmsg_failure:
 FUNC_6(VAR_24->ops->owner);
err_out:
noflush_out:
 FUNC_5(VAR_16);
 FUNC_4(VAR_24);
 return VAR_25;
}
