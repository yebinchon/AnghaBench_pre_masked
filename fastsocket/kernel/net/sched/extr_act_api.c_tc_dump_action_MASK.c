
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcamsg {scalar_t__ tca__pad2; scalar_t__ tca__pad1; int tca_family; } ;
struct tc_action_ops {int (* walk ) (struct sk_buff*,struct netlink_callback*,int ,struct tc_action*) ;int owner; int kind; } ;
struct tc_action {struct tc_action_ops* ops; } ;
struct sk_buff {int len; int sk; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_flags; int nlmsg_type; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int skb; struct nlmsghdr* nlh; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ) ;
 struct tcamsg* FUNC_1 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_2 (struct sk_buff*,scalar_t__,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,char*,int ) ;
 struct nlattr* FUNC_4 (struct nlmsghdr*) ;
 struct net VAR_4 ;
 int FUNC_5 (struct tc_action*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,struct nlattr*) ;
 int FUNC_8 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*,unsigned char*) ;
 int FUNC_11 (char*) ;
 unsigned char* FUNC_12 (struct sk_buff*) ;
 struct net* FUNC_13 (int ) ;
 int FUNC_14 (struct sk_buff*,struct netlink_callback*,int ,struct tc_action*) ;
 struct tc_action_ops* FUNC_15 (struct nlattr*) ;

__attribute__((used)) static int
FUNC_16(struct sk_buff *VAR_5, struct netlink_callback *VAR_6)
{
 struct net *VAR_7 = FUNC_13(VAR_5->sk);
 struct nlmsghdr *VAR_8;
 unsigned char *VAR_9 = FUNC_12(VAR_5);
 struct nlattr *VAR_10;
 struct tc_action_ops *VAR_11;
 struct tc_action VAR_12;
 int VAR_13 = 0;
 struct tcamsg *VAR_14 = (struct tcamsg *) FUNC_1(VAR_6->nlh);
 struct nlattr *VAR_15 = FUNC_4(VAR_6->nlh);

 if (VAR_7 != &VAR_4)
  return 0;

 if (VAR_15 == ((void*)0)) {
  FUNC_11("tc_dump_action: action bad kind\n");
  return 0;
 }

 VAR_11 = FUNC_15(VAR_15);
 if (VAR_11 == ((void*)0)) {
  return 0;
 }

 FUNC_5(&VAR_12, 0, sizeof(struct tc_action));
 VAR_12.ops = VAR_11;

 if (VAR_11->walk == ((void*)0)) {
  FUNC_3(1, "tc_dump_action: %s !capable of dumping table\n",
       VAR_11->kind);
  goto nla_put_failure;
 }

 VAR_8 = FUNC_2(VAR_5, FUNC_0(VAR_6->skb).pid, VAR_6->nlh->nlmsg_seq,
   VAR_6->nlh->nlmsg_type, sizeof(*VAR_14));
 VAR_14 = FUNC_1(VAR_8);
 VAR_14->tca_family = VAR_0;
 VAR_14->tca__pad1 = 0;
 VAR_14->tca__pad2 = 0;

 VAR_10 = FUNC_9(VAR_5, VAR_3);
 if (VAR_10 == ((void*)0))
  goto nla_put_failure;

 VAR_13 = VAR_11->walk(VAR_5, VAR_6, VAR_2, &VAR_12);
 if (VAR_13 < 0)
  goto nla_put_failure;

 if (VAR_13 > 0) {
  FUNC_8(VAR_5, VAR_10);
  VAR_13 = VAR_5->len;
 } else
  FUNC_7(VAR_5, VAR_10);

 VAR_8->nlmsg_len = FUNC_12(VAR_5) - VAR_9;
 if (FUNC_0(VAR_6->skb).pid && VAR_13)
  VAR_8->nlmsg_flags |= VAR_1;
 FUNC_6(VAR_11->owner);
 return VAR_5->len;

nla_put_failure:
nlmsg_failure:
 FUNC_6(VAR_11->owner);
 FUNC_10(VAR_5, VAR_9);
 return VAR_5->len;
}
