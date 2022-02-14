
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc__db_t ;
struct TYPE_5__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ tree_conflict_data; int prop_reject; int conflict_new; int conflict_working; int conflict_old; int local_relpath; int changelist; int properties; int parent_relpath; int wc_id; } ;
typedef TYPE_2__ db_actual_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int,int ,int ) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int ,int *) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int **,int *,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int **,int *,char const*,int ,int ,int ,int ,int ,scalar_t__,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_sqlite__db_t *VAR_1,
                   svn_wc__db_t *VAR_2,
                   const char *VAR_3,
                   const db_actual_node_t *VAR_4,
                   apr_pool_t *VAR_5)
{
  svn_sqlite__stmt_t *VAR_6;
  svn_skel_t *VAR_7 = ((void*)0);

  FUNC_0(FUNC_8(&VAR_6, VAR_1, VAR_0));

  FUNC_0(FUNC_5(VAR_6, 1, VAR_4->wc_id));
  FUNC_0(FUNC_7(VAR_6, 2, VAR_4->local_relpath));
  FUNC_0(FUNC_7(VAR_6, 3, VAR_4->parent_relpath));

  if (VAR_4->properties)
    FUNC_0(FUNC_6(VAR_6, 4, VAR_4->properties,
                                        VAR_5));

  if (VAR_4->changelist)
    FUNC_0(FUNC_7(VAR_6, 5, VAR_4->changelist));

  FUNC_0(FUNC_10(
                                &VAR_7,
                                VAR_2, VAR_3,
                                VAR_4->local_relpath,
                                VAR_4->conflict_old,
                                VAR_4->conflict_working,
                                VAR_4->conflict_new,
                                VAR_4->prop_reject,
                                VAR_4->tree_conflict_data,
                                VAR_4->tree_conflict_data
                                    ? FUNC_1(VAR_4->tree_conflict_data)
                                    : 0,
                                VAR_5, VAR_5));

  if (VAR_7)
    {
      svn_stringbuf_t *VAR_8 = FUNC_3(VAR_7, VAR_5);

      FUNC_0(FUNC_4(VAR_6, 6, VAR_8->data, VAR_8->len));
    }


  return FUNC_2(FUNC_9(((void*)0), VAR_6));
}
