
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ipv6_pinfo {int daddr; int saddr; } ;
struct dccp_hdr {int dccph_checksum; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct dccp_hdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int *,int *) ;
 struct ipv6_pinfo* FUNC_3 (struct sock*) ;

__attribute__((used)) static inline void FUNC_4(struct sock *VAR_0, int VAR_1,
          struct sk_buff *VAR_2)
{
 struct ipv6_pinfo *VAR_3 = FUNC_3(VAR_0);
 struct dccp_hdr *VAR_4 = FUNC_1(VAR_2);

 FUNC_0(VAR_2);
 VAR_4->dccph_checksum = FUNC_2(VAR_2, &VAR_3->saddr, &VAR_3->daddr);
}
