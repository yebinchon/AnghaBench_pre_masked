
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct TYPE_4__ {int wrapped_report_baton; TYPE_1__* wrapped_reporter; } ;
typedef TYPE_2__ report_baton_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int * (* set_path ) (int ,char const*,int ,int ,int ,char const*,int *) ;} ;


 int * FUNC_0 (int ,char const*,int ,int ,int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0, const char *VAR_1,
                  svn_revnum_t VAR_2, svn_depth_t VAR_3,
                  svn_boolean_t VAR_4, const char *VAR_5,
                  apr_pool_t *VAR_6)
{
  report_baton_t *VAR_7 = VAR_0;

  return VAR_7->wrapped_reporter->set_path(VAR_7->wrapped_report_baton, VAR_1,
                                        VAR_2, VAR_3, VAR_4,
                                        VAR_5, VAR_6);
}
