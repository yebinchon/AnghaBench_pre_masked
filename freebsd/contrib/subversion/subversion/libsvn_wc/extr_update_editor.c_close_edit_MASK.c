
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ svn_wc__db_status_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ svn_depth_t ;
struct edit_baton {char* target_basename; scalar_t__ requested_depth; int * pool; int cancel_baton; int cancel_func; int wcroot_abspath; int db; int target_abspath; scalar_t__ switch_repos_relpath; int notify_baton; int notify_func; int edited; int wcroot_iprops; int skipped_trees; int * target_revision; int repos_uuid; int repos_root; int target_deleted; int anchor_abspath; int root_opened; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct edit_baton*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,int ,int *,int *) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_7 (int ,int ,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int,int ,int ,int *) ;
 int FUNC_8 (int ,int ,scalar_t__,int ,int *,int ,struct edit_baton*,int ,int ,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ,int ,int ,int ,int *) ;
 int VAR_9 ;

__attribute__((used)) static svn_error_t *
FUNC_11(void *VAR_10,
           apr_pool_t *VAR_11)
{
  struct edit_baton *VAR_12 = VAR_10;
  apr_pool_t *VAR_13 = VAR_12->pool;



  if (! VAR_12->root_opened
      && *VAR_12->target_basename == '\0')
    {

      FUNC_0(FUNC_9(VAR_12->db,
                                                      VAR_12->anchor_abspath,
                                                      VAR_13));
    }
  if (! VAR_12->target_deleted)
    {
      FUNC_0(FUNC_7(VAR_12->db,
                                                       VAR_12->target_abspath,
                                                       VAR_12->requested_depth,
                                                       VAR_12->switch_repos_relpath,
                                                       VAR_12->repos_root,
                                                       VAR_12->repos_uuid,
                                                       *(VAR_12->target_revision),
                                                       VAR_12->skipped_trees,
                                                       VAR_12->wcroot_iprops,
                                                       ! VAR_12->edited,
                                                       VAR_12->notify_func,
                                                       VAR_12->notify_baton,
                                                       VAR_12->pool));

      if (*VAR_12->target_basename != '\0')
        {
          svn_wc__db_status_t VAR_14;
          svn_error_t *VAR_15;
          VAR_15 = FUNC_5(&VAR_14, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                         VAR_12->db, VAR_12->target_abspath,
                                         VAR_13, VAR_13);
          if (VAR_15)
            {
              if (VAR_15->apr_err != VAR_1)
                return FUNC_3(VAR_15);

              FUNC_2(VAR_15);
            }
          else if (VAR_14 == VAR_8)
            {






              FUNC_0(FUNC_6(VAR_12->db, VAR_12->target_abspath,
                                             VAR_4, VAR_0, VAR_0,
                                             VAR_2,
                                             ((void*)0), ((void*)0), VAR_13));
            }
        }
    }



  if (VAR_12->switch_repos_relpath)
    {
      svn_depth_t VAR_16;

      if (VAR_12->requested_depth > VAR_6)
        VAR_16 = VAR_12->requested_depth;
      else
        VAR_16 = VAR_7;

      FUNC_0(FUNC_8(VAR_12->db,
                                              VAR_12->target_abspath,
                                              VAR_16,
                                              VAR_0,
                                              ((void*)0),
                                              VAR_9,
                                              VAR_12,
                                              VAR_12->cancel_func,
                                              VAR_12->cancel_baton,
                                              VAR_13));
    }




  FUNC_1(VAR_12->pool, VAR_12, VAR_5);

  FUNC_0(FUNC_10(VAR_12->db, VAR_12->wcroot_abspath,
                         VAR_12->cancel_func, VAR_12->cancel_baton,
                         VAR_12->pool));
  FUNC_4(VAR_12->pool);

  return VAR_3;
}
