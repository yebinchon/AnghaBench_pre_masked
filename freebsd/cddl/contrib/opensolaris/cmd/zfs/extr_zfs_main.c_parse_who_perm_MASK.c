
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zfs_deleg_who_type_t ;
struct TYPE_10__ {int who_type; int * who_deleg_perm_avl; TYPE_1__* who_fsperm; } ;
typedef TYPE_2__ who_perm_t ;
typedef int uu_avl_t ;
typedef int uu_avl_pool_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_11__ {int * fsps_deleg_perm_avl_pool; } ;
typedef TYPE_3__ fs_perm_set_t ;
struct TYPE_12__ {int dpn_avl_node; } ;
typedef TYPE_4__ deleg_perm_node_t ;
typedef scalar_t__ data_type_t ;
struct TYPE_9__ {TYPE_3__* fsp_set; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_4__*,int ,char const*,char) ;
 int FUNC_6 (TYPE_4__*,int *,int *) ;

__attribute__((used)) static inline int
FUNC_7(who_perm_t *VAR_1, nvlist_t *VAR_2, char VAR_3)
{
 nvpair_t *VAR_4 = ((void*)0);
 fs_perm_set_t *VAR_5 = VAR_1->who_fsperm->fsp_set;
 uu_avl_t *VAR_6 = VAR_1->who_deleg_perm_avl;
 zfs_deleg_who_type_t VAR_7 = VAR_1->who_type;

 while ((VAR_4 = FUNC_1(VAR_2, VAR_4)) != ((void*)0)) {
  const char *VAR_8 = FUNC_2(VAR_4);
  data_type_t VAR_9 = FUNC_3(VAR_4);
  uu_avl_pool_t *VAR_10 = VAR_5->fsps_deleg_perm_avl_pool;
  deleg_perm_node_t *VAR_11 =
      FUNC_4(sizeof (deleg_perm_node_t));

  FUNC_0(VAR_9 == VAR_0);

  FUNC_6(VAR_11, &VAR_11->dpn_avl_node, VAR_10);
  FUNC_5(VAR_6, VAR_11, VAR_7, VAR_8, VAR_3);
 }

 return (0);
}
