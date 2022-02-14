
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int node_p ;
typedef int item_p ;
typedef TYPE_3__* hook_p ;
struct TYPE_10__ {int hk_flags; TYPE_2__* hk_node; } ;
struct TYPE_9__ {TYPE_1__* nd_type; } ;
struct TYPE_8__ {int (* connect ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_6(node_p VAR_3, item_p VAR_4, hook_p VAR_5)
{
 int VAR_6 = 0;
 if (FUNC_2(VAR_5) == &VAR_2) {
  FUNC_0(VAR_0);
 }
 if (VAR_5->hk_node->nd_type->connect) {
  if ((VAR_6 = (*VAR_5->hk_node->nd_type->connect) (VAR_5))) {
   FUNC_3(VAR_5);
   FUNC_4("failed in ng_con_part3()\n");
   FUNC_0(VAR_6);
  }
 }





 VAR_5->hk_flags &= ~VAR_1;
done:
 FUNC_1(VAR_4);
 return (VAR_6);
}
