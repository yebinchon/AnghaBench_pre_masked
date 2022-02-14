
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct report_baton {int wrapped_report_baton; TYPE_1__* wrapped_reporter; int out; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* set_path ) (int ,char const*,int ,int ,int ,char const*,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,char const*,int ,int ,int ,char const*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,char*,char const*,int ,int ,int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_1,
         const char *VAR_2,
         svn_revnum_t VAR_3,
         svn_depth_t VAR_4,
         svn_boolean_t VAR_5,
         const char *VAR_6,
         apr_pool_t *VAR_7)
{
  struct report_baton *VAR_8 = VAR_1;
  FUNC_1(FUNC_4(VAR_8->out, VAR_7, "set_path(%s, %ld, %s, %s, %s)\n",
                            VAR_2, VAR_3, FUNC_3(VAR_4),
                            FUNC_0(VAR_5), VAR_6));
  FUNC_1(VAR_8->wrapped_reporter->set_path(VAR_8->wrapped_report_baton, VAR_2,
                                         VAR_3, VAR_4,
                                         VAR_5, VAR_6, VAR_7));
  return VAR_0;
}
