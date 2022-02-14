
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char const*,int *) ;
 int VAR_5 ;
 int * FUNC_3 (int ,int ,int ,int ) ;
 int * FUNC_4 (int ) ;
 char const* FUNC_5 (char const*,int *) ;
 int FUNC_6 (int *,char*,int ,char const*) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int **,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int*,int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_boolean_t *VAR_11,
                  svn_boolean_t *VAR_12,
                  svn_boolean_t *VAR_13,
                  svn_wc__db_wcroot_t *VAR_14,
                  const char *VAR_15,
                  apr_pool_t *VAR_16)
{
  svn_sqlite__stmt_t *VAR_17;
  svn_boolean_t VAR_18;
  svn_boolean_t VAR_19 = VAR_0;
  int VAR_20;
  svn_wc__db_status_t VAR_21;



  FUNC_0(FUNC_9(&VAR_17, VAR_14->sdb,
                                    VAR_1));

  FUNC_0(FUNC_6(VAR_17, "is", VAR_14->wc_id, VAR_15));

  FUNC_0(FUNC_11(&VAR_18, VAR_17));

  if (!VAR_18)
    return FUNC_3(VAR_2,
                             FUNC_10(VAR_17),
                             FUNC_1("The node '%s' was not found."),
                             FUNC_2(VAR_14, VAR_15,
                                                    VAR_16));

  {
    svn_wc__db_status_t VAR_22;

    VAR_22 = FUNC_8(VAR_17, 3, VAR_5);

    if (VAR_22 != VAR_8)
      return FUNC_4(FUNC_10(VAR_17));
  }

  FUNC_0(FUNC_11(&VAR_18, VAR_17));

  if (!VAR_18)
    return FUNC_4(FUNC_10(VAR_17));

  VAR_21 = FUNC_8(VAR_17, 3, VAR_5);




  if (VAR_21 != VAR_9
      && VAR_21 != VAR_7
      && VAR_21 != VAR_10
      && VAR_21 != VAR_6)
    {
      VAR_19 = VAR_4;
      if (VAR_13)
        *VAR_13 = VAR_4;
    }

  VAR_20 = FUNC_7(VAR_17, 0);

  if (VAR_12)
    {
      int VAR_23 = FUNC_7(VAR_17, 0);

      while (VAR_23 != 0 && VAR_18)
        {
          FUNC_0(FUNC_11(&VAR_18, VAR_17));

          if (VAR_18)
            VAR_23 = FUNC_7(VAR_17, 0);
        }

      if (VAR_18 && VAR_23 == 0)
        {
          svn_wc__db_status_t VAR_24;

          VAR_24 = FUNC_8(VAR_17, 3, VAR_5);

          *VAR_12 = (VAR_24 != VAR_9);
        }
    }

  FUNC_0(FUNC_10(VAR_17));

  if (!VAR_11 || !VAR_19)
    return VAR_3;

  if (VAR_21 != VAR_6)
    {
      int VAR_25;



      FUNC_0(FUNC_6(VAR_17, "is", VAR_14->wc_id,
                                FUNC_5(VAR_15,
                                                    VAR_16)));

      FUNC_0(FUNC_12(VAR_17));

      VAR_25 = FUNC_7(VAR_17, 0);

      if (VAR_25 >= VAR_20)
        {


          *VAR_11 = (VAR_25 == VAR_20);
          FUNC_0(FUNC_10(VAR_17));
          return VAR_3;
        }

      FUNC_0(FUNC_11(&VAR_18, VAR_17));

      if (VAR_18)
        VAR_25 = FUNC_7(VAR_17, 0);

      FUNC_0(FUNC_10(VAR_17));

      if (!VAR_18)
        *VAR_11 = VAR_4;
      else if (VAR_25 < VAR_20)
        *VAR_11 = VAR_4;

  }

  return VAR_3;
}
