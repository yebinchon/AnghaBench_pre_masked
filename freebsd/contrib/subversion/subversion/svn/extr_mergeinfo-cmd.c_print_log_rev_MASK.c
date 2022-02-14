
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int revision; scalar_t__ non_inheritable; } ;
typedef TYPE_1__ svn_log_entry_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
              svn_log_entry_t *VAR_2,
              apr_pool_t *VAR_3)
{
  if (VAR_2->non_inheritable)
    FUNC_0(FUNC_1(VAR_3, "r%ld*\n", VAR_2->revision));
  else
    FUNC_0(FUNC_1(VAR_3, "r%ld\n", VAR_2->revision));

  return VAR_0;
}
