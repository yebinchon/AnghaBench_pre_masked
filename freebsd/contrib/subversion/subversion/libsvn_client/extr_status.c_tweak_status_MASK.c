
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int repos_node_status; int changelist; } ;
typedef TYPE_1__ svn_wc_status3_t ;
typedef int svn_error_t ;
typedef int svn_client_status_t ;
struct status_baton {int real_status_baton; int * (* real_status_func ) (int ,char const*,int *,int *) ;int wc_ctx; scalar_t__ deleted_in_repos; scalar_t__ changelist_hash; scalar_t__ anchor_abspath; int anchor_relpath; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int ,char const*,int *,int *) ;
 int FUNC_2 (int **,int ,char const*,TYPE_1__ const*,int *,int *) ;
 char* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (scalar_t__,char const*) ;
 int FUNC_5 (scalar_t__,int ) ;
 TYPE_1__* FUNC_6 (TYPE_1__ const*,int *) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_2,
             const char *VAR_3,
             const svn_wc_status3_t *VAR_4,
             apr_pool_t *VAR_5)
{
  struct status_baton *VAR_6 = VAR_2;
  const char *VAR_7 = VAR_3;
  svn_client_status_t *VAR_8;

  if (VAR_6->anchor_abspath)
    VAR_7 = FUNC_3(VAR_6->anchor_relpath,
                           FUNC_4(VAR_6->anchor_abspath, VAR_7),
                           VAR_5);




  if (VAR_6->changelist_hash
      && (! VAR_4->changelist
          || ! FUNC_5(VAR_6->changelist_hash, VAR_4->changelist)))
    {
      return VAR_0;
    }




  if (VAR_6->deleted_in_repos)
    {
      svn_wc_status3_t *VAR_9 = FUNC_6(VAR_4, VAR_5);
      VAR_9->repos_node_status = VAR_1;
      VAR_4 = VAR_9;
    }

  FUNC_0(FUNC_2(&VAR_8, VAR_6->wc_ctx, VAR_3, VAR_4,
                                    VAR_5, VAR_5));


  return VAR_6->real_status_func(VAR_6->real_status_baton, VAR_7, VAR_8,
                              VAR_5);
}
