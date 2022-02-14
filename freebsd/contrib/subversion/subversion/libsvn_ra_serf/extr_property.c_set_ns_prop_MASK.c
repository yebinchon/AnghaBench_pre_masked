
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int apr_pool_t ;
typedef int const apr_hash_t ;


 int * FUNC_0 (int *) ;
 char* FUNC_1 (int *,char const*) ;
 int * FUNC_2 (int const*,char const*) ;
 int FUNC_3 (int const*,char const*,int const*) ;
 int * FUNC_4 (int const*,int *) ;

__attribute__((used)) static void
FUNC_5(apr_hash_t *VAR_0,
            const char *VAR_1, const char *VAR_2,
            const svn_string_t *VAR_3, apr_pool_t *VAR_4)
{
  apr_hash_t *VAR_5 = FUNC_2(VAR_0, VAR_1);

  if (!VAR_5)
    {
      VAR_5 = FUNC_0(VAR_4);
      VAR_1 = FUNC_1(VAR_4, VAR_1);
      FUNC_3(VAR_0, VAR_1, VAR_5);
    }

  if (VAR_3)
    {
      VAR_2 = FUNC_1(VAR_4, VAR_2);
      VAR_3 = FUNC_4(VAR_3, VAR_4);
    }

  FUNC_3(VAR_5, VAR_2, VAR_3);
}
