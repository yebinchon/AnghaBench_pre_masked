
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_fs_progress_notify_func_t ;
typedef int svn_fs_fs__stats_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
struct TYPE_4__ {int revisions; } ;
typedef TYPE_1__ query_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__**,int *,int *,int ,void*,int ,void*,int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;

svn_error_t *
FUNC_5(svn_fs_fs__stats_t **VAR_1,
                     svn_fs_t *VAR_2,
                     svn_fs_progress_notify_func_t VAR_3,
                     void *VAR_4,
                     svn_cancel_func_t VAR_5,
                     void *VAR_6,
                     apr_pool_t *VAR_7,
                     apr_pool_t *VAR_8)
{
  query_t *VAR_9;

  *VAR_1 = FUNC_3(VAR_7);
  FUNC_0(FUNC_2(&VAR_9, VAR_2, *VAR_1, VAR_3, VAR_4,
                       VAR_5, VAR_6, VAR_8,
                       VAR_8));
  FUNC_0(FUNC_4(VAR_9, VAR_8, VAR_8));
  FUNC_1(VAR_9->revisions, *VAR_1);

  return VAR_0;
}
