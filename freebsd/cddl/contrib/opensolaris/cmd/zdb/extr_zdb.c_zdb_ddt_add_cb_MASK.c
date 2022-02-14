
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zilog_t ;
struct TYPE_8__ {int zdde_ref_blocks; int zdde_ref_dsize; int zdde_ref_psize; int zdde_ref_lsize; int zdde_key; } ;
typedef TYPE_1__ zdb_ddt_entry_t ;
struct TYPE_9__ {scalar_t__ zb_level; scalar_t__ zb_objset; } ;
typedef TYPE_2__ zbookmark_phys_t ;
typedef int u_longlong_t ;
typedef int spa_t ;
typedef int dnode_phys_t ;
typedef int blkptr_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_9 (int *,TYPE_1__*,int *) ;
 int FUNC_10 (int *,TYPE_1__*,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int const*) ;
 int FUNC_13 (int *,int const*) ;
 int* VAR_3 ;
 int FUNC_14 (char*,int ,int ,int ) ;
 TYPE_1__* FUNC_15 (int,int ) ;

__attribute__((used)) static int
FUNC_16(spa_t *VAR_4, zilog_t *VAR_5, const blkptr_t *VAR_6,
    const zbookmark_phys_t *VAR_7, const dnode_phys_t *VAR_8, void *VAR_9)
{
 avl_tree_t *VAR_10 = VAR_9;
 avl_index_t VAR_11;
 zdb_ddt_entry_t *VAR_12, VAR_13;

 if (VAR_6 == ((void*)0) || FUNC_7(VAR_6) || FUNC_6(VAR_6))
  return (0);

 if (VAR_3['S'] > 1 && VAR_7->zb_level == VAR_1) {
  (void) FUNC_14("traversing objset %llu, %llu objects, "
      "%lu blocks so far\n",
      (u_longlong_t)VAR_7->zb_objset,
      (u_longlong_t)FUNC_1(VAR_6),
      FUNC_11(VAR_10));
 }

 if (FUNC_7(VAR_6) || FUNC_0(VAR_6) == VAR_2 ||
     FUNC_2(VAR_6) > 0 || FUNC_8(FUNC_5(VAR_6)))
  return (0);

 FUNC_13(&VAR_13.zdde_key, VAR_6);

 VAR_12 = FUNC_9(VAR_10, &VAR_13, &VAR_11);

 if (VAR_12 == ((void*)0)) {
  VAR_12 = FUNC_15(sizeof (*VAR_12), VAR_0);
  VAR_12->zdde_key = VAR_13.zdde_key;
  FUNC_10(VAR_10, VAR_12, VAR_11);
 }

 VAR_12->zdde_ref_blocks += 1;
 VAR_12->zdde_ref_lsize += FUNC_3(VAR_6);
 VAR_12->zdde_ref_psize += FUNC_4(VAR_6);
 VAR_12->zdde_ref_dsize += FUNC_12(VAR_4, VAR_6);

 return (0);
}
