
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_userpolicy_info {int dummy; } ;
struct xfrm_policy {int mark; int type; } ;
struct xfrm_dump_info {int nlmsg_flags; int nlmsg_seq; struct sk_buff* out_skb; struct sk_buff* in_skb; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct xfrm_policy*,struct xfrm_userpolicy_info*,int) ;
 scalar_t__ FUNC_2 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct xfrm_policy*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct xfrm_policy*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct xfrm_userpolicy_info* FUNC_6 (struct nlmsghdr*) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_8 (struct sk_buff*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_10(struct xfrm_policy *VAR_2, int VAR_3, int VAR_4, void *VAR_5)
{
 struct xfrm_dump_info *VAR_6 = VAR_5;
 struct xfrm_userpolicy_info *VAR_7;
 struct sk_buff *VAR_8 = VAR_6->in_skb;
 struct sk_buff *VAR_9 = VAR_6->out_skb;
 struct nlmsghdr *VAR_10;

 VAR_10 = FUNC_8(VAR_9, FUNC_0(VAR_8).pid, VAR_6->nlmsg_seq,
   VAR_1, sizeof(*VAR_7), VAR_6->nlmsg_flags);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_10);
 FUNC_1(VAR_2, VAR_7, VAR_3);
 if (FUNC_4(VAR_2, VAR_9) < 0)
  goto nlmsg_failure;
 if (FUNC_3(VAR_2, VAR_9))
  goto nlmsg_failure;
 if (FUNC_2(VAR_2->type, VAR_9) < 0)
  goto nlmsg_failure;
 if (FUNC_9(VAR_9, &VAR_2->mark))
  goto nla_put_failure;

 FUNC_7(VAR_9, VAR_10);
 return 0;

nla_put_failure:
nlmsg_failure:
 FUNC_5(VAR_9, VAR_10);
 return -VAR_0;
}
