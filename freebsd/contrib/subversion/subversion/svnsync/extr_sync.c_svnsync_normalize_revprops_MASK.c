
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int const**,scalar_t__*,char const*,int *,int *) ;
 int FUNC_6 (int *,char const*,int const*) ;
 scalar_t__ FUNC_7 (char const*) ;

svn_error_t *
FUNC_8(apr_hash_t *VAR_1,
                           int *VAR_2,
                           const char *VAR_3,
                           apr_pool_t *VAR_4)
{
  apr_hash_index_t *VAR_5;
  *VAR_2 = 0;

  for (VAR_5 = FUNC_1(VAR_4, VAR_1);
       VAR_5;
       VAR_5 = FUNC_2(VAR_5))
    {
      const char *VAR_6 = FUNC_3(VAR_5);
      const svn_string_t *VAR_7 = FUNC_4(VAR_5);

      if (FUNC_7(VAR_6))
        {
          svn_boolean_t VAR_8;
          FUNC_0(FUNC_5(&VAR_7, &VAR_8,
                  VAR_3, VAR_4, VAR_4));


          FUNC_6(VAR_1, VAR_6, VAR_7);

          if (VAR_8)
            (*VAR_2)++;
        }
    }
  return VAR_0;
}
