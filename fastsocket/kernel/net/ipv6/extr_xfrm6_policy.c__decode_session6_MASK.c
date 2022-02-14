
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {unsigned char const* data; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct ipv6_opt_hdr {int nexthdr; } ;
struct ip6_mh {int ip6mh_type; } ;
struct flowi {int proto; int fl_icmp_type; int fl_icmp_code; int fl_ipsec_spi; int fl_mh_type; void* fl_ip_dport; void* fl_ip_sport; int fl6_src; int fl6_dst; } ;
typedef void* __be16 ;
struct TYPE_2__ {size_t nhoff; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int *) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ipv6_opt_hdr*) ;
 int FUNC_4 (struct flowi*,int ,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 unsigned char* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_8(struct sk_buff *VAR_0, struct flowi *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 u16 VAR_4 = FUNC_7(VAR_0);
 struct ipv6hdr *VAR_5 = FUNC_2(VAR_0);
 struct ipv6_opt_hdr *VAR_6;
 const unsigned char *VAR_7 = FUNC_6(VAR_0);
 u8 VAR_8 = VAR_7[FUNC_0(VAR_0)->nhoff];

 FUNC_4(VAR_1, 0, sizeof(struct flowi));
 FUNC_1(&VAR_1->fl6_dst, VAR_2 ? &VAR_5->saddr : &VAR_5->daddr);
 FUNC_1(&VAR_1->fl6_src, VAR_2 ? &VAR_5->daddr : &VAR_5->saddr);

 while (VAR_7 + VAR_4 + 1 < VAR_0->data ||
        FUNC_5(VAR_0, VAR_7 + VAR_4 + 1 - VAR_0->data)) {
  VAR_7 = FUNC_6(VAR_0);
  VAR_6 = (struct ipv6_opt_hdr *)(VAR_7 + VAR_4);

  switch (VAR_8) {
  case 130:
   VAR_3 = 1;
  case 128:
  case 129:
  case 131:
   VAR_4 += FUNC_3(VAR_6);
   VAR_8 = VAR_6->nexthdr;
   VAR_6 = (struct ipv6_opt_hdr *)(VAR_7 + VAR_4);
   break;

  case 133:
  case 132:
  case 134:
  case 135:
  case 139:
   if (!VAR_3 && (VAR_7 + VAR_4 + 4 < VAR_0->data ||
        FUNC_5(VAR_0, VAR_7 + VAR_4 + 4 - VAR_0->data))) {
    __be16 *VAR_9 = (__be16 *)VAR_6;

    VAR_1->fl_ip_sport = VAR_9[!!VAR_2];
    VAR_1->fl_ip_dport = VAR_9[!VAR_2];
   }
   VAR_1->proto = VAR_8;
   return;

  case 137:
   if (!VAR_3 && FUNC_5(VAR_0, VAR_7 + VAR_4 + 2 - VAR_0->data)) {
    u8 *VAR_10 = (u8 *)VAR_6;

    VAR_1->fl_icmp_type = VAR_10[0];
    VAR_1->fl_icmp_code = VAR_10[1];
   }
   VAR_1->proto = VAR_8;
   return;
  case 141:
  case 138:
  case 140:
  default:
   VAR_1->fl_ipsec_spi = 0;
   VAR_1->proto = VAR_8;
   return;
  }
 }
}
