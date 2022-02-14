
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
struct svn_wc__db_info_t {char const* repos_relpath; char const* repos_root_url; char const* repos_uuid; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const*,int *) ;
 char* FUNC_3 (char const*,int ,int *) ;
 int FUNC_4 (int *,char const**,char const**,char const**,int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_1,
                           const char **VAR_2,
                           const char **VAR_3,
                           const struct svn_wc__db_info_t *VAR_4,
                           const char *VAR_5,
                           const char *VAR_6,
                           const char *VAR_7,
                           svn_wc__db_t *VAR_8,
                           const char *VAR_9,
                           apr_pool_t *VAR_10,
                           apr_pool_t *VAR_11)
{
  if (VAR_4->repos_relpath && VAR_4->repos_root_url)
    {
      *VAR_1 = FUNC_1(VAR_10, VAR_4->repos_relpath);
      *VAR_2 = FUNC_1(VAR_10, VAR_4->repos_root_url);
      *VAR_3 = FUNC_1(VAR_10, VAR_4->repos_uuid);
    }
  else if (VAR_5 && VAR_6)
    {
      *VAR_1 = FUNC_3(VAR_5,
                                        FUNC_2(VAR_9,
                                                            ((void*)0)),
                                        VAR_10);
      *VAR_2 = FUNC_1(VAR_10, VAR_6);
      *VAR_3 = FUNC_1(VAR_10, VAR_7);
    }
  else
    {
      FUNC_0(FUNC_4(((void*)0),
                                         VAR_1, VAR_2,
                                         VAR_3,
                                         VAR_8, VAR_9,
                                         VAR_10, VAR_11));
    }

  return VAR_0;
}
