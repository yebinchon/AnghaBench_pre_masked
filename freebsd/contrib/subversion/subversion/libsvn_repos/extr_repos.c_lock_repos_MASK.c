
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int fs_type; } ;
typedef TYPE_1__ svn_repos_t ;
struct TYPE_12__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (char const*,int ,int ,int *) ;
 char* FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_repos_t *VAR_2,
           svn_boolean_t VAR_3,
           svn_boolean_t VAR_4,
           apr_pool_t *VAR_5)
{
  if (FUNC_3(VAR_2->fs_type, VAR_0) == 0)
    {
      svn_error_t *VAR_6;
      const char *VAR_7 = FUNC_6(VAR_2, VAR_5);

      VAR_6 = FUNC_5(VAR_7, VAR_3, VAR_4, VAR_5);
      if (VAR_6 != ((void*)0) && FUNC_0(VAR_6->apr_err))
        return FUNC_4(VAR_6);
      FUNC_1(VAR_6, FUNC_2("Error opening db lockfile"));
    }
  return VAR_1;
}
