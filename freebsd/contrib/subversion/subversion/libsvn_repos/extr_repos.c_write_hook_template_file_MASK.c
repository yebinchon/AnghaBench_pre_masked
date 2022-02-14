
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hook_path; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,char const*,int ) ;
 char* FUNC_2 (char const*,char const*,char const*,int *) ;
 char* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (char const*,char const*,int *) ;
 int FUNC_5 (char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_repos_t *VAR_4, const char *VAR_5,
                         const char *VAR_6,
                         const char *VAR_7,
                         apr_pool_t *VAR_8)
{
  const char *VAR_9
    = FUNC_3(VAR_4->hook_path,
                      FUNC_1(VAR_8, "%s%s",
                                   VAR_5, VAR_2),
                      VAR_8);
  const char *VAR_10
    = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);

  FUNC_0(FUNC_4(VAR_9, VAR_10, VAR_8));
  FUNC_0(FUNC_5(VAR_9, VAR_3, VAR_0, VAR_8));
  return VAR_1;
}
