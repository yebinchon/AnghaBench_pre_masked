
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int iteration_count; scalar_t__ last_notified_revision; int notify_baton; int (* notify_func ) (scalar_t__,int ,int *) ;} ;
typedef TYPE_2__ verify_walker_baton_t ;
typedef scalar_t__ svn_revnum_t ;
struct TYPE_6__ {int change_set; } ;
struct TYPE_8__ {TYPE_1__ id; } ;
typedef TYPE_3__ svn_fs_x__representation_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_x__representation_t *VAR_1,
              void *VAR_2,
              svn_fs_t *VAR_3,
              apr_pool_t *VAR_4)
{
  verify_walker_baton_t *VAR_5 = VAR_2;


  if (VAR_5->iteration_count > 1000)
    {
      svn_revnum_t VAR_6 = FUNC_3(VAR_1->id.change_set);
      if ( VAR_5->notify_func
          && VAR_6 != VAR_5->last_notified_revision)
        {
          VAR_5->notify_func(VAR_6,
                                    VAR_5->notify_baton,
                                    VAR_4);
          VAR_5->last_notified_revision = VAR_6;
        }

      VAR_5->iteration_count = 0;
    }


  FUNC_0(FUNC_2(VAR_1, VAR_3, VAR_4));


  VAR_5->iteration_count++;

  return VAR_0;
}
