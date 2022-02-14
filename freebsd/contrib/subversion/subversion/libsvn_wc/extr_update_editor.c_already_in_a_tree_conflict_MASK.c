
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,int *,char const*,scalar_t__,int *) ;
 int FUNC_8 (scalar_t__*,int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_boolean_t *VAR_3,
                           svn_boolean_t *VAR_4,
                           svn_wc__db_t *VAR_5,
                           const char *VAR_6,
                           apr_pool_t *VAR_7)
{
  const char *VAR_8 = VAR_6;
  apr_pool_t *VAR_9 = FUNC_5(VAR_7);

  FUNC_1(FUNC_3(VAR_6));

  *VAR_3 = *VAR_4 = VAR_0;

  while (VAR_2)
    {
      svn_boolean_t VAR_10;

      FUNC_4(VAR_9);

      FUNC_0(FUNC_7(VAR_3, VAR_4, VAR_5,
                                              VAR_8, VAR_2,
                                              VAR_7));
      if (*VAR_3 || *VAR_4)
        break;

      FUNC_0(FUNC_8(&VAR_10, VAR_5, VAR_8,
                                   VAR_9));
      if (VAR_10)
        break;

      VAR_8 = FUNC_2(VAR_8, VAR_7);
    }

  FUNC_6(VAR_9);

  return VAR_1;
}
