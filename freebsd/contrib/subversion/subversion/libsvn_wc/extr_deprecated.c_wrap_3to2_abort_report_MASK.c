
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct wrap_3to2_report_baton {int baton; TYPE_1__* reporter; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* abort_report ) (int ,int *) ;} ;


 int * FUNC_0 (int ,int *) ;

__attribute__((used)) static svn_error_t *FUNC_1(void *VAR_0,
                                           apr_pool_t *VAR_1)
{
  struct wrap_3to2_report_baton *VAR_2 = VAR_0;

  return VAR_2->reporter->abort_report(VAR_2->baton, VAR_1);
}
