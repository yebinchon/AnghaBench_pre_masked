
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct repos_info_baton {char const* last_repos; char const* last_uuid; int * state_pool; int ctx; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 void* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const**,char const**,char const*,int ,int *,int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char **VAR_1,
                 const char **VAR_2,
                 void *VAR_3,
                 const char *VAR_4,
                 apr_pool_t *VAR_5,
                 apr_pool_t *VAR_6)
{
  struct repos_info_baton *VAR_7 = VAR_3;


  if (VAR_7->last_repos && FUNC_3(VAR_7->last_repos, VAR_4))
    {
      *VAR_1 = FUNC_1(VAR_5, VAR_7->last_repos);
      *VAR_2 = FUNC_1(VAR_5, VAR_7->last_uuid);
      return VAR_0;
    }

  FUNC_0(FUNC_2(VAR_1, VAR_2, VAR_4, VAR_7->ctx,
                                    VAR_5, VAR_6));


  VAR_7->last_repos = FUNC_1(VAR_7->state_pool, *VAR_1);
  VAR_7->last_uuid = FUNC_1(VAR_7->state_pool, *VAR_2);

  return VAR_0;
}
