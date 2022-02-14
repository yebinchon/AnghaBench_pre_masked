
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct bump_baton {int wcroot_abspath; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int *,int ,int *,int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int **,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(void *VAR_5, svn_sqlite__db_t *VAR_6, apr_pool_t *VAR_7)
{
  struct bump_baton *VAR_8 = VAR_5;
  svn_boolean_t VAR_9;
  apr_pool_t *VAR_10 = FUNC_5(VAR_7);
  svn_sqlite__stmt_t *VAR_11;
  svn_wc__db_t *VAR_12;

  FUNC_0(FUNC_11(&VAR_12, ((void*)0), VAR_4 , VAR_0,
                          VAR_7, VAR_7));

  FUNC_0(FUNC_7(&VAR_11, VAR_6,
                                    VAR_1));
  FUNC_0(FUNC_9(&VAR_9, VAR_11));

  while (VAR_9)
    {
      svn_error_t *VAR_13;
      FUNC_4(VAR_10);

      VAR_13 = FUNC_1(VAR_12, VAR_8->wcroot_abspath, VAR_11, VAR_6,
                                         VAR_10);

      if (VAR_13)
        {
          return FUNC_3(
                    FUNC_2(
                            VAR_13,
                            FUNC_8(VAR_11)));
        }

      FUNC_0(FUNC_9(&VAR_9, VAR_11));
    }
  FUNC_0(FUNC_8(VAR_11));

  FUNC_0(FUNC_6(VAR_6, VAR_2));
  FUNC_0(FUNC_10(VAR_12));
  return VAR_3;
}
