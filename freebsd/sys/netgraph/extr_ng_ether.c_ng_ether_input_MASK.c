
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_3__ {int * lower; } ;


 int FUNC_0 (struct ifnet*) ;
 TYPE_1__* FUNC_1 (int const) ;
 int FUNC_2 (int,int *,struct mbuf*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_0, struct mbuf **VAR_1)
{
 const node_p VAR_2 = FUNC_0(VAR_0);
 const priv_p VAR_3 = FUNC_1(VAR_2);
 int VAR_4;


 if (VAR_3->lower == ((void*)0))
  return;
 FUNC_2(VAR_4, VAR_3->lower, *VAR_1);
}
