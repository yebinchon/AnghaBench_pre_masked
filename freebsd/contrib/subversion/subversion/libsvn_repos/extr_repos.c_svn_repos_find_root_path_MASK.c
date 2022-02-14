
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*,int *) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,int *) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const**,char const*,int *) ;
 scalar_t__ FUNC_6 (char const*) ;

const char *
FUNC_7(const char *VAR_0,
                         apr_pool_t *VAR_1)
{
  const char *VAR_2 = VAR_0;
  const char *VAR_3;
  svn_error_t *VAR_4;

  while (1)
    {



      VAR_4 = FUNC_5(&VAR_3, VAR_2, VAR_1);
      if (!VAR_4 && FUNC_0(VAR_2, VAR_1))
        break;
      FUNC_4(VAR_4);

      if (FUNC_6(VAR_2) ||
          FUNC_3(VAR_2, FUNC_1(VAR_2)))
        return ((void*)0);

      VAR_2 = FUNC_2(VAR_2, VAR_1);
    }

  return VAR_2;
}
