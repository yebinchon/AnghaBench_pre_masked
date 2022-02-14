
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_usersa_info {int dummy; } ;
struct xfrm_state {int dummy; } ;
struct xfrm_dump_info {int nlmsg_flags; int nlmsg_seq; struct sk_buff* out_skb; struct sk_buff* in_skb; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct xfrm_state*,struct xfrm_usersa_info*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct xfrm_usersa_info* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_2, int VAR_3, void *VAR_4)
{
 struct xfrm_dump_info *VAR_5 = VAR_4;
 struct sk_buff *VAR_6 = VAR_5->in_skb;
 struct sk_buff *VAR_7 = VAR_5->out_skb;
 struct xfrm_usersa_info *VAR_8;
 struct nlmsghdr *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_7, FUNC_0(VAR_6).pid, VAR_5->nlmsg_seq,
   VAR_1, sizeof(*VAR_8), VAR_5->nlmsg_flags);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_9);

 VAR_10 = FUNC_1(VAR_2, VAR_8, VAR_7);
 if (VAR_10)
  goto nla_put_failure;

 FUNC_4(VAR_7, VAR_9);
 return 0;

nla_put_failure:
 FUNC_2(VAR_7, VAR_9);
 return VAR_10;
}
