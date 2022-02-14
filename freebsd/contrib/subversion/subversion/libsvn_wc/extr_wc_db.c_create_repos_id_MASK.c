
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char const*,...) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int **,int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(apr_int64_t *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                svn_sqlite__db_t *VAR_5,
                apr_pool_t *VAR_6)
{
  svn_sqlite__stmt_t *VAR_7;
  svn_sqlite__stmt_t *VAR_8;
  svn_boolean_t VAR_9;

  FUNC_0(FUNC_4(&VAR_7, VAR_5, VAR_1));
  FUNC_0(FUNC_2(VAR_7, "s", VAR_3));
  FUNC_0(FUNC_7(&VAR_9, VAR_7));

  if (VAR_9)
    {
      *VAR_2 = FUNC_3(VAR_7, 0);
      return FUNC_1(FUNC_6(VAR_7));
    }
  FUNC_0(FUNC_6(VAR_7));
  FUNC_0(FUNC_4(&VAR_8, VAR_5,
                                    VAR_0));
  FUNC_0(FUNC_2(VAR_8, "ss", VAR_3, VAR_4));
  return FUNC_1(FUNC_5(VAR_2, VAR_8));
}
