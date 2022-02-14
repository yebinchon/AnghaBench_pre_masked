
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* svn_revnum_t ;
struct TYPE_4__ {void* end_revision; void* start_revision; } ;
typedef TYPE_1__ svn_repos_notify_t ;
struct fs_hotcopy_notify_baton_t {int notify_baton; int (* notify_func ) (int ,TYPE_1__*,int *) ;} ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1,
                  svn_revnum_t VAR_2,
                  svn_revnum_t VAR_3,
                  apr_pool_t *VAR_4)
{
  struct fs_hotcopy_notify_baton_t *VAR_5 = VAR_1;
  svn_repos_notify_t *VAR_6;

  VAR_6 = FUNC_1(VAR_0, VAR_4);
  VAR_6->start_revision = VAR_2;
  VAR_6->end_revision = VAR_3;

  VAR_5->notify_func(VAR_5->notify_baton, VAR_6, VAR_4);
}
