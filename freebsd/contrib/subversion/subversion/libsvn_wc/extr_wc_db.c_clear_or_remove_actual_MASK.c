
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
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,int ,char const*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int*,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_wc__db_wcroot_t *VAR_9,
                       const char *VAR_10,
                       int VAR_11,
                       apr_pool_t *VAR_12)
{
  svn_sqlite__stmt_t *VAR_13;
  svn_boolean_t VAR_14, VAR_15;
  svn_boolean_t VAR_16 = VAR_0;

  FUNC_0(FUNC_4(&VAR_13, VAR_9->sdb,
                                    VAR_4));

  FUNC_0(FUNC_1(VAR_13, "is", VAR_9->wc_id, VAR_10));
  FUNC_0(FUNC_6(&VAR_14, VAR_13));

  if (VAR_14)
    {
      svn_wc__db_status_t VAR_17;

      VAR_15 = (FUNC_2(VAR_13, 0) > VAR_11);
      VAR_17 = FUNC_3(VAR_13, 3, VAR_7);

      if (VAR_15 && VAR_17 == VAR_8)
        {
          VAR_16 = VAR_6;
          FUNC_0(FUNC_6(&VAR_14, VAR_13));

          if (VAR_14)
            VAR_15 = (FUNC_2(VAR_13, 0) > VAR_11);
          else
            VAR_15 = VAR_0;
        }
    }
  else
    VAR_15 = VAR_0;

  FUNC_0(FUNC_5(VAR_13));
  if (VAR_15)
    return VAR_5;

  if (VAR_16)
    {

      FUNC_0(FUNC_4(
                          &VAR_13, VAR_9->sdb,
                          VAR_1));
      FUNC_0(FUNC_1(VAR_13, "is", VAR_9->wc_id, VAR_10));
      FUNC_0(FUNC_7(VAR_13));
      FUNC_0(FUNC_4(&VAR_13, VAR_9->sdb,
                                        VAR_2));
      FUNC_0(FUNC_1(VAR_13, "is", VAR_9->wc_id, VAR_10));
      FUNC_0(FUNC_7(VAR_13));
    }
  else
    {
      FUNC_0(FUNC_4(&VAR_13, VAR_9->sdb,
                                        VAR_3));
      FUNC_0(FUNC_1(VAR_13, "is", VAR_9->wc_id, VAR_10));
      FUNC_0(FUNC_7(VAR_13));
    }

  return VAR_5;
}
