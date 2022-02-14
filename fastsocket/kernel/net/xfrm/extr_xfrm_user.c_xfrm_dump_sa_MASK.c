
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state_walk {int dummy; } ;
struct xfrm_dump_info {int nlmsg_flags; int nlmsg_seq; struct sk_buff* out_skb; int in_skb; } ;
struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int nlmsg_seq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (struct net*,struct xfrm_state_walk*,int ,struct xfrm_dump_info*) ;
 int FUNC_3 (struct xfrm_state_walk*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, struct netlink_callback *VAR_3)
{
 struct net *VAR_4 = FUNC_1(VAR_2->sk);
 struct xfrm_state_walk *VAR_5 = (struct xfrm_state_walk *) &VAR_3->args[1];
 struct xfrm_dump_info VAR_6;

 FUNC_0(sizeof(struct xfrm_state_walk) >
       sizeof(VAR_3->args) - sizeof(VAR_3->args[0]));

 VAR_6.in_skb = VAR_3->skb;
 VAR_6.out_skb = VAR_2;
 VAR_6.nlmsg_seq = VAR_3->nlh->nlmsg_seq;
 VAR_6.nlmsg_flags = VAR_0;

 if (!VAR_3->args[0]) {
  VAR_3->args[0] = 1;
  FUNC_3(VAR_5, 0);
 }

 (void) FUNC_2(VAR_4, VAR_5, VAR_1, &VAR_6);

 return VAR_2->len;
}
