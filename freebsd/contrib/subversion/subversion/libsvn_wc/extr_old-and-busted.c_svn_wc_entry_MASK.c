
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_entry_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const**,char const*,int *) ;
 int FUNC_2 (char const**,char const**,char const*,int *) ;
 int * FUNC_3 (int *,char const*) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,char const*,int *) ;
 int FUNC_6 (int **,int *,int ,int *) ;
 int FUNC_7 (scalar_t__*,int const*) ;

svn_error_t *
FUNC_8(const svn_wc_entry_t **VAR_2,
             const char *VAR_3,
             svn_wc_adm_access_t *VAR_4,
             svn_boolean_t VAR_5,
             apr_pool_t *VAR_6)
{
  svn_wc__db_t *VAR_7 = FUNC_4(VAR_4);
  const char *VAR_8;
  svn_wc_adm_access_t *VAR_9;
  const char *VAR_10;
  apr_hash_t *VAR_11;

  FUNC_0(FUNC_1(&VAR_8, VAR_3, VAR_6));



  VAR_9 = FUNC_5(VAR_7, VAR_8, VAR_6);
  if (VAR_9 == ((void*)0))
    {



      const char *VAR_12;

      FUNC_2(&VAR_12, &VAR_10, VAR_8, VAR_6);

      VAR_9 = FUNC_5(VAR_7, VAR_12, VAR_6);
    }
  else
    {

      VAR_10 = "";
    }

  if (VAR_9 == ((void*)0))
    {

      *VAR_2 = ((void*)0);
      return VAR_0;
    }




  FUNC_0(FUNC_6(&VAR_11, VAR_9, VAR_1, VAR_6));
  *VAR_2 = FUNC_3(VAR_11, VAR_10);

  if (!VAR_5 && *VAR_2 != ((void*)0))
    {
      svn_boolean_t VAR_13;

      FUNC_0(FUNC_7(&VAR_13, *VAR_2));
      if (VAR_13)
        *VAR_2 = ((void*)0);
    }

  return VAR_0;
}
