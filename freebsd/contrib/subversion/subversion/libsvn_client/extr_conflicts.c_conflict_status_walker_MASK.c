
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int conflicted; } ;
typedef TYPE_1__ svn_wc_status3_t ;
typedef int svn_error_t ;
typedef int svn_client_conflict_t ;
typedef scalar_t__ svn_client_conflict_option_id_t ;
typedef scalar_t__ svn_boolean_t ;
struct conflict_status_walker_baton {int resolved_a_tree_conflict; int unresolved_tree_conflicts; int conflict_walk_func_baton; int * (* conflict_walk_func ) (int ,int *,int *) ;int ctx; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,int *,int ) ;
 int * FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int **,char const*,int ,int *,int *) ;
 int FUNC_4 (int *,int *,scalar_t__*,int *,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_4,
                       const char *VAR_5,
                       const svn_wc_status3_t *VAR_6,
                       apr_pool_t *VAR_7)
{
  struct conflict_status_walker_baton *VAR_8 = VAR_4;
  svn_client_conflict_t *VAR_9;
  svn_error_t *VAR_10;
  svn_boolean_t VAR_11;

  if (!VAR_6->conflicted)
    return VAR_0;

  FUNC_0(FUNC_3(&VAR_9, VAR_5, VAR_8->ctx,
                                  VAR_7, VAR_7));
  FUNC_0(FUNC_4(((void*)0), ((void*)0), &VAR_11,
                                             VAR_9, VAR_7,
                                             VAR_7));
  VAR_10 = VAR_8->conflict_walk_func(VAR_8->conflict_walk_func_baton,
                                 VAR_9, VAR_7);
  if (VAR_10)
    {
      if (VAR_11)
        FUNC_0(FUNC_1(
                  VAR_5, VAR_10, VAR_8->unresolved_tree_conflicts));

      else
        return FUNC_6(VAR_10);
    }

  if (VAR_11)
    {
      svn_client_conflict_option_id_t VAR_12;

      VAR_12 = FUNC_5(VAR_9);
      if (VAR_12 != VAR_3 &&
          VAR_12 != VAR_2)
        VAR_8->resolved_a_tree_conflict = VAR_1;
    }

  return VAR_0;
}
