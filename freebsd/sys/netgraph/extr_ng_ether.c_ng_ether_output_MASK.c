
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_3__ {int * upper; } ;


 int FUNC_0 (struct ifnet*) ;
 TYPE_1__* FUNC_1 (int const) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int *,struct mbuf*) ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_0, struct mbuf **VAR_1)
{
 const node_p VAR_2 = FUNC_0(VAR_0);
 const priv_p VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = 0;


 if (VAR_3->upper == ((void*)0))
  return (0);


 FUNC_2();
 FUNC_4(VAR_4, VAR_3->upper, *VAR_1);
 FUNC_3();
 return (VAR_4);
}
