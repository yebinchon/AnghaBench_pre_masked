
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protosw {int pr_type; } ;
struct domain {struct protosw* dom_protoswNPROTOSW; struct protosw* dom_protosw; } ;


 struct domain* FUNC_0 (int) ;

struct protosw *
FUNC_1(int VAR_0, int VAR_1)
{
 struct domain *VAR_2;
 struct protosw *VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 for (VAR_3 = VAR_2->dom_protosw; VAR_3 < VAR_2->dom_protoswNPROTOSW; VAR_3++)
  if (VAR_3->pr_type && VAR_3->pr_type == VAR_1)
   return (VAR_3);
 return (((void*)0));
}
