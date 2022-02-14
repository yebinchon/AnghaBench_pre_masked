
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6_txoptions {int * dst0opt; int opt_nflen; int srcrt; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ipv6_txoptions*,struct ipv6_txoptions*,int) ;

struct ipv6_txoptions *FUNC_2(struct ipv6_txoptions *VAR_0,
       struct ipv6_txoptions *VAR_1)
{




 if (VAR_1 && VAR_1->dst0opt && !VAR_1->srcrt) {
  if (VAR_0 != VAR_1) {
   FUNC_1(VAR_0, VAR_1, sizeof(*VAR_0));
   VAR_1 = VAR_0;
  }
  VAR_1->opt_nflen -= FUNC_0(VAR_1->dst0opt);
  VAR_1->dst0opt = ((void*)0);
 }

 return VAR_1;
}
