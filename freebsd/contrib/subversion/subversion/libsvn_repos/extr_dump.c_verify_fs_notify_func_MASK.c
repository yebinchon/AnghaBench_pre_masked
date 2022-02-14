
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct verify_fs_notify_func_baton_t {TYPE_1__* notify; int notify_baton; int (* notify_func ) (int ,TYPE_1__*,int *) ;} ;
typedef int apr_pool_t ;
struct TYPE_2__ {int revision; } ;


 int FUNC_0 (int ,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_1(svn_revnum_t VAR_0,
                       void *VAR_1,
                       apr_pool_t *VAR_2)
{
  struct verify_fs_notify_func_baton_t *VAR_3 = VAR_1;

  VAR_3->notify->revision = VAR_0;
  VAR_3->notify_func(VAR_3->notify_baton,
                            VAR_3->notify, VAR_2);
}
