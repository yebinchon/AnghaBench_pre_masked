
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_13__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*,char const*,int *) ;
 int VAR_5 ;
 int FUNC_7 (int *,int *,char const**,int *,int ,int,int,int *) ;
 int VAR_6 ;
 TYPE_2__* FUNC_8 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_9 (int ,TYPE_2__*,int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int *,char*,int ,char const*,int) ;
 TYPE_2__* FUNC_11 (int const**,int *,int,int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int **,int *,int,int *,int *) ;
 int FUNC_15 (int *,int) ;
 char* FUNC_16 (int *,int,int *) ;
 scalar_t__ FUNC_17 (int *,int,int ) ;
 int FUNC_18 (int *,int,int ,int ) ;
 int FUNC_19 (int **,int ,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (scalar_t__*,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

svn_error_t *
FUNC_22(svn_wc__db_status_t *VAR_12,
                          svn_node_kind_t *VAR_13,
                          svn_revnum_t *VAR_14,
                          const char **VAR_15,
                          apr_int64_t *VAR_16,
                          svn_revnum_t *VAR_17,
                          apr_time_t *VAR_18,
                          const char **VAR_19,
                          svn_depth_t *VAR_20,
                          const svn_checksum_t **VAR_21,
                          const char **VAR_22,
                          svn_boolean_t *VAR_23,
                          apr_hash_t **VAR_24,
                          svn_wc__db_wcroot_t *VAR_25,
                          const char *VAR_26,
                          int VAR_27,
                          apr_pool_t *VAR_28,
                          apr_pool_t *VAR_29)
{
  svn_sqlite__stmt_t *VAR_30;
  svn_boolean_t VAR_31;
  svn_error_t *VAR_32 = VAR_2;

  FUNC_1(FUNC_19(&VAR_30, VAR_25->sdb,
                                    VAR_0));
  FUNC_1(FUNC_10(VAR_30, "isd",
                            VAR_25->wc_id, VAR_26, VAR_27));
  FUNC_1(FUNC_21(&VAR_31, VAR_30));

  if (VAR_31)
    {
      svn_wc__db_status_t VAR_33 = FUNC_17(VAR_30, 2,
                                                                 VAR_5);
      svn_node_kind_t VAR_34 = FUNC_17(VAR_30, 3, VAR_4);

      if (VAR_13)
        {
          *VAR_13 = VAR_34;
        }
      if (VAR_12)
        {
          *VAR_12 = VAR_33;

          if (VAR_27 > 0)
            FUNC_1(FUNC_5(VAR_12, *VAR_12));
        }
      FUNC_7(VAR_16, VAR_14, VAR_15,
                                  VAR_30, 0, 4, 1, VAR_28);

      if (VAR_17)
        {
          *VAR_17 = FUNC_15(VAR_30, 7);
        }
      if (VAR_18)
        {
          *VAR_18 = FUNC_12(VAR_30, 8);
        }
      if (VAR_19)
        {

          *VAR_19 = FUNC_16(VAR_30, 9, VAR_28);
        }
      if (VAR_20)
        {
          if (VAR_34 != VAR_7)
            {
              *VAR_20 = VAR_6;
            }
          else
            {
              *VAR_20 = FUNC_18(VAR_30, 10, VAR_3,
                                                     VAR_6);
            }
        }
      if (VAR_21)
        {
          if (VAR_34 != VAR_8)
            {
              *VAR_21 = ((void*)0);
            }
          else
            {
              VAR_32 = FUNC_11(VAR_21, VAR_30, 5,
                                                VAR_28);
              if (VAR_32 != ((void*)0))
                VAR_32 = FUNC_9(
                        VAR_32->apr_err, VAR_32,
                        FUNC_2("The node '%s' has a corrupt checksum value."),
                        FUNC_6(VAR_25, VAR_26,
                                               VAR_29));
            }
        }
      if (VAR_22)
        {
          if (VAR_34 != VAR_9)
            *VAR_22 = ((void*)0);
          else
            *VAR_22 = FUNC_16(VAR_30, 11, VAR_28);
        }
      if (VAR_23)
        {
          *VAR_23 = FUNC_0(VAR_30, 12);
        }
      if (VAR_24)
        {
          if (VAR_33 == VAR_11
              || VAR_33 == VAR_10)
            {
              FUNC_1(FUNC_14(VAR_24, VAR_30, 12,
                                                    VAR_28, VAR_29));
              if (*VAR_24 == ((void*)0))
                *VAR_24 = FUNC_3(VAR_28);
            }
          else
            {
              FUNC_4(FUNC_13(VAR_30, 12));
              *VAR_24 = ((void*)0);
            }
        }
    }
  else
    {
      VAR_32 = FUNC_9(VAR_1, ((void*)0),
                              FUNC_2("The node '%s' was not found."),
                              FUNC_6(VAR_25, VAR_26,
                                                     VAR_29));
    }


  return FUNC_8(VAR_32, FUNC_20(VAR_30));
}
