
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int ,char const*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*,int *) ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_boolean_t *VAR_6,
                   svn_boolean_t *VAR_7,
                   svn_wc__db_status_t *VAR_8,
                   svn_wc__db_wcroot_t *VAR_9,
                   const char *VAR_10,
                   int VAR_11,
                   apr_pool_t *VAR_12)
{
  svn_sqlite__stmt_t *VAR_13;
  svn_boolean_t VAR_14;

  *VAR_6 = *VAR_7 = VAR_0;
  *VAR_8 = VAR_5;

  FUNC_0(FUNC_5(&VAR_13, VAR_9->sdb,
                                    VAR_1));
  FUNC_0(FUNC_2(VAR_13, "is", VAR_9->wc_id, VAR_10));
  FUNC_0(FUNC_7(&VAR_14, VAR_13));

  if (VAR_11 >= 0)
    {
      while (VAR_14 &&
             (FUNC_3(VAR_13, 0) > VAR_11))
        {
          FUNC_0(FUNC_7(&VAR_14, VAR_13));
        }
    }
  if (VAR_14)
    {
      FUNC_0(FUNC_7(&VAR_14, VAR_13));
      if (VAR_14)
        *VAR_8 = FUNC_4(VAR_13, 3, VAR_4);

      while (VAR_14)
        {
          int VAR_15 = FUNC_3(VAR_13, 0);

          if (VAR_15 > 0)
            *VAR_7 = VAR_3;
          else
            *VAR_6 = VAR_3;

          FUNC_0(FUNC_7(&VAR_14, VAR_13));
        }
    }
  FUNC_0(FUNC_6(VAR_13));

  if (*VAR_7)
    FUNC_0(FUNC_1(VAR_8, *VAR_8));

  return VAR_2;
}
