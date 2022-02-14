
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int authz_read_baton; int t_root; int (* authz_read_func ) (int *,int ,char const*,int ,int *) ;} ;
typedef TYPE_1__ report_baton_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char const*,int ,int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(report_baton_t *VAR_2, svn_boolean_t *VAR_3, const char *VAR_4,
           apr_pool_t *VAR_5)
{
  if (VAR_2->authz_read_func)
    return FUNC_1(VAR_2->authz_read_func(VAR_3, VAR_2->t_root, VAR_4,
                                              VAR_2->authz_read_baton, VAR_5));
  *VAR_3 = VAR_1;
  return VAR_0;
}
