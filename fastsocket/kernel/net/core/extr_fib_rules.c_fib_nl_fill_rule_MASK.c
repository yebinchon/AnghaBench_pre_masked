
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct fib_rules_ops {scalar_t__ (* fill ) (struct fib_rule*,struct sk_buff*,struct fib_rule_hdr*) ;int family; } ;
struct fib_rule_hdr {scalar_t__ action; int flags; scalar_t__ res2; scalar_t__ res1; scalar_t__ table; int family; } ;
struct fib_rule {scalar_t__ action; int ifindex; scalar_t__ target; scalar_t__ mark_mask; scalar_t__ mark; scalar_t__ pref; scalar_t__* ifname; int * ctarget; int flags; scalar_t__ table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct sk_buff*,int ,scalar_t__*) ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct fib_rule_hdr* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int,int,int) ;
 scalar_t__ FUNC_6 (struct fib_rule*,struct sk_buff*,struct fib_rule_hdr*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_10, struct fib_rule *VAR_11,
       u32 VAR_12, u32 VAR_13, int VAR_14, int VAR_15,
       struct fib_rules_ops *VAR_16)
{
 struct nlmsghdr *VAR_17;
 struct fib_rule_hdr *VAR_18;

 VAR_17 = FUNC_5(VAR_10, VAR_12, VAR_13, VAR_14, sizeof(*VAR_18), VAR_15);
 if (VAR_17 == ((void*)0))
  return -VAR_0;

 VAR_18 = FUNC_3(VAR_17);
 VAR_18->family = VAR_16->family;
 VAR_18->table = VAR_11->table;
 FUNC_1(VAR_10, VAR_8, VAR_11->table);
 VAR_18->res1 = 0;
 VAR_18->res2 = 0;
 VAR_18->action = VAR_11->action;
 VAR_18->flags = VAR_11->flags;

 if (VAR_11->action == VAR_9 && VAR_11->ctarget == ((void*)0))
  VAR_18->flags |= VAR_2;

 if (VAR_11->ifname[0]) {
  FUNC_0(VAR_10, VAR_6, VAR_11->ifname);

  if (VAR_11->ifindex == -1)
   VAR_18->flags |= VAR_1;
 }

 if (VAR_11->pref)
  FUNC_1(VAR_10, VAR_7, VAR_11->pref);

 if (VAR_11->mark)
  FUNC_1(VAR_10, VAR_3, VAR_11->mark);

 if (VAR_11->mark_mask || VAR_11->mark)
  FUNC_1(VAR_10, VAR_4, VAR_11->mark_mask);

 if (VAR_11->target)
  FUNC_1(VAR_10, VAR_5, VAR_11->target);

 if (VAR_16->fill(VAR_11, VAR_10, VAR_18) < 0)
  goto nla_put_failure;

 return FUNC_4(VAR_10, VAR_17);

nla_put_failure:
 FUNC_2(VAR_10, VAR_17);
 return -VAR_0;
}
