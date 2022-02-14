
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (char const*,char const*) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char*,char const*,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char const*,char const*,int *) ;
 char* FUNC_5 (char const*,char const*,int *) ;
 char* FUNC_6 (char const*,char const*,int *) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char **VAR_1,
                             const char **VAR_2,
                             const char **VAR_3,
                             const char *VAR_4,
                             const char *VAR_5,
                             apr_pool_t *VAR_6,
                             apr_pool_t *VAR_7)
{
  const char *VAR_8 = *VAR_1;
  const char *VAR_9 = *VAR_2;
  const char *VAR_10 = *VAR_3;

  if (VAR_5)
    VAR_8 = FUNC_6(VAR_5, VAR_8, VAR_6);

  if (VAR_4)
    {

      const char *VAR_11 = FUNC_5(VAR_4, VAR_8,
                                                   VAR_6);

      if (VAR_11)
        VAR_8 = VAR_11;
      else if (! FUNC_2(VAR_4, VAR_8))
        VAR_8 = ".";
      else
        return FUNC_0(VAR_8, VAR_4);
    }

  {
    apr_size_t VAR_12;
    svn_boolean_t VAR_13;
    svn_boolean_t VAR_14;
    VAR_13 = FUNC_7(VAR_9);
    VAR_14 = FUNC_7(VAR_10);

    if (VAR_13 && VAR_14)
      VAR_12 = FUNC_3(FUNC_8(VAR_9, VAR_10,
                                                VAR_7));
    else if (!VAR_13 && !VAR_14)
      VAR_12 = FUNC_3(FUNC_4(VAR_9, VAR_10,
                                                   VAR_7));
    else
      VAR_12 = 0;

    VAR_9 += VAR_12;
    VAR_10 += VAR_12;
  }






  if (VAR_8[0] == '\0')
    VAR_8 = ".";

  if (VAR_9[0] == '\0')
    VAR_9 = VAR_8;
  else if (FUNC_7(VAR_9))
    VAR_9 = FUNC_1(VAR_6, "%s\t(%s)", VAR_8, VAR_9);
  else if (VAR_9[0] == '/')
    VAR_9 = FUNC_1(VAR_6, "%s\t(...%s)", VAR_8, VAR_9);
  else
    VAR_9 = FUNC_1(VAR_6, "%s\t(.../%s)", VAR_8, VAR_9);

  if (VAR_10[0] == '\0')
    VAR_10 = VAR_8;
  else if (FUNC_7(VAR_10))
    VAR_10 = FUNC_1(VAR_6, "%s\t(%s)", VAR_8, VAR_10);
  else if (VAR_10[0] == '/')
    VAR_10 = FUNC_1(VAR_6, "%s\t(...%s)", VAR_8, VAR_10);
  else
    VAR_10 = FUNC_1(VAR_6, "%s\t(.../%s)", VAR_8, VAR_10);

  *VAR_1 = VAR_8;
  *VAR_2 = VAR_9;
  *VAR_3 = VAR_10;

  return VAR_0;
}
