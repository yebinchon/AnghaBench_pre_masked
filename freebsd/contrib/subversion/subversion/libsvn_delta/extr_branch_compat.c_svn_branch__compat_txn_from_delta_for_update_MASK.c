
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_branch__txn_t ;
struct TYPE_6__ {int unlock_func; int ev1_absolute_paths; int set_target_revision_baton; int set_target_revision_func; int edit_txn; } ;
typedef TYPE_1__ svn_branch__compat_update_editor3_t ;
struct TYPE_7__ {int baton; int target_revision_func; } ;
typedef TYPE_2__ svn_branch__compat_shim_connector_t ;
typedef int svn_branch__compat_fetch_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,TYPE_2__**,int const*,void*,int *,char const*,int ,void*,int ,void*,int *,int *) ;

svn_error_t *
FUNC_3(
                        svn_branch__compat_update_editor3_t **VAR_2,
                        const svn_delta_editor_t *VAR_3,
                        void *VAR_4,
                        svn_branch__txn_t *VAR_5,
                        const char *VAR_6,
                        const char *VAR_7,
                        svn_branch__compat_fetch_func_t VAR_8,
                        void *VAR_9,
                        svn_cancel_func_t VAR_10,
                        void *VAR_11,
                        apr_pool_t *VAR_12,
                        apr_pool_t *VAR_13)
{
  svn_branch__compat_update_editor3_t *VAR_14
    = FUNC_1(VAR_12, sizeof(*VAR_14));
  svn_branch__compat_shim_connector_t *VAR_15;







  FUNC_0(FUNC_2(
                        &VAR_14->edit_txn,
                        &VAR_15,
                        VAR_3, VAR_4,
                        VAR_5, VAR_6,
                        VAR_8, VAR_9,
                        VAR_10, VAR_11,
                        VAR_12, VAR_13));

  VAR_14->set_target_revision_func = VAR_15->target_revision_func;
  VAR_14->set_target_revision_baton = VAR_15->baton;
  *VAR_2 = VAR_14;
  return VAR_0;
}
