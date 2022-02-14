
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int repos; } ;
typedef TYPE_1__ report_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;

svn_error_t *
FUNC_5(void *VAR_0, apr_pool_t *VAR_1)
{
  report_baton_t *VAR_2 = VAR_0;

  FUNC_0(FUNC_3(FUNC_4(VAR_2->repos), VAR_1));
  return FUNC_2(FUNC_1(VAR_2, VAR_1));
}
