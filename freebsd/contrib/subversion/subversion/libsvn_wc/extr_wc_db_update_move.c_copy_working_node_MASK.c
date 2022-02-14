
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *,char*,int ,char const*,...) ;
 char* FUNC_4 (int *,int,int *,int *) ;
 int FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*,int *) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char *VAR_6,
                  const char *VAR_7,
                  svn_wc__db_wcroot_t *VAR_8,
                  apr_pool_t *VAR_9)
{
  svn_sqlite__stmt_t *VAR_10;
  svn_boolean_t VAR_11;
  const char *VAR_12 = FUNC_2(VAR_7,
                                                       VAR_9);


  FUNC_0(FUNC_5(&VAR_10,VAR_8->sdb,
                                    VAR_1));
  FUNC_0(FUNC_3(VAR_10, "issdst", VAR_8->wc_id, VAR_6,
                            VAR_7, FUNC_1(VAR_7),
                            VAR_12, VAR_4,
                            VAR_5));
  FUNC_0(FUNC_8(VAR_10));


  FUNC_0(FUNC_5(&VAR_10, VAR_8->sdb,
                                    VAR_2));
  FUNC_0(FUNC_3(VAR_10, "is", VAR_8->wc_id, VAR_6));
  FUNC_0(FUNC_7(&VAR_11, VAR_10));
  if (VAR_11)
    {
      apr_size_t VAR_13;
      const char *VAR_14;

      VAR_14 = FUNC_4(VAR_10, 1, &VAR_13,
                                           VAR_9);
      FUNC_0(FUNC_6(VAR_10));
      FUNC_0(FUNC_5(&VAR_10, VAR_8->sdb,
                                        VAR_0));
      FUNC_0(FUNC_3(VAR_10, "issbs",
                                VAR_8->wc_id, VAR_7,
                                FUNC_2(VAR_7,
                                                    VAR_9),
                                VAR_14, VAR_13, ((void*)0)));
      FUNC_0(FUNC_7(&VAR_11, VAR_10));
    }
  FUNC_0(FUNC_6(VAR_10));

  return VAR_3;
}
