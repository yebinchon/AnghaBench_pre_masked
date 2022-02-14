
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_iter_apr_hash_cb_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct cache_iter_baton {void* user_baton; int user_cb; } ;
struct TYPE_2__ {int hash; int mutex; } ;
typedef TYPE_1__ inprocess_cache_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,struct cache_iter_baton*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_boolean_t *VAR_2,
                     void *VAR_3,
                     svn_iter_apr_hash_cb_t VAR_4,
                     void *VAR_5,
                     apr_pool_t *VAR_6)
{
  inprocess_cache_t *VAR_7 = VAR_3;
  struct cache_iter_baton VAR_8;
  VAR_8.user_cb = VAR_4;
  VAR_8.user_baton = VAR_5;

  FUNC_0(VAR_7->mutex,
                       FUNC_1(VAR_2, VAR_7->hash,
                                         VAR_1, &VAR_8, VAR_6));

  return VAR_0;
}
