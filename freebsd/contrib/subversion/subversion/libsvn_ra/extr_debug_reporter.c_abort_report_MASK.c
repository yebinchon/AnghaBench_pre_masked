
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct report_baton {int wrapped_report_baton; TYPE_1__* wrapped_reporter; int out; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* abort_report ) (int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1,
             apr_pool_t *VAR_2)
{
  struct report_baton *VAR_3 = VAR_1;
  FUNC_0(FUNC_2(VAR_3->out, "abort_report()\n"));
  FUNC_0(VAR_3->wrapped_reporter->abort_report(VAR_3->wrapped_report_baton, VAR_2));
  return VAR_0;
}
