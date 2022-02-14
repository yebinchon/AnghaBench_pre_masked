
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int action; void* revision; void* shard; } ;
typedef TYPE_1__ svn_repos_notify_t ;
typedef int svn_fs_upgrade_notify_action_t ;
typedef int svn_error_t ;
struct fs_upgrade_notify_baton_t {int notify_baton; int (* notify_func ) (int ,TYPE_1__*,int *) ;} ;
typedef void* apr_uint64_t ;
typedef int apr_pool_t ;


 int FUNC_0 () ;
 int * VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;



 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_5,
                  apr_uint64_t VAR_6,
                  svn_fs_upgrade_notify_action_t VAR_7,
                  apr_pool_t *VAR_8)
{
  struct fs_upgrade_notify_baton_t *VAR_9 = VAR_5;

  svn_repos_notify_t *VAR_10 = FUNC_2(
                                VAR_3, VAR_8);
  switch(VAR_7)
    {
      case 128:
        VAR_10->shard = VAR_6;
        VAR_10->action = VAR_4;
        break;

      case 130:
        VAR_10->shard = VAR_6;
        VAR_10->action = VAR_1;
        break;

      case 129:
        VAR_10->revision = VAR_6;
        VAR_10->action = VAR_2;
        break;

      default:

        FUNC_0();
    }

  VAR_9->notify_func(VAR_9->notify_baton, VAR_10, VAR_8);

  return VAR_0;
}
