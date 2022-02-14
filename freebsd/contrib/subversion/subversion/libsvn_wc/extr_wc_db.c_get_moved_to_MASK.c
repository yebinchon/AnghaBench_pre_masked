
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char const*,int *) ;
 char* FUNC_5 (char const*,char const*) ;
 char* FUNC_6 (int *,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const char **VAR_2,
             const char **VAR_3,
             svn_boolean_t *VAR_4,
             svn_sqlite__stmt_t *VAR_5,
             const char *VAR_6,
             svn_wc__db_wcroot_t *VAR_7,
             const char *VAR_8,
             apr_pool_t *VAR_9,
             apr_pool_t *VAR_10)
{
  const char *VAR_11 = FUNC_6(VAR_5, 3, ((void*)0));

  if (VAR_11)
    {
      const char *VAR_12 = VAR_11;

      if (FUNC_2(VAR_6, VAR_8))
        {

          const char *VAR_13;




          VAR_13 = FUNC_5(VAR_6,
                                                          VAR_8);
          FUNC_0(VAR_13 &&
                         FUNC_3(VAR_13) > 0);
          VAR_11 = FUNC_4(VAR_12,
                                              VAR_13,
                                              VAR_9);
        }

      if (VAR_12 && VAR_3)
        *VAR_3
          = FUNC_1(VAR_9, VAR_12);

      if (VAR_11 && VAR_2)
        *VAR_2
          = FUNC_1(VAR_9, VAR_11);

      *VAR_4 = VAR_0;
    }

  return VAR_1;
}
