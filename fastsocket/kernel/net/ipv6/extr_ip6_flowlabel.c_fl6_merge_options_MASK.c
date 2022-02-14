
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6_txoptions {scalar_t__ opt_flen; scalar_t__ opt_nflen; int dst1opt; int * srcrt; int * dst0opt; int * hopopt; } ;
struct ip6_flowlabel {struct ipv6_txoptions* opt; } ;



struct ipv6_txoptions *FUNC_0(struct ipv6_txoptions * VAR_0,
      struct ip6_flowlabel * VAR_1,
      struct ipv6_txoptions * VAR_2)
{
 struct ipv6_txoptions * VAR_3 = VAR_1->opt;

 if (VAR_2 == ((void*)0) || VAR_2->opt_flen == 0)
  return VAR_3;

 if (VAR_3 != ((void*)0)) {
  VAR_0->hopopt = VAR_3->hopopt;
  VAR_0->dst0opt = VAR_3->dst0opt;
  VAR_0->srcrt = VAR_3->srcrt;
  VAR_0->opt_nflen = VAR_3->opt_nflen;
 } else {
  if (VAR_2->opt_nflen == 0)
   return VAR_2;
  VAR_0->hopopt = ((void*)0);
  VAR_0->dst0opt = ((void*)0);
  VAR_0->srcrt = ((void*)0);
  VAR_0->opt_nflen = 0;
 }
 VAR_0->dst1opt = VAR_2->dst1opt;
 VAR_0->opt_flen = VAR_2->opt_flen;
 return VAR_0;
}
