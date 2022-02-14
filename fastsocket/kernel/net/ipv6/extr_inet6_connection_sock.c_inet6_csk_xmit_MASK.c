
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_err_soft; scalar_t__ sk_route_caps; int sk_bound_dev_if; int sk_protocol; } ;
struct sk_buff {struct sock* sk; } ;
struct rt0_hdr {struct in6_addr* addr; } ;
struct in6_addr {int dummy; } ;
struct ipv6_pinfo {TYPE_1__* opt; struct in6_addr daddr; int dst_cookie; int flow_label; struct in6_addr saddr; } ;
struct inet_sock {int dport; int sport; } ;
struct flowi {struct in6_addr fl6_dst; int fl_ip_dport; int fl_ip_sport; int oif; int fl6_flowlabel; struct in6_addr fl6_src; int proto; } ;
struct dst_entry {int dummy; } ;
typedef int fl ;
struct TYPE_2__ {scalar_t__ srcrt; } ;


 int FUNC_0 (struct sock*,int ) ;
 struct dst_entry* FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*,struct dst_entry*,int *,int *) ;
 int FUNC_3 (struct dst_entry*) ;
 struct ipv6_pinfo* FUNC_4 (struct sock*) ;
 struct inet_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_7 (struct sock*,struct sk_buff*,struct flowi*,TYPE_1__*,int ) ;
 int FUNC_8 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct flowi*,int ,int) ;
 int FUNC_11 (struct sock*,struct flowi*) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (int ,struct dst_entry**,struct flowi*,struct sock*,int ) ;

int FUNC_15(struct sk_buff *VAR_0, int VAR_1)
{
 struct sock *VAR_2 = VAR_0->sk;
 struct inet_sock *VAR_3 = FUNC_5(VAR_2);
 struct ipv6_pinfo *VAR_4 = FUNC_4(VAR_2);
 struct flowi VAR_5;
 struct dst_entry *VAR_6;
 struct in6_addr *VAR_7 = ((void*)0), VAR_8;

 FUNC_10(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.proto = VAR_2->sk_protocol;
 FUNC_8(&VAR_5.fl6_dst, &VAR_4->daddr);
 FUNC_8(&VAR_5.fl6_src, &VAR_4->saddr);
 VAR_5.fl6_flowlabel = VAR_4->flow_label;
 FUNC_0(VAR_2, VAR_5.fl6_flowlabel);
 VAR_5.oif = VAR_2->sk_bound_dev_if;
 VAR_5.fl_ip_sport = VAR_3->sport;
 VAR_5.fl_ip_dport = VAR_3->dport;
 FUNC_11(VAR_2, &VAR_5);

 if (VAR_4->opt && VAR_4->opt->srcrt) {
  struct rt0_hdr *VAR_9 = (struct rt0_hdr *)VAR_4->opt->srcrt;
  FUNC_8(&VAR_8, &VAR_5.fl6_dst);
  FUNC_8(&VAR_5.fl6_dst, VAR_9->addr);
  VAR_7 = &VAR_8;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_4->dst_cookie);

 if (VAR_6 == ((void*)0)) {
  int VAR_10 = FUNC_6(VAR_2, &VAR_6, &VAR_5);

  if (VAR_10) {
   VAR_2->sk_err_soft = -VAR_10;
   FUNC_9(VAR_0);
   return VAR_10;
  }

  if (VAR_7)
   FUNC_8(&VAR_5.fl6_dst, VAR_7);

  if ((VAR_10 = FUNC_14(FUNC_13(VAR_2), &VAR_6, &VAR_5, VAR_2, 0)) < 0) {
   VAR_2->sk_route_caps = 0;
   FUNC_9(VAR_0);
   return VAR_10;
  }

  FUNC_2(VAR_2, VAR_6, ((void*)0), ((void*)0));
 }

 FUNC_12(VAR_0, FUNC_3(VAR_6));


 FUNC_8(&VAR_5.fl6_dst, &VAR_4->daddr);

 return FUNC_7(VAR_2, VAR_0, &VAR_5, VAR_4->opt, 0);
}
