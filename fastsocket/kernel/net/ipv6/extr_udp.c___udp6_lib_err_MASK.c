
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct udphdr {int dest; int source; } ;
struct udp_table {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_err; int (* sk_error_report ) (struct sock*) ;} ;
struct sk_buff {int dev; scalar_t__ data; } ;
struct in6_addr {int dummy; } ;
struct ipv6hdr {struct in6_addr daddr; struct in6_addr saddr; } ;
struct ipv6_pinfo {scalar_t__ recverr; } ;
struct inet6_skb_parm {int dummy; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 struct sock* FUNC_0 (int ,struct in6_addr*,int ,struct in6_addr*,int ,int ,struct udp_table*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct ipv6_pinfo* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int,int ,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

void FUNC_9(struct sk_buff *VAR_1, struct inet6_skb_parm *VAR_2,
      u8 VAR_3, u8 VAR_4, int VAR_5, __be32 VAR_6,
      struct udp_table *VAR_7)
{
 struct ipv6_pinfo *VAR_8;
 struct ipv6hdr *VAR_9 = (struct ipv6hdr*)VAR_1->data;
 struct in6_addr *VAR_10 = &VAR_9->saddr;
 struct in6_addr *VAR_11 = &VAR_9->daddr;
 struct udphdr *VAR_12 = (struct udphdr*)(VAR_1->data+VAR_5);
 struct sock *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_0(FUNC_1(VAR_1->dev), VAR_11, VAR_12->dest,
          VAR_10, VAR_12->source, FUNC_3(VAR_1), VAR_7);
 if (VAR_13 == ((void*)0))
  return;

 VAR_8 = FUNC_4(VAR_13);

 if (!FUNC_2(VAR_3, VAR_4, &VAR_14) && !VAR_8->recverr)
  goto out;

 if (VAR_13->sk_state != VAR_0 && !VAR_8->recverr)
  goto out;

 if (VAR_8->recverr)
  FUNC_5(VAR_13, VAR_1, VAR_14, VAR_12->dest, FUNC_6(VAR_6), (u8 *)(VAR_12+1));

 VAR_13->sk_err = VAR_14;
 VAR_13->sk_error_report(VAR_13);
out:
 FUNC_7(VAR_13);
}
