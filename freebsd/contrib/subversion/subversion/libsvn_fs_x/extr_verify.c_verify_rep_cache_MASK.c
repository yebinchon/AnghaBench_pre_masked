
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* notify_baton; int (* notify_func ) (int ,void*,int *) ;int last_notified_revision; } ;
typedef TYPE_1__ verify_walker_baton_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int (* svn_fs_progress_notify_func_t ) (int ,void*,int *) ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__*,int *,int *) ;
 int FUNC_3 (int *,int ,int ,int ,TYPE_1__*,int ,void*,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_t *VAR_3,
                 svn_revnum_t VAR_4,
                 svn_revnum_t VAR_5,
                 svn_fs_progress_notify_func_t VAR_6,
                 void *VAR_7,
                 svn_cancel_func_t VAR_8,
                 void *VAR_9,
                 apr_pool_t *VAR_10)
{
  svn_boolean_t VAR_11;


  FUNC_0(FUNC_2(&VAR_11, VAR_3, VAR_10));
  if (VAR_11)
    {


      verify_walker_baton_t *VAR_12
        = FUNC_1(VAR_10, sizeof(*VAR_12));

      VAR_12->last_notified_revision = VAR_0;
      VAR_12->notify_func = VAR_6;
      VAR_12->notify_baton = VAR_7;


      if (VAR_6)
        VAR_6(VAR_0, VAR_7, VAR_10);




      FUNC_0(FUNC_3(VAR_3, VAR_4, VAR_5,
                                           VAR_2, VAR_12,
                                           VAR_8, VAR_9,
                                           VAR_10));
    }

  return VAR_1;
}
