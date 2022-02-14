
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* path; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (char const*,int ,int *) ;
 int * FUNC_3 (char const**,int ,int *) ;

svn_error_t *
FUNC_4(const char **VAR_1,
                   const char *VAR_2,
                   apr_pool_t *VAR_3)
{
  svn_repos_t VAR_4;
  VAR_4.path = (char*)VAR_2;

  FUNC_0(FUNC_1(&VAR_4, VAR_3));

  return FUNC_3(VAR_1,
                     FUNC_2(VAR_2, VAR_0, VAR_3),
                     VAR_3);
}
