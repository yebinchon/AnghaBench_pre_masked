
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*,int const*,int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int const**,int *,int ,int *) ;
 int FUNC_8 (int **,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_wc__db_wcroot_t *VAR_1,
                        apr_pool_t *VAR_2)
{
  svn_sqlite__stmt_t *VAR_3;
  svn_error_t *VAR_4 = ((void*)0);
  apr_pool_t *VAR_5 = FUNC_5(VAR_2);


  FUNC_0(FUNC_8(&VAR_3, VAR_1->sdb,
                                    VAR_0));
  while (! VAR_4)
    {
      svn_boolean_t VAR_6;
      const svn_checksum_t *VAR_7;

      FUNC_4(VAR_5);

      FUNC_0(FUNC_10(&VAR_6, VAR_3));
      if (! VAR_6)
        break;

      FUNC_0(FUNC_7(&VAR_7, VAR_3, 0,
                                          VAR_5));
      VAR_4 = FUNC_1(VAR_1, VAR_7,
                                            VAR_5);
    }

  FUNC_6(VAR_5);

  return FUNC_3(
      FUNC_2(VAR_4, FUNC_9(VAR_3)));
}
