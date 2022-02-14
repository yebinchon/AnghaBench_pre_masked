
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {scalar_t__ odstopts; scalar_t__ dstopts; scalar_t__ osrcrt; scalar_t__ srcrt; scalar_t__ rxflow; scalar_t__ ohopopts; scalar_t__ hopopts; } ;
struct TYPE_4__ {TYPE_1__ bits; scalar_t__ all; } ;
struct ipv6_pinfo {TYPE_2__ rxopt; } ;
struct inet6_skb_parm {scalar_t__ dst0; scalar_t__ dst1; scalar_t__ srcrt; scalar_t__ hop; } ;
typedef int __be32 ;


 struct inet6_skb_parm* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct ipv6_pinfo *VAR_3 = FUNC_1(VAR_1);
 struct inet6_skb_parm *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3->rxopt.all) {
  if ((VAR_4->hop && (VAR_3->rxopt.bits.hopopts ||
      VAR_3->rxopt.bits.ohopopts)) ||
      ((VAR_0 &
        *(__be32 *)FUNC_2(VAR_2)) &&
       VAR_3->rxopt.bits.rxflow) ||
      (VAR_4->srcrt && (VAR_3->rxopt.bits.srcrt ||
       VAR_3->rxopt.bits.osrcrt)) ||
      ((VAR_4->dst1 || VAR_4->dst0) &&
       (VAR_3->rxopt.bits.dstopts || VAR_3->rxopt.bits.odstopts)))
   return 1;
 }
 return 0;
}
