
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct protosw {int (* pr_ctlinput ) (int,struct sockaddr*,void*) ;} ;
struct domain {struct protosw* dom_protoswNPROTOSW; struct protosw* dom_protosw; struct domain* dom_next; } ;


 struct domain* VAR_0 ;
 int FUNC_0 (int,struct sockaddr*,void*) ;

void
FUNC_1(int VAR_1, struct sockaddr *VAR_2)
{
 struct domain *VAR_3;
 struct protosw *VAR_4;

 for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->dom_next)
  for (VAR_4 = VAR_3->dom_protosw; VAR_4 < VAR_3->dom_protoswNPROTOSW; VAR_4++)
   if (VAR_4->pr_ctlinput)
    (*VAR_4->pr_ctlinput)(VAR_1, VAR_2, (void *)0);
}
