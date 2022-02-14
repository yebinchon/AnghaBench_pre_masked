
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_protocol; int sk_mark; int sk_priority; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; scalar_t__ len; int local_df; int mark; int priority; int * sk; int * destructor; scalar_t__ truesize; int data_len; struct sk_buff* next; } ;
struct TYPE_3__ {int dst; } ;
struct rtable {scalar_t__ rt_type; TYPE_1__ u; int rt_dst; int rt_src; } ;
struct net {int dummy; } ;
struct iphdr {int version; int ihl; scalar_t__ protocol; int daddr; int saddr; int ttl; int frag_off; int tos; } ;
struct ip_options {int optlen; } ;
struct inet_sock {scalar_t__ pmtudisc; int tos; int mc_ttl; } ;
struct inet_cork {int flags; int * dst; int addr; struct ip_options* opt; } ;
struct icmphdr {int type; } ;
typedef int __u8 ;
typedef int __be16 ;
struct TYPE_4__ {struct sk_buff* frag_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net*,int ) ;
 struct inet_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct inet_cork*) ;
 scalar_t__ FUNC_7 (struct sock*,int *) ;
 int FUNC_8 (struct sk_buff*,struct ip_options*,int ,struct rtable*,int ) ;
 int FUNC_9 (struct iphdr*,int *,struct sock*) ;
 int FUNC_10 (struct inet_sock*,int *) ;
 int FUNC_11 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 TYPE_2__* FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 struct net* FUNC_17 (struct sock*) ;

struct sk_buff *FUNC_18(struct sock *VAR_5,
         struct sk_buff_head *VAR_6,
         struct inet_cork *VAR_7)
{
 struct sk_buff *VAR_8, *VAR_9;
 struct sk_buff **VAR_10;
 struct inet_sock *VAR_11 = FUNC_5(VAR_5);
 struct net *VAR_12 = FUNC_17(VAR_5);
 struct ip_options *VAR_13 = ((void*)0);
 struct rtable *VAR_14 = (struct rtable *)VAR_7->dst;
 struct iphdr *VAR_15;
 __be16 VAR_16 = 0;
 __u8 VAR_17;

 if ((VAR_8 = FUNC_0(VAR_6)) == ((void*)0))
  goto out;
 VAR_10 = &(FUNC_15(VAR_8)->frag_list);


 if (VAR_8->data < FUNC_12(VAR_8))
  FUNC_1(VAR_8, FUNC_14(VAR_8));
 while ((VAR_9 = FUNC_0(VAR_6)) != ((void*)0)) {
  FUNC_1(VAR_9, FUNC_13(VAR_8));
  *VAR_10 = VAR_9;
  VAR_10 = &(VAR_9->next);
  VAR_8->len += VAR_9->len;
  VAR_8->data_len += VAR_9->len;
  VAR_8->truesize += VAR_9->truesize;
  VAR_9->destructor = ((void*)0);
  VAR_9->sk = ((void*)0);
 }





 if (VAR_11->pmtudisc < VAR_3)
  VAR_8->local_df = 1;




 if (VAR_11->pmtudisc >= VAR_3 ||
     (VAR_8->len <= FUNC_2(&VAR_14->u.dst) &&
      FUNC_7(VAR_5, &VAR_14->u.dst)))
  VAR_16 = FUNC_3(VAR_2);

 if (VAR_7->flags & VAR_0)
  VAR_13 = VAR_7->opt;

 if (VAR_14->rt_type == VAR_4)
  VAR_17 = VAR_11->mc_ttl;
 else
  VAR_17 = FUNC_10(VAR_11, &VAR_14->u.dst);

 VAR_15 = (struct iphdr *)VAR_8->data;
 VAR_15->version = 4;
 VAR_15->ihl = 5;
 if (VAR_13) {
  VAR_15->ihl += VAR_13->optlen>>2;
  FUNC_8(VAR_8, VAR_13, VAR_7->addr, VAR_14, 0);
 }
 VAR_15->tos = VAR_11->tos;
 VAR_15->frag_off = VAR_16;
 FUNC_9(VAR_15, &VAR_14->u.dst, VAR_5);
 VAR_15->ttl = VAR_17;
 VAR_15->protocol = VAR_5->sk_protocol;
 VAR_15->saddr = VAR_14->rt_src;
 VAR_15->daddr = VAR_14->rt_dst;

 VAR_8->priority = VAR_5->sk_priority;
 VAR_8->mark = VAR_5->sk_mark;




 VAR_7->dst = ((void*)0);
 FUNC_11(VAR_8, &VAR_14->u.dst);

 if (VAR_15->protocol == VAR_1)
  FUNC_4(VAR_12, ((struct icmphdr *)
   FUNC_16(VAR_8))->type);


 FUNC_6(VAR_7);
out:
 return VAR_8;
}
