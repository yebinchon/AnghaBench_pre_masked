
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int * FUNC_3 (int const*,int *) ;
 int * FUNC_4 (int ,int *,int ,char const*) ;
 int FUNC_5 (int *,char const*,int const*) ;
 int * FUNC_6 (int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(apr_hash_t *VAR_2,
                const char *VAR_3,
                const svn_string_t *VAR_4,
                const char *VAR_5)
{
  apr_pool_t *VAR_6 = FUNC_1(VAR_2);
  const svn_string_t *VAR_7;

  if (VAR_5)
    {


      if (FUNC_2(VAR_5, "base64") != 0)
        {
          return FUNC_4(VAR_0, ((void*)0),
                                   FUNC_0("Unsupported encoding '%s'"),
                                   VAR_5);
        }

      VAR_7 = FUNC_3(VAR_4, VAR_6);
    }
  else
    {
      VAR_7 = FUNC_6(VAR_4, VAR_6);
    }


  FUNC_5(VAR_2, VAR_3, VAR_7);

  return VAR_1;
}
