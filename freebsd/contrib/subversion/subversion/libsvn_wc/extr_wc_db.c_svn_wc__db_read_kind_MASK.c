
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef void* svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int*,int) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*,char const*,int *) ;
 int VAR_6 ;
 int FUNC_6 (char const*) ;
 int * FUNC_7 (int ,int *,int ,int ) ;
 int * FUNC_8 (int ) ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_9 (int *,char*,int ,char const*) ;
 int FUNC_10 (int *,int ) ;
 void* FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int **,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__*,int *) ;
 int VAR_9 ;




 int FUNC_15 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_16(svn_node_kind_t *VAR_10,
                     svn_wc__db_t *VAR_11,
                     const char *VAR_12,
                     svn_boolean_t VAR_13,
                     svn_boolean_t VAR_14,
                     svn_boolean_t VAR_15,
                     apr_pool_t *VAR_16)
{
  svn_wc__db_wcroot_t *VAR_17;
  const char *VAR_18;
  svn_sqlite__stmt_t *VAR_19;
  svn_boolean_t VAR_20;
  svn_wc__db_status_t VAR_21;

  FUNC_1(FUNC_6(VAR_12));

  FUNC_0(FUNC_15(&VAR_17, &VAR_18, VAR_11,
                              VAR_12, VAR_16, VAR_16));
  FUNC_2(VAR_17);

  FUNC_0(FUNC_12(&VAR_19, VAR_17->sdb,
                                    VAR_1));
  FUNC_0(FUNC_9(VAR_19, "is", VAR_17->wc_id, VAR_18));
  FUNC_0(FUNC_14(&VAR_20, VAR_19));

  if (!VAR_20)
    {
      if (VAR_13)
        {
          *VAR_10 = VAR_8;
          FUNC_0(FUNC_13(VAR_19));
          return VAR_3;
        }
      else
        {
          FUNC_0(FUNC_13(VAR_19));
          return FUNC_7(VAR_2, ((void*)0),
                                   FUNC_3("The node '%s' was not found."),
                                   FUNC_5(VAR_17,
                                                          VAR_18,
                                                          VAR_16));
        }
    }

  VAR_21 = FUNC_11(VAR_19, 3, VAR_6);

  if (VAR_14 && VAR_21 == VAR_9)
    {



      FUNC_0(FUNC_14(&VAR_20, VAR_19));

      if (!VAR_20)
        {

          *VAR_10 = VAR_7;
          return FUNC_8(FUNC_13(VAR_19));
        }
    }

  if (!(VAR_14 && VAR_15))
    {
      int VAR_22 = FUNC_10(VAR_19, 0);
      svn_boolean_t VAR_23 = VAR_0;

      if (VAR_22 > 0)
        FUNC_0(FUNC_4(&VAR_21, VAR_21));

      switch (VAR_21)
        {
          case 129:
            if (! (VAR_15 && VAR_14))
              VAR_23 = VAR_4;
            break;
          case 130:
          case 128:
            if (! VAR_15)
              VAR_23 = VAR_4;
            break;
          case 131:
            if (! VAR_14)
              VAR_23 = VAR_4;
            break;
          default:
            break;
        }

      if (VAR_23)
        {
          *VAR_10 = VAR_7;
          return FUNC_8(FUNC_13(VAR_19));
        }
    }

  *VAR_10 = FUNC_11(VAR_19, 4, VAR_5);

  return FUNC_8(FUNC_13(VAR_19));
}
