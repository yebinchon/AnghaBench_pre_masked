
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int sdb; int wc_id; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef void* svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int *) ;
 int * FUNC_3 (TYPE_1__*,char const*,int,int *) ;
 int * FUNC_4 (TYPE_1__*,char const*,void*,int,int *) ;
 int * FUNC_5 (TYPE_1__*,char const*,int,int *) ;
 int VAR_8 ;
 int FUNC_6 (TYPE_1__*,char const*,int *) ;
 int VAR_9 ;
 int FUNC_7 (char const*) ;
 int * FUNC_8 (int *,int ) ;
 int * FUNC_9 (int ,int *,int ,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char const*,int *) ;
 int * FUNC_14 (int *,char*,int ,char const*,int,...) ;
 int FUNC_15 (int *,int) ;
 char* FUNC_16 (int *,int,int *) ;
 void* FUNC_17 (int *,int,int ) ;
 int * FUNC_18 (int **,int ,int ) ;
 int FUNC_19 (int *) ;
 int * FUNC_20 (int*,int *) ;
 int * FUNC_21 (int *) ;
 int * FUNC_22 (TYPE_1__*,char const*,int *,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int * FUNC_23 (int*,TYPE_1__*,char const*,int,int *) ;

svn_error_t *
FUNC_24(svn_wc__db_wcroot_t *VAR_13,
                                  const char *VAR_14,
                                  int VAR_15,
                                  const char *VAR_16,
                                  svn_skel_t *VAR_17,
                                  svn_skel_t *VAR_18,
                                  apr_pool_t *VAR_19)
{
  svn_sqlite__stmt_t *VAR_20, *VAR_21;
  svn_boolean_t VAR_22;
  apr_pool_t *VAR_23 = FUNC_11(VAR_19);
  int VAR_24 = FUNC_7(VAR_16);
  svn_boolean_t VAR_25;
  svn_error_t *VAR_26 = ((void*)0);

  FUNC_0(FUNC_23(&VAR_25, VAR_13, VAR_16,
                                               VAR_0, VAR_19));

  if (!VAR_25)
    return FUNC_9(VAR_6, ((void*)0),
                             FUNC_1("No write-lock in '%s'"),
                             FUNC_6(VAR_13, VAR_16,
                                                    VAR_19));

  FUNC_0(FUNC_18(&VAR_21, VAR_13->sdb,
                                    VAR_1));


  FUNC_0(FUNC_18(&VAR_20, VAR_13->sdb,
                                    VAR_4));
  FUNC_0(FUNC_14(VAR_20, "isdsd", VAR_13->wc_id,
                            VAR_14, VAR_15,
                            VAR_16, VAR_24));
  FUNC_0(FUNC_20(&VAR_22, VAR_20));
  while (VAR_22)
    {
      const char *VAR_27;
      const char *VAR_28;

      FUNC_10(VAR_23);

      VAR_27 = FUNC_16(VAR_20, 0, VAR_23);
      VAR_28 = FUNC_16(VAR_20, 2, VAR_23);

      VAR_26 = FUNC_14(VAR_21, "isdsds", VAR_13->wc_id,
                              VAR_27, VAR_15,
                              VAR_28, VAR_24,
                              FUNC_13(VAR_28, VAR_23));
      if (!VAR_26)
        VAR_26 = FUNC_21(VAR_21);



      if (VAR_26)
        break;



      if (FUNC_7(VAR_28) > (VAR_24+1))
        {
          svn_boolean_t VAR_29 = !FUNC_15(VAR_20, 3);

          if (VAR_29)
            {
              svn_wc__db_status_t VAR_30;

              VAR_30 = FUNC_17(VAR_20, 3, VAR_9);

              if (VAR_30 != VAR_11)
                VAR_29 = VAR_0;
            }

          if (!VAR_29)
            {
              svn_node_kind_t VAR_31 = FUNC_17(VAR_20, 1, VAR_8);

              VAR_26 = FUNC_4(VAR_13, VAR_28,
                                            VAR_31, VAR_24, VAR_23);

              if (VAR_26)
                break;
            }
        }

      FUNC_0(FUNC_20(&VAR_22, VAR_20));
    }

  FUNC_0(FUNC_8(VAR_26, FUNC_19(VAR_20)));


  FUNC_0(FUNC_18(&VAR_20, VAR_13->sdb,
                                    VAR_5));
  FUNC_0(FUNC_14(VAR_20, "isdsd", VAR_13->wc_id,
                            VAR_16, VAR_24,
                            VAR_14, VAR_15));
  FUNC_0(FUNC_20(&VAR_22, VAR_20));
  while (VAR_22)
    {
      const char *VAR_32;
      svn_wc__db_status_t VAR_33;

      FUNC_10(VAR_23);

      VAR_32 = FUNC_16(VAR_20, 0, VAR_23);

      if (!FUNC_15(VAR_20, 2))
        VAR_33 = FUNC_17(VAR_20, 2, VAR_9);
      else
        VAR_33 = VAR_12;

      if (VAR_33 != VAR_11
          && VAR_33 != VAR_10)
        {
          VAR_26 = FUNC_18(&VAR_21, VAR_13->sdb,
                                            VAR_2);
        }
      else
        {
          VAR_26 =FUNC_18(&VAR_21, VAR_13->sdb,
                                         VAR_3);
        }

      if (!VAR_26)
        VAR_26 = FUNC_14(VAR_21, "isd", VAR_13->wc_id, VAR_32,
                                             VAR_24);

      if (!VAR_26)
        VAR_26 = FUNC_21(VAR_21);


      if (VAR_26)
        break;


      VAR_26 = FUNC_3(VAR_13, VAR_32, VAR_24,
                                   VAR_19);

      if (VAR_26)
        break;


      VAR_26 = FUNC_5(VAR_13, VAR_32, VAR_24,
                                     VAR_19);

      if (VAR_26)
        break;

      FUNC_0(FUNC_20(&VAR_22, VAR_20));
    }
  FUNC_12(VAR_23);

  FUNC_0(FUNC_8(VAR_26, FUNC_19(VAR_20)));

  FUNC_0(FUNC_2(VAR_13->sdb, VAR_18, VAR_19));

  if (VAR_17)
    FUNC_0(FUNC_22(VAR_13, VAR_16 ,
                                              VAR_17, VAR_19));

  return VAR_7;
}
