
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int abspath; int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef void* svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_revnum_t ;
typedef void* svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,char const*) ;
 char* FUNC_7 (int ,char const*,int *) ;
 int FUNC_8 (char const*,int *) ;
 char* FUNC_9 (int ,char const*) ;
 int * FUNC_10 (int *,int ) ;
 int * FUNC_11 (int ,int *,int ,int ) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *,char*,int ,char const*) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 char* FUNC_16 (int *,int,int *) ;
 void* FUNC_17 (int *,int,int ) ;
 int FUNC_18 (int **,int ,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (scalar_t__*,int *) ;
 int FUNC_21 (char const**,char const**,TYPE_1__*,int ,int *) ;
 int FUNC_22 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_23(svn_wc__db_status_t *VAR_4,
                         svn_node_kind_t *VAR_5,
                         const char **VAR_6,
                         const char **VAR_7,
                         const char **VAR_8,
                         const char **VAR_9,
                         svn_revnum_t *VAR_10,
                         svn_revnum_t *VAR_11,
                         svn_wc__db_t *VAR_12,
                         const char *VAR_13,
                         const char *VAR_14,
                         apr_pool_t *VAR_15,
                         apr_pool_t *VAR_16)
{
  svn_wc__db_wcroot_t *VAR_17;
  const char *VAR_18;
  svn_sqlite__stmt_t *VAR_19;
  svn_boolean_t VAR_20;
  svn_error_t *VAR_21 = ((void*)0);
  FUNC_1(FUNC_5(VAR_13));

  if (! VAR_14)
    VAR_14 = FUNC_4(VAR_13, VAR_16);

  FUNC_0(FUNC_22(&VAR_17, &VAR_18, VAR_12,
                              VAR_14, VAR_16, VAR_16));
  FUNC_2(VAR_17);

  FUNC_1(FUNC_6(VAR_17->abspath, VAR_13));

  VAR_18 = FUNC_9(VAR_17->abspath, VAR_13);

  FUNC_0(FUNC_18(&VAR_19, VAR_17->sdb,
                                    VAR_0));
  FUNC_0(FUNC_13(VAR_19, "is", VAR_17->wc_id, VAR_18));
  FUNC_0(FUNC_20(&VAR_20, VAR_19));

  if (VAR_20)
    {
      if (VAR_4)
        *VAR_4 = FUNC_17(VAR_19, 0, VAR_3);

      if (VAR_5)
        *VAR_5 = FUNC_17(VAR_19, 1, VAR_2);

      if (VAR_6)
        {
          const char *VAR_22 = FUNC_16(VAR_19, 2, ((void*)0));

          *VAR_6 = FUNC_7(VAR_17->abspath,
                                                VAR_22, VAR_15);
        }

      if (VAR_7 || VAR_8)
        {
          apr_int64_t VAR_23;

          VAR_23 = FUNC_14(VAR_19, 3);

          VAR_21 = FUNC_10(
                        VAR_21,
                        FUNC_21(VAR_7, VAR_8,
                                                    VAR_17, VAR_23,
                                                    VAR_15));
        }

      if (VAR_9)
        *VAR_9 = FUNC_16(VAR_19, 4,
                                                          VAR_15);

      if (VAR_10)
        *VAR_10 = FUNC_15(VAR_19, 5);

      if (VAR_11)
        *VAR_11 = FUNC_15(VAR_19, 6);
    }
  else
    {
      VAR_21 = FUNC_11(VAR_1, ((void*)0),
                              FUNC_3("The node '%s' is not an external."),
                              FUNC_8(VAR_13,
                                                     VAR_16));
    }

  return FUNC_12(
                FUNC_10(VAR_21, FUNC_19(VAR_19)));
}
