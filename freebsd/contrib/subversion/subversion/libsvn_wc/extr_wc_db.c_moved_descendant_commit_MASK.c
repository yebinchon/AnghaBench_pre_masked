
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (int **,TYPE_1__*,char const*,int,int *,int *) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (char const*,int ,int *) ;
 int FUNC_12 (char const*,char const*) ;
 int * FUNC_13 (int *,char*,int ,char const*,int,int ,char const*,int ) ;
 int * FUNC_14 (int **,int ,int ) ;
 int * FUNC_15 (int*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_wc__db_wcroot_t *VAR_2,
                        const char *VAR_3,
                        apr_int64_t VAR_4,
                        const char *VAR_5,
                        svn_revnum_t VAR_6,
                        apr_hash_t *VAR_7,
                        apr_pool_t *VAR_8)
{
  apr_pool_t *VAR_9;
  svn_sqlite__stmt_t *VAR_10;
  apr_hash_index_t *VAR_11;

  FUNC_1(*VAR_3 != '\0'
                 && *VAR_5 != '\0');

  if (!VAR_7)
    return VAR_1;


  FUNC_0(FUNC_14(&VAR_10, VAR_2->sdb,
                                    VAR_0));

  VAR_9 = FUNC_9(VAR_8);
  for (VAR_11 = FUNC_2(VAR_8, VAR_7); VAR_11; VAR_11 = FUNC_3(VAR_11))
    {
      const char *VAR_12 = FUNC_5(VAR_11);
      const char *VAR_13 = FUNC_4(VAR_11);
      const char *VAR_14;
      int VAR_15 = FUNC_7(VAR_13);
      int VAR_16;
      apr_hash_t *VAR_17;

      FUNC_8(VAR_9);

      FUNC_1(VAR_15 > 0);

      VAR_14 = FUNC_11(
                            VAR_5,
                            FUNC_12(VAR_3,
                                                      VAR_12),
                            VAR_9);

      FUNC_0(FUNC_13(VAR_10, "isdisr", VAR_2->wc_id,
                                                VAR_13,
                                                VAR_15,
                                                VAR_4,
                                                VAR_14,
                                                VAR_6));
      FUNC_0(FUNC_15(&VAR_16, VAR_10));
      FUNC_0(FUNC_6(&VAR_17, VAR_2, VAR_13, VAR_15,
                                       VAR_9, VAR_9));
      FUNC_0(FUNC_16(VAR_2, VAR_13,
                                      VAR_4, VAR_14, VAR_6,
                                      VAR_17, VAR_9));
    }

  FUNC_10(VAR_9);
  return VAR_1;
}
