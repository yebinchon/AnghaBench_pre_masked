
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int callback_baton; TYPE_1__* callbacks; } ;
typedef TYPE_2__ svn_ra_local__session_baton_t ;
struct TYPE_8__ {int * changed_paths2; int * changed_paths; } ;
typedef TYPE_3__ svn_log_entry_t ;
typedef int svn_error_t ;
struct log_baton {int real_baton; int * (* real_cb ) (int ,TYPE_3__*,int *) ;TYPE_2__* sess; } ;
typedef int apr_pool_t ;
struct TYPE_6__ {int (* cancel_func ) (int ) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,TYPE_3__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_0,
                     svn_log_entry_t *VAR_1,
                     apr_pool_t *VAR_2)
{
  struct log_baton *VAR_3 = VAR_0;
  svn_ra_local__session_baton_t *VAR_4 = VAR_3->sess;

  if (VAR_4->callbacks->cancel_func)
    FUNC_0((VAR_4->callbacks->cancel_func)(VAR_4->callback_baton));





  if ((VAR_1->changed_paths2)
      && (FUNC_1(VAR_1->changed_paths2) == 0))
    {
      VAR_1->changed_paths = ((void*)0);
      VAR_1->changed_paths2 = ((void*)0);
    }

  return VAR_3->real_cb(VAR_3->real_baton, VAR_1, VAR_2);
}
