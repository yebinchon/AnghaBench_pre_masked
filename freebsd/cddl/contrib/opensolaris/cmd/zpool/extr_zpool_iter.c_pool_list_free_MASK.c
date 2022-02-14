
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zl_pool; int zl_avl; int zn_handle; } ;
typedef TYPE_1__ zpool_node_t ;
typedef TYPE_1__ zpool_list_t ;
typedef int uu_avl_walk_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11(zpool_list_t *VAR_2)
{
 uu_avl_walk_t *VAR_3;
 zpool_node_t *VAR_4;

 if ((VAR_3 = FUNC_9(VAR_2->zl_avl, VAR_0)) == ((void*)0)) {
  (void) FUNC_1(VAR_1,
      "%s", FUNC_3("internal error: out of memory"));
  FUNC_0(1);
 }

 while ((VAR_4 = FUNC_8(VAR_3)) != ((void*)0)) {
  FUNC_6(VAR_2->zl_avl, VAR_4);
  FUNC_10(VAR_4->zn_handle);
  FUNC_2(VAR_4);
 }

 FUNC_7(VAR_3);
 FUNC_4(VAR_2->zl_avl);
 FUNC_5(VAR_2->zl_pool);

 FUNC_2(VAR_2);
}
