
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6_txoptions {scalar_t__ opt_nflen; scalar_t__ srcrt; struct ipv6_opt_hdr* dst0opt; struct ipv6_opt_hdr* hopopt; } ;
struct ipv6_opt_hdr {int dummy; } ;


 scalar_t__ FUNC_0 (struct ipv6_opt_hdr*,struct ipv6_opt_hdr*) ;

__attribute__((used)) static int FUNC_1(struct ipv6_txoptions *VAR_0, struct ipv6_txoptions *VAR_1)
{
 if (VAR_0 == VAR_1)
  return 0;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return 1;
 if (VAR_0->opt_nflen != VAR_1->opt_nflen)
  return 1;
 if (FUNC_0(VAR_0->hopopt, VAR_1->hopopt))
  return 1;
 if (FUNC_0(VAR_0->dst0opt, VAR_1->dst0opt))
  return 1;
 if (FUNC_0((struct ipv6_opt_hdr *)VAR_0->srcrt, (struct ipv6_opt_hdr *)VAR_1->srcrt))
  return 1;
 return 0;
}
