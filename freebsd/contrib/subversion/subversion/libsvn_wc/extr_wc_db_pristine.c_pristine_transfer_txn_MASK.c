
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (TYPE_1__*,TYPE_1__*,int const*,int const*,int ,int ,void*,int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int ,char const*) ;
 int FUNC_8 (int const**,int *,int,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int **,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_wc__db_wcroot_t *VAR_2,
                       svn_wc__db_wcroot_t *VAR_3,
                       const char *VAR_4,
                       svn_cancel_func_t VAR_5,
                       void *VAR_6,
                       apr_pool_t *VAR_7)
{
  svn_sqlite__stmt_t *VAR_8;
  svn_boolean_t VAR_9;
  apr_pool_t *VAR_10 = FUNC_5(VAR_7);

  FUNC_0(FUNC_10(&VAR_8, VAR_2->sdb,
                                    VAR_0));
  FUNC_0(FUNC_7(VAR_8, "is", VAR_2->wc_id, VAR_4));


  FUNC_0(FUNC_12(&VAR_9, VAR_8));

  while (VAR_9)
    {
      const svn_checksum_t *VAR_11;
      const svn_checksum_t *VAR_12;
      apr_int64_t VAR_13;
      svn_error_t *VAR_14;

      FUNC_4(VAR_10);

      FUNC_0(FUNC_8(&VAR_11, VAR_8, 0, VAR_10));
      FUNC_0(FUNC_8(&VAR_12, VAR_8, 1, VAR_10));
      VAR_13 = FUNC_9(VAR_8, 2);

      VAR_14 = FUNC_1(VAR_2, VAR_3,
                                        VAR_11, VAR_12, VAR_13,
                                        VAR_5, VAR_6,
                                        VAR_10);

      if (VAR_14)
        return FUNC_3(FUNC_2(
                                    VAR_14,
                                    FUNC_11(VAR_8)));

      FUNC_0(FUNC_12(&VAR_9, VAR_8));
    }
  FUNC_0(FUNC_11(VAR_8));

  FUNC_6(VAR_10);

  return VAR_1;
}
