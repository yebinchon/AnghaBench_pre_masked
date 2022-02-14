
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int who_perm_t ;
struct TYPE_9__ {int who_perm; } ;
typedef TYPE_1__ who_perm_node_t ;
struct TYPE_10__ {int fsp_uge_avl; int fsp_sc_avl; } ;
typedef TYPE_2__ fs_perm_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void
FUNC_6(fs_perm_t *VAR_0)
{
 who_perm_node_t *VAR_1 = FUNC_2(VAR_0->fsp_sc_avl);
 while (VAR_1 != ((void*)0)) {
  who_perm_node_t *VAR_2 = FUNC_3(VAR_0->fsp_sc_avl,
      VAR_1);
  who_perm_t *VAR_3 = &VAR_1->who_perm;
  FUNC_5(VAR_3);
  FUNC_4(VAR_0->fsp_sc_avl, VAR_1);
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }

 VAR_1 = FUNC_2(VAR_0->fsp_uge_avl);
 while (VAR_1 != ((void*)0)) {
  who_perm_node_t *VAR_4 = FUNC_3(VAR_0->fsp_uge_avl,
      VAR_1);
  who_perm_t *VAR_5 = &VAR_1->who_perm;
  FUNC_5(VAR_5);
  FUNC_4(VAR_0->fsp_uge_avl, VAR_1);
  FUNC_0(VAR_1);
  VAR_1 = VAR_4;
 }

 FUNC_1(VAR_0->fsp_sc_avl);
 FUNC_1(VAR_0->fsp_uge_avl);
}
