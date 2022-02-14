
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_8__ {int if_vnet; } ;
struct TYPE_7__ {int lock; int unit; TYPE_2__* ifp; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__* const,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(node_p VAR_2)
{
 const priv_p VAR_3 = FUNC_2(VAR_2);





 FUNC_1(VAR_3->ifp->if_vnet);
 FUNC_5(VAR_3->ifp);
 FUNC_8(VAR_3->ifp);
 FUNC_9(VAR_3->ifp);
 FUNC_0();
 VAR_3->ifp = ((void*)0);
 FUNC_7(VAR_1, VAR_3->unit);
 FUNC_10(&VAR_3->lock);
 FUNC_6(VAR_3, VAR_0);
 FUNC_3(VAR_2, ((void*)0));
 FUNC_4(VAR_2);
 return (0);
}
