
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_policy_walk {int dummy; } ;
struct xfrm_dump_info {int nlmsg_flags; int nlmsg_seq; struct sk_buff* out_skb; int in_skb; } ;
struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int nlmsg_seq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (struct net*,struct xfrm_policy_walk*,int ,struct xfrm_dump_info*) ;
 int FUNC_3 (struct xfrm_policy_walk*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3, struct netlink_callback *VAR_4)
{
 struct net *VAR_5 = FUNC_1(VAR_3->sk);
 struct xfrm_policy_walk *VAR_6 = (struct xfrm_policy_walk *) &VAR_4->args[1];
 struct xfrm_dump_info VAR_7;

 FUNC_0(sizeof(struct xfrm_policy_walk) >
       sizeof(VAR_4->args) - sizeof(VAR_4->args[0]));

 VAR_7.in_skb = VAR_4->skb;
 VAR_7.out_skb = VAR_3;
 VAR_7.nlmsg_seq = VAR_4->nlh->nlmsg_seq;
 VAR_7.nlmsg_flags = VAR_0;

 if (!VAR_4->args[0]) {
  VAR_4->args[0] = 1;
  FUNC_3(VAR_6, VAR_1);
 }

 (void) FUNC_2(VAR_5, VAR_6, VAR_2, &VAR_7);

 return VAR_3->len;
}
