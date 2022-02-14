
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_mark; int sk_priority; int sk_protocol; } ;
struct sk_buff {int mark; int priority; } ;
struct TYPE_2__ {int dst; } ;
struct rtable {TYPE_1__ u; int rt_src; int rt_dst; } ;
struct iphdr {int version; int ihl; int protocol; int saddr; int daddr; int ttl; scalar_t__ frag_off; int tos; } ;
struct ip_options {int optlen; } ;
struct inet_sock {int tos; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*,int *) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct ip_options*,int ,struct rtable*,int ) ;
 int FUNC_6 (struct iphdr*,int *,struct sock*) ;
 int FUNC_7 (struct inet_sock*,int *) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 struct rtable* FUNC_10 (struct sk_buff*) ;

int FUNC_11(struct sk_buff *VAR_1, struct sock *VAR_2,
     __be32 VAR_3, __be32 VAR_4, struct ip_options *VAR_5)
{
 struct inet_sock *VAR_6 = FUNC_1(VAR_2);
 struct rtable *VAR_7 = FUNC_10(VAR_1);
 struct iphdr *VAR_8;


 FUNC_8(VAR_1, sizeof(struct iphdr) + (VAR_5 ? VAR_5->optlen : 0));
 FUNC_9(VAR_1);
 VAR_8 = FUNC_3(VAR_1);
 VAR_8->version = 4;
 VAR_8->ihl = 5;
 VAR_8->tos = VAR_6->tos;
 if (FUNC_2(VAR_2, &VAR_7->u.dst))
  VAR_8->frag_off = FUNC_0(VAR_0);
 else
  VAR_8->frag_off = 0;
 VAR_8->ttl = FUNC_7(VAR_6, &VAR_7->u.dst);
 VAR_8->daddr = VAR_7->rt_dst;
 VAR_8->saddr = VAR_7->rt_src;
 VAR_8->protocol = VAR_2->sk_protocol;
 FUNC_6(VAR_8, &VAR_7->u.dst, VAR_2);

 if (VAR_5 && VAR_5->optlen) {
  VAR_8->ihl += VAR_5->optlen>>2;
  FUNC_5(VAR_1, VAR_5, VAR_4, VAR_7, 0);
 }

 VAR_1->priority = VAR_2->sk_priority;
 VAR_1->mark = VAR_2->sk_mark;


 return FUNC_4(VAR_1);
}
