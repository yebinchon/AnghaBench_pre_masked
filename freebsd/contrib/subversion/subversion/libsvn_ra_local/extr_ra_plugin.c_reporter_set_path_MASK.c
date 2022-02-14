
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct TYPE_2__ {int report_baton; } ;
typedef TYPE_1__ reporter_baton_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ,char const*,int ,int ,int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0,
                  const char *VAR_1,
                  svn_revnum_t VAR_2,
                  svn_depth_t VAR_3,
                  svn_boolean_t VAR_4,
                  const char *VAR_5,
                  apr_pool_t *VAR_6)
{
  reporter_baton_t *VAR_7 = VAR_0;
  return FUNC_0(VAR_7->report_baton, VAR_1,
                             VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
