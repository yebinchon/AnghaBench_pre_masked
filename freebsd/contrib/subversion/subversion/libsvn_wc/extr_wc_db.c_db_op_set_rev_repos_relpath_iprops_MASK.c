
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (int *,int,int *,int *) ;
 int FUNC_5 (int *,char*,int ,char const*,...) ;
 int FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_wc__db_wcroot_t *VAR_5,
                                   const char *VAR_6,
                                   apr_array_header_t *VAR_7,
                                   svn_revnum_t VAR_8,
                                   svn_boolean_t VAR_9,
                                   const char *VAR_10,
                                   apr_int64_t VAR_11,
                                   apr_pool_t *VAR_12)
{
  svn_sqlite__stmt_t *VAR_13;

  FUNC_0(FUNC_2(VAR_5,
                        FUNC_3(VAR_5->abspath, VAR_6,
                                        VAR_12),
                        VAR_4, VAR_12));


  if (FUNC_1(VAR_8))
    {
      FUNC_0(FUNC_6(&VAR_13, VAR_5->sdb,
                                        VAR_1));

      FUNC_0(FUNC_5(VAR_13, "isr", VAR_5->wc_id, VAR_6,
                                VAR_8));

      FUNC_0(FUNC_7(VAR_13));
    }

  if (VAR_9)
    {
      FUNC_0(FUNC_6(&VAR_13, VAR_5->sdb,
                                        VAR_0));

      FUNC_0(FUNC_5(VAR_13, "isis", VAR_5->wc_id, VAR_6,
                                VAR_11, VAR_10));

      FUNC_0(FUNC_7(VAR_13));
    }


  FUNC_0(FUNC_6(&VAR_13, VAR_5->sdb,
                                    VAR_2));
  FUNC_0(FUNC_5(VAR_13, "is",
                            VAR_5->wc_id,
                            VAR_6));
  FUNC_0(FUNC_4(VAR_13, 3, VAR_7, VAR_12));
  FUNC_0(FUNC_7(VAR_13));

  return VAR_3;
}
