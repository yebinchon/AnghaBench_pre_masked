
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sdb; int wc_id; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int const*,int *) ;
 int FUNC_4 (TYPE_1__*,char const*,int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int,int *) ;
 int FUNC_6 (TYPE_1__*,char const*,int ,int *,int ,int,int ,int,int *) ;
 int FUNC_7 (TYPE_1__*,char const*,int *) ;
 int FUNC_8 (char const*) ;
 int * FUNC_9 (int ,int *,int ,int ) ;
 int FUNC_10 (int *,char*,int ,char const*,...) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int **,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__*,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int*,int *) ;
 int FUNC_17 (TYPE_1__*,char const*,int const*,int *) ;

svn_error_t *
FUNC_18(svn_wc__db_wcroot_t *VAR_8,
                                 const char *VAR_9,
                                 svn_boolean_t VAR_10,
                                 const svn_skel_t *VAR_11,
                                 const svn_skel_t *VAR_12,
                                 apr_pool_t *VAR_13)
{
  svn_sqlite__stmt_t *VAR_14;
  svn_boolean_t VAR_15;
  int VAR_16 = -1;



  FUNC_0(FUNC_12(&VAR_14, VAR_8->sdb,
                                    VAR_4));
  FUNC_0(FUNC_10(VAR_14, "is", VAR_8->wc_id, VAR_9));
  FUNC_0(FUNC_14(&VAR_15, VAR_14));
  if (VAR_15)
    VAR_16 = FUNC_11(VAR_14, 0);
  FUNC_0(FUNC_13(VAR_14));

  if (VAR_15)
    {
      if (VAR_16 == FUNC_8(VAR_9))
        return FUNC_9(VAR_5, ((void*)0),
                             FUNC_2("Modification of '%s' already exists"),
                             FUNC_7(VAR_8,
                                                    VAR_9,
                                                    VAR_13));




      FUNC_0(FUNC_12(&VAR_14, VAR_8->sdb,
                                        VAR_2));
      FUNC_0(FUNC_10(VAR_14, "isdd", VAR_8->wc_id, VAR_9,
                                VAR_16, FUNC_8(VAR_9)));
      FUNC_0(FUNC_15(VAR_14));
    }
  else
    {
      int VAR_17;

      VAR_16 = FUNC_8(VAR_9);


      FUNC_0(FUNC_4(VAR_8, VAR_9,
                                            VAR_13));


      FUNC_0(FUNC_12(
                        &VAR_14, VAR_8->sdb,
                        VAR_3));



      FUNC_0(FUNC_10(VAR_14, "isdd",
                                VAR_8->wc_id, VAR_9,
                                0, VAR_16));
      FUNC_0(FUNC_16(&VAR_17, VAR_14));
      FUNC_1(VAR_17 > 0);

      if (!VAR_10)
        FUNC_0(FUNC_5(VAR_8, VAR_9,
                                                VAR_16, VAR_13));


      FUNC_0(FUNC_6(VAR_8, VAR_9,
                            VAR_1, ((void*)0), VAR_6,
                            VAR_16, VAR_0, VAR_16,
                            VAR_13));
    }

  if (VAR_11)
    FUNC_0(FUNC_17(VAR_8, VAR_9,
                                              VAR_11, VAR_13));

  FUNC_0(FUNC_3(VAR_8->sdb, VAR_12, VAR_13));

  return VAR_7;
}
