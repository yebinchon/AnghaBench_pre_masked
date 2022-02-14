
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_subst_eol_style_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char const**,char const*) ;
 int FUNC_5 (int **,int *,char const*,int *,char const*,int ,int *,int *) ;
 int FUNC_6 (int **,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_7(svn_subst_eol_style_t *VAR_4,
                           const char **VAR_5,
                           apr_hash_t **VAR_6,
                           svn_boolean_t *VAR_7,
                           svn_wc__db_t *VAR_8,
                           const char *VAR_9,
                           apr_hash_t *VAR_10,
                           svn_boolean_t VAR_11,
                           apr_pool_t *VAR_12,
                           apr_pool_t *VAR_13)
{
  const char *VAR_14;
  FUNC_1(FUNC_2(VAR_9));

  if (VAR_10 == ((void*)0))
    FUNC_0(FUNC_6(&VAR_10, VAR_8, VAR_9,
                                     VAR_13, VAR_13));

  if (VAR_5)
    {
      VAR_14 = FUNC_3(VAR_10, VAR_1);

      FUNC_4(VAR_4, VAR_5, VAR_14);
    }

  if (VAR_6)
    {
      VAR_14 = FUNC_3(VAR_10, VAR_2);

      if (!VAR_14 || *VAR_14 == '\0')
        *VAR_6 = ((void*)0);
      else
        FUNC_0(FUNC_5(VAR_6,
                                        VAR_8, VAR_9, ((void*)0),
                                        VAR_14, VAR_11,
                                        VAR_12, VAR_13));
    }
  if (VAR_7)
    {
      VAR_14 = FUNC_3(VAR_10, VAR_3);

      *VAR_7 = (VAR_14 != ((void*)0));
    }

  return VAR_0;
}
