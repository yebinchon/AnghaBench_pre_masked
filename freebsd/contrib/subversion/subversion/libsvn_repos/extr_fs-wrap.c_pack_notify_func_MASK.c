
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int shard; } ;
typedef TYPE_1__ svn_repos_notify_t ;
typedef scalar_t__ svn_repos_notify_action_t ;
typedef scalar_t__ svn_fs_pack_notify_action_t ;
typedef int svn_error_t ;
struct pack_notify_baton {int notify_baton; int (* notify_func ) (int ,TYPE_1__*,int *) ;} ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_2 (scalar_t__,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_5,
                 apr_int64_t VAR_6,
                 svn_fs_pack_notify_action_t VAR_7,
                 apr_pool_t *VAR_8)
{
  struct pack_notify_baton *VAR_9 = VAR_5;
  svn_repos_notify_t *VAR_10;
  svn_repos_notify_action_t VAR_11;


  FUNC_0(VAR_7 >= VAR_2
                 && VAR_7 <= VAR_1);

  VAR_11 = VAR_7 == VAR_1
               ? VAR_3
               : VAR_7 + VAR_4
                             - VAR_2;

  VAR_10 = FUNC_2(VAR_11, VAR_8);
  VAR_10->shard = VAR_6;
  VAR_9->notify_func(VAR_9->notify_baton, VAR_10, VAR_8);

  return VAR_0;
}
