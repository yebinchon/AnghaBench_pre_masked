
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {void* error_baton; int error_handler; } ;
typedef TYPE_1__ svn_cache__t ;
typedef int svn_cache__error_handler_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;

svn_error_t *
FUNC_0(svn_cache__t *VAR_1,
                             svn_cache__error_handler_t VAR_2,
                             void *VAR_3,
                             apr_pool_t *VAR_4)
{
  VAR_1->error_handler = VAR_2;
  VAR_1->error_baton = VAR_3;
  return VAR_0;
}
