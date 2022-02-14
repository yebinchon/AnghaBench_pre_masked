
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
struct TYPE_6__ {int edit_txn; int set_target_revision_baton; int set_target_revision_func; } ;
typedef TYPE_1__ svn_branch__compat_update_editor3_t ;
struct TYPE_7__ {int ev1_absolute_paths; int baton; int target_revision_func; } ;
typedef TYPE_2__ svn_branch__compat_shim_connector_t ;
typedef int svn_branch__compat_fetch_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int const**,void**,int ,char const*,char const*,int ,void*,TYPE_2__*,int *,int *) ;

svn_error_t *
FUNC_3(
                        const svn_delta_editor_t **VAR_1,
                        void **VAR_2,
                        svn_branch__compat_update_editor3_t *VAR_3,
                        const char *VAR_4,
                        const char *VAR_5,
                        svn_branch__compat_fetch_func_t VAR_6,
                        void *VAR_7,
                        apr_pool_t *VAR_8,
                        apr_pool_t *VAR_9)
{
  svn_branch__compat_shim_connector_t *VAR_10
    = FUNC_1(VAR_8, sizeof(*VAR_10));

  VAR_10->target_revision_func = VAR_3->set_target_revision_func;
  VAR_10->baton = VAR_3->set_target_revision_baton;




  FUNC_0(FUNC_2(
                        VAR_1, VAR_2,
                        VAR_3->edit_txn,
                        VAR_4, VAR_5,
                        VAR_6, VAR_7,
                        VAR_10,
                        VAR_8, VAR_9));




  return VAR_0;
}
