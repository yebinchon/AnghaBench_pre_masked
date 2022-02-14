
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct icmp6hdr {int icmp6_type; } ;






 int VAR_0 ;
 struct icmp6hdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int) ;

int FUNC_2(struct sk_buff *VAR_1, int VAR_2)
{
 struct icmp6hdr *VAR_3;

 if (VAR_2 != VAR_0)
  return 0;

 if (!FUNC_1(VAR_1, sizeof(struct icmp6hdr)))
  return 0;

 VAR_3 = FUNC_0(VAR_1);

 switch (VAR_3->icmp6_type) {
 case 131:
 case 129:
 case 130:
 case 128:
  return 1;
 default:
  break;
 }
 return 0;
}
