
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * node_p ;
typedef TYPE_1__* bt3c_softc_p ;
struct TYPE_3__ {int * node; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int *,int **) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_7(node_p VAR_1)
{
 bt3c_softc_p VAR_2 = (bt3c_softc_p) FUNC_0(VAR_1);


 FUNC_1(VAR_1, ((void*)0));
 FUNC_2(VAR_1);


 if (VAR_2 == ((void*)0))
  goto out;


 if (FUNC_5(&VAR_0, &VAR_2->node) != 0) {
  FUNC_4(VAR_2->dev, "Could not create Netgraph node\n");
  VAR_2->node = ((void*)0);
  goto out;
 }


 if (FUNC_6(VAR_2->node, FUNC_3(VAR_2->dev)) != 0) {
  FUNC_4(VAR_2->dev, "Could not name Netgraph node\n");
  FUNC_2(VAR_2->node);
  VAR_2->node = ((void*)0);
  goto out;
 }

 FUNC_1(VAR_2->node, VAR_2);
out:
 return (0);
}
