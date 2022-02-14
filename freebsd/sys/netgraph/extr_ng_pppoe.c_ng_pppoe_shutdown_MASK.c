
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
struct TYPE_6__ {int node; TYPE_1__* sesshash; } ;
struct TYPE_5__ {int mtx; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__* const,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(node_p VAR_2)
{
 const priv_p VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
     FUNC_4(&VAR_3->sesshash[VAR_4].mtx);
 FUNC_1(VAR_2, ((void*)0));
 FUNC_2(VAR_3->node);
 FUNC_3(VAR_3, VAR_0);
 return (0);
}
