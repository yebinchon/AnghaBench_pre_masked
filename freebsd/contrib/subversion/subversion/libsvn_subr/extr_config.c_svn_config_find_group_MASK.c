
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_config_t ;
struct search_groups_baton {char const* key; char const* match; int * pool; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ,struct search_groups_baton*,int *) ;

const char *FUNC_1(svn_config_t *VAR_1, const char *VAR_2,
                                  const char *VAR_3,
                                  apr_pool_t *VAR_4)
{
  struct search_groups_baton VAR_5;

  VAR_5.key = VAR_2;
  VAR_5.match = ((void*)0);
  VAR_5.pool = VAR_4;
  (void) FUNC_0(VAR_1, VAR_3, VAR_0, &VAR_5, VAR_4);
  return VAR_5.match;
}
