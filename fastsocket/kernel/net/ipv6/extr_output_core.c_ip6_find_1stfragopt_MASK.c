
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {unsigned int tail; unsigned int network_header; } ;
struct ipv6hdr {int dummy; } ;
struct ipv6_opt_hdr {int nexthdr; } ;
struct TYPE_2__ {int nexthdr; } ;


 int VAR_0 ;



 int FUNC_0 (struct sk_buff*,int,int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct ipv6_opt_hdr*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct sk_buff *VAR_1, u8 **VAR_2)
{
 u16 VAR_3 = sizeof(struct ipv6hdr);
 struct ipv6_opt_hdr *VAR_4 =
    (struct ipv6_opt_hdr *)(FUNC_1(VAR_1) + 1);
 unsigned int VAR_5 = VAR_1->tail - VAR_1->network_header;
 int VAR_6 = 0;
 *VAR_2 = &FUNC_1(VAR_1)->nexthdr;

 while (VAR_3 + 1 <= VAR_5) {

  switch (**VAR_2) {

  case 129:
   break;
  case 128:
   VAR_6 = 1;
   break;
  case 130:




   if (VAR_6)
    return VAR_3;
   break;
  default :
   return VAR_3;
  }

  VAR_3 += FUNC_2(VAR_4);
  *VAR_2 = &VAR_4->nexthdr;
  VAR_4 = (struct ipv6_opt_hdr *)(FUNC_3(VAR_1) +
       VAR_3);
 }

 return VAR_3;
}
