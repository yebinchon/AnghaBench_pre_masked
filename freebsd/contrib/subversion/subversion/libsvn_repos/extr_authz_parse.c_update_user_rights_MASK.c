
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int authz_global_rights_t ;
struct TYPE_4__ {int repos; } ;
struct TYPE_5__ {TYPE_1__ rule; } ;
typedef TYPE_2__ authz_acl_t ;
typedef int authz_access_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__ const* const,char const* const,int ) ;
 int FUNC_1 (int * const,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
                   const void *VAR_2,
                   apr_ssize_t VAR_3,
                   void *VAR_4,
                   apr_pool_t *VAR_5)
{
  const authz_acl_t *const VAR_6 = VAR_1;
  const char *const VAR_7 = VAR_2;
  authz_global_rights_t *const VAR_8 = VAR_4;
  authz_access_t VAR_9;
  svn_boolean_t VAR_10 =
    FUNC_0(&VAR_9, VAR_6, VAR_7, VAR_6->rule.repos);

  if (VAR_10)
    FUNC_1(VAR_8, VAR_6->rule.repos, VAR_9);
  return VAR_0;
}
