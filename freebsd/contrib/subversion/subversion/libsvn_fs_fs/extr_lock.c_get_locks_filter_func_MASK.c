
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int path; } ;
typedef TYPE_1__ svn_lock_t ;
typedef int svn_error_t ;
struct TYPE_7__ {scalar_t__ requested_depth; int get_locks_baton; int (* get_locks_func ) (int ,TYPE_1__*,int *) ;int path; } ;
typedef TYPE_2__ get_locks_filter_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_4,
                      svn_lock_t *VAR_5,
                      apr_pool_t *VAR_6)
{
  get_locks_filter_baton_t *VAR_7 = VAR_4;
  if ((FUNC_1(VAR_7->path, VAR_5->path) == 0)
      || (VAR_7->requested_depth == VAR_3))
    {
      FUNC_0(VAR_7->get_locks_func(VAR_7->get_locks_baton, VAR_5, VAR_6));
    }
  else if ((VAR_7->requested_depth == VAR_1) ||
           (VAR_7->requested_depth == VAR_2))
    {
      const char *VAR_8 = FUNC_4(VAR_7->path, VAR_5->path);
      if (VAR_8 && (FUNC_5(VAR_8) == 1))
        FUNC_0(VAR_7->get_locks_func(VAR_7->get_locks_baton, VAR_5, VAR_6));
    }

  return VAR_0;
}
