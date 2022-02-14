
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_target_param {struct ip6t_HL_info* targinfo; } ;
struct sk_buff {int len; } ;
struct ipv6hdr {int hop_limit; } ;
struct ip6t_HL_info {int mode; int hop_limit; } ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct ipv6hdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;

__attribute__((used)) static unsigned int
FUNC_2(struct sk_buff *VAR_2, const struct xt_target_param *VAR_3)
{
 struct ipv6hdr *VAR_4;
 const struct ip6t_HL_info *VAR_5 = VAR_3->targinfo;
 int VAR_6;

 if (!FUNC_1(VAR_2, VAR_2->len))
  return VAR_0;

 VAR_4 = FUNC_0(VAR_2);

 switch (VAR_5->mode) {
  case 128:
   VAR_6 = VAR_5->hop_limit;
   break;
  case 129:
   VAR_6 = VAR_4->hop_limit + VAR_5->hop_limit;
   if (VAR_6 > 255)
    VAR_6 = 255;
   break;
  case 130:
   VAR_6 = VAR_4->hop_limit - VAR_5->hop_limit;
   if (VAR_6 < 0)
    VAR_6 = 0;
   break;
  default:
   VAR_6 = VAR_4->hop_limit;
   break;
 }

 VAR_4->hop_limit = VAR_6;

 return VAR_1;
}
