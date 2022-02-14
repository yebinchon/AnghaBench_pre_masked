
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int repos_root_url; } ;
struct TYPE_5__ {TYPE_1__ loc; } ;
typedef TYPE_2__ merge_target_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int *) ;
 int * FUNC_2 (int ,int *,int ,char const*,int ,int ) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const merge_target_t *VAR_2,
                  const char *VAR_3,
                  const char *VAR_4,
                  apr_pool_t *VAR_5)
{
  if (!FUNC_3(VAR_2->loc.repos_root_url, VAR_4))
    return FUNC_2(
        VAR_0, ((void*)0),
         FUNC_0("URL '%s' of '%s' is not in repository '%s'"),
         VAR_4, FUNC_1(VAR_3, VAR_5),
         VAR_2->loc.repos_root_url);

  return VAR_1;
}
