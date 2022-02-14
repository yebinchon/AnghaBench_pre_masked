
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_err_soft; scalar_t__ sk_route_caps; int sk_bound_dev_if; int sk_protocol; } ;
struct rt0_hdr {struct in6_addr* addr; } ;
struct in6_addr {int dummy; } ;
struct ipv6_pinfo {TYPE_1__* opt; int flow_label; struct in6_addr saddr; struct in6_addr daddr; int dst_cookie; } ;
struct inet_sock {int sport; int dport; } ;
struct flowi {struct in6_addr fl6_dst; int fl_ip_sport; int fl_ip_dport; int oif; int fl6_flowlabel; struct in6_addr fl6_src; int proto; } ;
struct dst_entry {int dummy; } ;
typedef int fl ;
struct TYPE_2__ {scalar_t__ srcrt; } ;


 int FUNC_0 (struct sock*,struct dst_entry*,int *,int *) ;
 struct dst_entry* FUNC_1 (struct sock*,int ) ;
 struct ipv6_pinfo* FUNC_2 (struct sock*) ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_5 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_6 (struct flowi*,int ,int) ;
 int FUNC_7 (struct sock*,struct flowi*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int ,struct dst_entry**,struct flowi*,struct sock*,int ) ;

int FUNC_10(struct sock *VAR_0)
{
 int VAR_1;
 struct dst_entry *VAR_2;
 struct ipv6_pinfo *VAR_3 = FUNC_2(VAR_0);

 VAR_2 = FUNC_1(VAR_0, VAR_3->dst_cookie);

 if (VAR_2 == ((void*)0)) {
  struct inet_sock *VAR_4 = FUNC_3(VAR_0);
  struct in6_addr *VAR_5 = ((void*)0), VAR_6;
  struct flowi VAR_7;

  FUNC_6(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.proto = VAR_0->sk_protocol;
  FUNC_5(&VAR_7.fl6_dst, &VAR_3->daddr);
  FUNC_5(&VAR_7.fl6_src, &VAR_3->saddr);
  VAR_7.fl6_flowlabel = VAR_3->flow_label;
  VAR_7.oif = VAR_0->sk_bound_dev_if;
  VAR_7.fl_ip_dport = VAR_4->dport;
  VAR_7.fl_ip_sport = VAR_4->sport;
  FUNC_7(VAR_0, &VAR_7);

  if (VAR_3->opt && VAR_3->opt->srcrt) {
   struct rt0_hdr *VAR_8 = (struct rt0_hdr *) VAR_3->opt->srcrt;
   FUNC_5(&VAR_6, &VAR_7.fl6_dst);
   FUNC_5(&VAR_7.fl6_dst, VAR_8->addr);
   VAR_5 = &VAR_6;
  }

  VAR_1 = FUNC_4(VAR_0, &VAR_2, &VAR_7);
  if (VAR_1) {
   VAR_0->sk_route_caps = 0;
   return VAR_1;
  }
  if (VAR_5)
   FUNC_5(&VAR_7.fl6_dst, VAR_5);

  if ((VAR_1 = FUNC_9(FUNC_8(VAR_0), &VAR_2, &VAR_7, VAR_0, 0)) < 0) {
   VAR_0->sk_err_soft = -VAR_1;
   return VAR_1;
  }

  FUNC_0(VAR_0, VAR_2, ((void*)0), ((void*)0));
 }

 return 0;
}
