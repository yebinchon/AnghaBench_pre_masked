
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int error_baton; int * (* error_handler ) (int *,int ,int *) ;int failures; } ;
typedef TYPE_1__ svn_cache__t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_cache__t *VAR_0,
             svn_error_t *VAR_1,
             apr_pool_t *VAR_2)
{
  if (VAR_1)
    {
      VAR_0->failures++;
      if (VAR_0->error_handler)
        VAR_1 = (VAR_0->error_handler)(VAR_1, VAR_0->error_baton, VAR_2);
    }

  return VAR_1;
}
