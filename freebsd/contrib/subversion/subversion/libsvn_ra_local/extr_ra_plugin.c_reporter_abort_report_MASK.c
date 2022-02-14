
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int report_baton; } ;
typedef TYPE_1__ reporter_baton_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0,
                      apr_pool_t *VAR_1)
{
  reporter_baton_t *VAR_2 = VAR_0;
  return FUNC_0(VAR_2->report_baton, VAR_1);
}
