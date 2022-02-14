
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {int dummy; } ;
typedef TYPE_1__* priv_p ;
typedef int * node_p ;
struct TYPE_3__ {int * ifp; } ;


 int * FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*,int *) ;
 TYPE_1__* FUNC_2 (int * const) ;
 int FUNC_3 (int * const) ;
 int FUNC_4 (int * const) ;

__attribute__((used)) static void
FUNC_5(struct ifnet *VAR_0)
{
 const node_p VAR_1 = FUNC_0(VAR_0);
 priv_p VAR_2;

 if (VAR_1 == ((void*)0))
  return;
 VAR_2 = FUNC_2(VAR_1);
 FUNC_3(VAR_1);





 FUNC_1(VAR_0, ((void*)0));
 VAR_2->ifp = ((void*)0);
 FUNC_4(VAR_1);
}
