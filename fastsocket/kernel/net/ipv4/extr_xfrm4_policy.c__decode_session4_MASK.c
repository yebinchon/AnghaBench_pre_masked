
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct sk_buff {void** data; } ;
struct iphdr {int ihl; int frag_off; int protocol; int tos; int saddr; int daddr; } ;
struct flowi {int proto; int fl4_tos; int fl4_src; int fl4_dst; void* fl_ipsec_spi; void* fl_icmp_code; void* fl_icmp_type; void* fl_ip_dport; void* fl_ip_sport; } ;
typedef void* __be32 ;
typedef void* __be16 ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct flowi*,int ,int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct sk_buff*,void**) ;
 void** FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_7(struct sk_buff *VAR_2, struct flowi *VAR_3, int VAR_4)
{
 struct iphdr *VAR_5 = FUNC_2(VAR_2);
 u8 *VAR_6 = FUNC_6(VAR_2) + VAR_5->ihl * 4;

 FUNC_3(VAR_3, 0, sizeof(struct flowi));
 if (!(VAR_5->frag_off & FUNC_1(VAR_0 | VAR_1))) {
  switch (VAR_5->protocol) {
  case 129:
  case 128:
  case 130:
  case 131:
  case 134:
   if (VAR_6 + 4 < VAR_2->data ||
       FUNC_5(VAR_2, VAR_6 + 4 - VAR_2->data)) {
    __be16 *VAR_7 = (__be16 *)VAR_6;

    VAR_3->fl_ip_sport = VAR_7[!!VAR_4];
    VAR_3->fl_ip_dport = VAR_7[!VAR_4];
   }
   break;

  case 132:
   if (FUNC_5(VAR_2, VAR_6 + 2 - VAR_2->data)) {
    u8 *VAR_8 = VAR_6;

    VAR_3->fl_icmp_type = VAR_8[0];
    VAR_3->fl_icmp_code = VAR_8[1];
   }
   break;

  case 133:
   if (FUNC_5(VAR_2, VAR_6 + 4 - VAR_2->data)) {
    __be32 *VAR_9 = (__be32 *)VAR_6;

    VAR_3->fl_ipsec_spi = VAR_9[0];
   }
   break;

  case 136:
   if (FUNC_5(VAR_2, VAR_6 + 8 - VAR_2->data)) {
    __be32 *VAR_10 = (__be32*)VAR_6;

    VAR_3->fl_ipsec_spi = VAR_10[1];
   }
   break;

  case 135:
   if (FUNC_5(VAR_2, VAR_6 + 4 - VAR_2->data)) {
    __be16 *VAR_11 = (__be16 *)VAR_6;

    VAR_3->fl_ipsec_spi = FUNC_0(FUNC_4(VAR_11[1]));
   }
   break;
  default:
   VAR_3->fl_ipsec_spi = 0;
   break;
  }
 }
 VAR_3->proto = VAR_5->protocol;
 VAR_3->fl4_dst = VAR_4 ? VAR_5->saddr : VAR_5->daddr;
 VAR_3->fl4_src = VAR_4 ? VAR_5->daddr : VAR_5->saddr;
 VAR_3->fl4_tos = VAR_5->tos;
}
