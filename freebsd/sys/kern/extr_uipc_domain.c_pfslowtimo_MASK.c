
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protosw {int (* pr_slowtimo ) () ;} ;
struct epoch_tracker {int dummy; } ;
struct domain {struct protosw* dom_protoswNPROTOSW; struct protosw* dom_protosw; struct domain* dom_next; } ;


 int FUNC_0 (struct epoch_tracker) ;
 int FUNC_1 (struct epoch_tracker) ;
 int FUNC_2 (int *,int,void (*) (void*),int *) ;
 struct domain* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 struct epoch_tracker VAR_4;
 struct domain *VAR_5;
 struct protosw *VAR_6;

 FUNC_0(VAR_4);
 for (VAR_5 = VAR_0; VAR_5; VAR_5 = VAR_5->dom_next)
  for (VAR_6 = VAR_5->dom_protosw; VAR_6 < VAR_5->dom_protoswNPROTOSW; VAR_6++)
   if (VAR_6->pr_slowtimo)
    (*VAR_6->pr_slowtimo)();
 FUNC_1(VAR_4);
 FUNC_2(&VAR_2, VAR_1/2, FUNC_4, ((void*)0));
}
