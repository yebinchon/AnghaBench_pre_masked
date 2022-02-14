
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ,char const*,int) ;
 int FUNC_4 (int *,int ) ;
 char* FUNC_5 (int *,int,int *) ;
 scalar_t__ FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int **,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_wc__db_wcroot_t *VAR_7,
                         const char *VAR_8,
                         int VAR_9,
                         apr_pool_t *VAR_10)
{
  svn_sqlite__stmt_t *VAR_11;
  svn_boolean_t VAR_12;
  int VAR_13;
  svn_wc__db_status_t VAR_14;
  const char *VAR_15;

  FUNC_0(FUNC_7(&VAR_11, VAR_7->sdb,
                                    VAR_3));
  FUNC_0(FUNC_3(VAR_11, "isd", VAR_7->wc_id, VAR_8,
                            VAR_9));
  FUNC_0(FUNC_9(&VAR_12, VAR_11));

  if (!VAR_12)
    return FUNC_2(FUNC_8(VAR_11));

  VAR_13 = FUNC_4(VAR_11, 0);
  VAR_14 = FUNC_6(VAR_11, 1, VAR_5);
  VAR_15 = FUNC_5(VAR_11, 3, VAR_10);

  FUNC_0(FUNC_8(VAR_11));

  if (VAR_15)
    {

      FUNC_0(FUNC_7(&VAR_11, VAR_7->sdb,
                                        VAR_0));
      FUNC_0(FUNC_3(VAR_11, "isd", VAR_7->wc_id,
                                VAR_15, FUNC_1(VAR_15)));
      FUNC_0(FUNC_10(VAR_11));



    }

  if (VAR_14 == VAR_6)
    {

      FUNC_0(FUNC_7(&VAR_11, VAR_7->sdb, VAR_2));
    }
  else if (VAR_15)
    {

      FUNC_0(FUNC_7(&VAR_11, VAR_7->sdb,
                                        VAR_1));
      }
  else
    {

      return VAR_4;
    }

  FUNC_0(FUNC_3(VAR_11, "isd", VAR_7->wc_id, VAR_8,
                            VAR_13));

  return FUNC_2(FUNC_11(((void*)0), VAR_11));
}
