
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct report_baton {int wrapped_report_baton; TYPE_1__* wrapped_reporter; int out; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* delete_path ) (int ,char const*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (int ,int *,char*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1,
            const char *VAR_2,
            apr_pool_t *VAR_3)
{
  struct report_baton *VAR_4 = VAR_1;
  FUNC_0(FUNC_2(VAR_4->out, VAR_3, "delete_path(%s)\n", VAR_2));
  FUNC_0(VAR_4->wrapped_reporter->delete_path(VAR_4->wrapped_report_baton,
                                            VAR_2, VAR_3));
  return VAR_0;
}
