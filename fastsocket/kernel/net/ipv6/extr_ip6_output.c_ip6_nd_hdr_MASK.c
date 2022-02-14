
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; void* protocol; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {int nexthdr; int daddr; int saddr; int hop_limit; void* payload_len; } ;
struct ipv6_pinfo {int hop_limit; } ;
struct in6_addr {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 struct ipv6_pinfo* FUNC_2 (struct sock*) ;
 int FUNC_3 (int *,struct in6_addr const*) ;
 struct ipv6hdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;

int FUNC_7(struct sock *VAR_1, struct sk_buff *VAR_2, struct net_device *VAR_3,
        const struct in6_addr *VAR_4, const struct in6_addr *VAR_5,
        int VAR_6, int VAR_7)
{
 struct ipv6_pinfo *VAR_8 = FUNC_2(VAR_1);
 struct ipv6hdr *VAR_9;
 int VAR_10;

 VAR_2->protocol = FUNC_1(VAR_0);
 VAR_2->dev = VAR_3;

 VAR_10 = VAR_7 + sizeof(struct ipv6hdr);

 FUNC_6(VAR_2);
 FUNC_5(VAR_2, sizeof(struct ipv6hdr));
 VAR_9 = FUNC_4(VAR_2);

 *(__be32*)VAR_9 = FUNC_0(0x60000000);

 VAR_9->payload_len = FUNC_1(VAR_7);
 VAR_9->nexthdr = VAR_6;
 VAR_9->hop_limit = VAR_8->hop_limit;

 FUNC_3(&VAR_9->saddr, VAR_4);
 FUNC_3(&VAR_9->daddr, VAR_5);

 return 0;
}
