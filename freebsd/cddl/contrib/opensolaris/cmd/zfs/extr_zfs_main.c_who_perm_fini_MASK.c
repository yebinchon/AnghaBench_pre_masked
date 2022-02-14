
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int who_deleg_perm_avl; } ;
typedef TYPE_1__ who_perm_t ;
typedef int deleg_perm_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_5(who_perm_t *VAR_0)
{
 deleg_perm_node_t *VAR_1 = FUNC_2(VAR_0->who_deleg_perm_avl);

 while (VAR_1 != ((void*)0)) {
  deleg_perm_node_t *VAR_2 =
      FUNC_3(VAR_0->who_deleg_perm_avl, VAR_1);

  FUNC_4(VAR_0->who_deleg_perm_avl, VAR_1);
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }

 FUNC_1(VAR_0->who_deleg_perm_avl);
}
