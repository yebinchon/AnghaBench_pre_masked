
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_2__* node_p ;
typedef int item_p ;
typedef TYPE_3__* hook_p ;
struct TYPE_20__ {int hk_flags; TYPE_2__* hk_node; struct TYPE_20__* hk_peer; int hk_name; } ;
struct TYPE_19__ {TYPE_1__* nd_type; int nd_numhooks; int nd_hooks; } ;
struct TYPE_18__ {int (* newhook ) (TYPE_2__*,TYPE_3__*,int ) ;int (* connect ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_9 (TYPE_3__*) ;
 int * FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,TYPE_3__*,int ,int *,int *,int ,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_14 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_15(node_p VAR_7, item_p VAR_8, hook_p VAR_9)
{
 hook_p VAR_10;
 int VAR_11 = 0;
 if (FUNC_10(VAR_7, FUNC_3(VAR_9)) != ((void*)0)) {
  FUNC_8();
  FUNC_9(VAR_9);
  FUNC_12("failed in ng_con_part2()\n");
  FUNC_0(VAR_0);
 }






 if (VAR_7->nd_type->newhook != ((void*)0)) {
  if ((VAR_11 = (*VAR_7->nd_type->newhook)(VAR_7, VAR_9,
      VAR_9->hk_name))) {
   FUNC_9(VAR_9);
   FUNC_12("failed in ng_con_part2()\n");
   FUNC_0(VAR_11);
  }
 }





 VAR_9->hk_node = VAR_7;
 FUNC_5(VAR_7);
 FUNC_1(&VAR_7->nd_hooks, VAR_9, VAR_4);
 VAR_7->nd_numhooks++;
 FUNC_4(VAR_9);
 if (VAR_9->hk_node->nd_type->connect) {
  if ((VAR_11 = (*VAR_9->hk_node->nd_type->connect) (VAR_9))) {
   FUNC_9(VAR_9);
   FUNC_12("failed in ng_con_part2(A)\n");
   FUNC_0(VAR_11);
  }
 }




 FUNC_6();
 VAR_10 = VAR_9->hk_peer;
 if (VAR_10 == &VAR_6) {
  FUNC_7();
  FUNC_12("failed in ng_con_part2(B)\n");
  FUNC_9(VAR_9);
  FUNC_0(VAR_1);
 }
 FUNC_7();

 if ((VAR_11 = FUNC_11(VAR_10->hk_node, VAR_10, VAR_8, &VAR_5,
     ((void*)0), 0, VAR_3))) {
  FUNC_12("failed in ng_con_part2(C)\n");
  FUNC_9(VAR_9);
  return (VAR_11);
 }
 VAR_9->hk_flags &= ~VAR_2;
 return (0);
done:
 FUNC_2(VAR_8);
 return (VAR_11);
}
