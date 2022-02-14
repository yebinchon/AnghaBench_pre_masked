
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int wc_ctx; int cancel_baton; int cancel_func; int config; int notify_baton2; int notify_func2; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef void* svn_boolean_t ;
struct cleanup_status_walk_baton {TYPE_1__* ctx; void* include_externals; void* remove_ignored_items; void* remove_unversioned_items; void* vacuum_pristines; void* clear_dav_cache; void* fix_timestamps; void* break_locks; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,char const*,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int ,char const*,void*,void*,void*,void*,int ,int ,int ,int ,int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int ,char const*,int ,int ,void*,int ,int *,int ,struct cleanup_status_walk_baton*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char *VAR_5,
           svn_boolean_t VAR_6,
           svn_boolean_t VAR_7,
           svn_boolean_t VAR_8,
           svn_boolean_t VAR_9,
           svn_boolean_t VAR_10,
           svn_boolean_t VAR_11,
           svn_boolean_t VAR_12,
           svn_client_ctx_t *VAR_13,
           apr_pool_t *VAR_14)
{
  FUNC_0(FUNC_3(VAR_13->wc_ctx,
                          VAR_5,
                          VAR_6,
                          VAR_7,
                          VAR_8,
                          VAR_9,
                          VAR_13->cancel_func, VAR_13->cancel_baton,
                          VAR_13->notify_func2, VAR_13->notify_baton2,
                          VAR_14));

  if (VAR_7)
    FUNC_2(VAR_5, VAR_14);

  if (VAR_10 || VAR_11 || VAR_12)
    {
      struct cleanup_status_walk_baton VAR_15;
      apr_array_header_t *VAR_16;

      VAR_15.break_locks = VAR_6;
      VAR_15.fix_timestamps = VAR_7;
      VAR_15.clear_dav_cache = VAR_8;
      VAR_15.vacuum_pristines = VAR_9;
      VAR_15.remove_unversioned_items = VAR_10;
      VAR_15.remove_ignored_items = VAR_11;
      VAR_15.include_externals = VAR_12;
      VAR_15.ctx = VAR_13;

      FUNC_0(FUNC_4(&VAR_16, VAR_13->config, VAR_14));

      FUNC_1(
              FUNC_5(VAR_13->wc_ctx, VAR_5,
                                 VAR_4,
                                 VAR_2,
                                 VAR_11,
                                 VAR_2,
                                 VAR_16,
                                 VAR_3, &VAR_15,
                                 VAR_13->cancel_func,
                                 VAR_13->cancel_baton,
                                 VAR_14),
              VAR_13->wc_ctx,
              VAR_5,
              VAR_0 ,
              VAR_14);
    }

  return VAR_1;
}
