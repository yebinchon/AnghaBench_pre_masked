
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protosw {int pr_protocol; int pr_type; } ;
struct domain {struct protosw* dom_protoswNPROTOSW; struct protosw* dom_protosw; } ;


 int VAR_0 ;
 struct domain* FUNC_0 (int) ;

struct protosw *
FUNC_1(int VAR_1, int VAR_2, int VAR_3)
{
 struct domain *VAR_4;
 struct protosw *VAR_5;
 struct protosw *VAR_6;

 VAR_6 = ((void*)0);
 if (VAR_1 == 0)
  return (((void*)0));

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 for (VAR_5 = VAR_4->dom_protosw; VAR_5 < VAR_4->dom_protoswNPROTOSW; VAR_5++) {
  if ((VAR_5->pr_protocol == VAR_2) && (VAR_5->pr_type == VAR_3))
   return (VAR_5);

  if (VAR_3 == VAR_0 && VAR_5->pr_type == VAR_0 &&
      VAR_5->pr_protocol == 0 && VAR_6 == ((void*)0))
   VAR_6 = VAR_5;
 }
 return (VAR_6);
}
