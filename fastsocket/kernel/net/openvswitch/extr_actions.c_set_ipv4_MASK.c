
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ovs_key_ipv4 {scalar_t__ ipv4_src; scalar_t__ ipv4_dst; scalar_t__ ipv4_tos; scalar_t__ ipv4_ttl; } ;
struct iphdr {scalar_t__ saddr; scalar_t__ daddr; scalar_t__ tos; scalar_t__ ttl; } ;


 struct iphdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct iphdr*,int ,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 int FUNC_3 (struct sk_buff*,struct iphdr*,scalar_t__*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,struct iphdr*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_0, const struct ovs_key_ipv4 *VAR_1)
{
 struct iphdr *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, FUNC_5(VAR_0) +
     sizeof(struct iphdr));
 if (FUNC_6(VAR_3))
  return VAR_3;

 VAR_2 = FUNC_0(VAR_0);

 if (VAR_1->ipv4_src != VAR_2->saddr)
  FUNC_3(VAR_0, VAR_2, &VAR_2->saddr, VAR_1->ipv4_src);

 if (VAR_1->ipv4_dst != VAR_2->daddr)
  FUNC_3(VAR_0, VAR_2, &VAR_2->daddr, VAR_1->ipv4_dst);

 if (VAR_1->ipv4_tos != VAR_2->tos)
  FUNC_1(VAR_2, 0, VAR_1->ipv4_tos);

 if (VAR_1->ipv4_ttl != VAR_2->ttl)
  FUNC_4(VAR_0, VAR_2, VAR_1->ipv4_ttl);

 return 0;
}
