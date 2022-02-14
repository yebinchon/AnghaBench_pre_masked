
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int uh_dport; int uh_sport; } ;
struct tcphdr {int th_dport; int th_sport; } ;
struct ip {int ip_p; int ip_hl; int ip_dst; int ip_src; } ;
struct icmp {int icmp_type; int icmp_code; } ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static char* FUNC_4 (struct ip* VAR_0)
{
 static char VAR_1[256];
 struct tcphdr* VAR_2;
 struct udphdr* VAR_3;
 struct icmp* VAR_4;
 char VAR_5[20];
 char VAR_6[20];

 FUNC_3 (VAR_5, FUNC_0 (VAR_0->ip_src));
 FUNC_3 (VAR_6, FUNC_0 (VAR_0->ip_dst));

 switch (VAR_0->ip_p) {
 case 129:
  VAR_2 = (struct tcphdr*) ((char*) VAR_0 + (VAR_0->ip_hl << 2));
  FUNC_2 (VAR_1, "[TCP] %s:%d -> %s:%d",
         VAR_5,
         FUNC_1 (VAR_2->th_sport),
         VAR_6,
         FUNC_1 (VAR_2->th_dport));
  break;

 case 128:
  VAR_3 = (struct udphdr*) ((char*) VAR_0 + (VAR_0->ip_hl << 2));
  FUNC_2 (VAR_1, "[UDP] %s:%d -> %s:%d",
         VAR_5,
         FUNC_1 (VAR_3->uh_sport),
         VAR_6,
         FUNC_1 (VAR_3->uh_dport));
  break;

 case 130:
  VAR_4 = (struct icmp*) ((char*) VAR_0 + (VAR_0->ip_hl << 2));
  FUNC_2 (VAR_1, "[ICMP] %s -> %s %u(%u)",
         VAR_5,
         VAR_6,
         VAR_4->icmp_type,
         VAR_4->icmp_code);
  break;

 default:
  FUNC_2 (VAR_1, "[%d] %s -> %s ", VAR_0->ip_p, VAR_5, VAR_6);
  break;
 }

 return VAR_1;
}
