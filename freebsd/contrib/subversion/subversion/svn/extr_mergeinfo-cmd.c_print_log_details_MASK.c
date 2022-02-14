
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * changed_paths2; int * changed_paths; } ;
typedef TYPE_1__ svn_log_entry_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (void*,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0,
                  svn_log_entry_t *VAR_1,
                  apr_pool_t *VAR_2)
{
  VAR_1->changed_paths = ((void*)0);
  VAR_1->changed_paths2 = ((void*)0);

  return FUNC_0(VAR_0, VAR_1, VAR_2);
}
