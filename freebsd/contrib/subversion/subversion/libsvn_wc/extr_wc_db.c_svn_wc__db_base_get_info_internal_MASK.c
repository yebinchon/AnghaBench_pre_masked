
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_wc__db_lock_t ;
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
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_6 (int *,int,int,int,int,int *) ;
 int FUNC_7 (TYPE_1__*,char const*,int *) ;
 int VAR_7 ;
 int FUNC_8 (scalar_t__*,int *,char const**,int *,int ,int,int,int *) ;
 int VAR_8 ;
 TYPE_2__* FUNC_9 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_10 (int ,TYPE_2__*,int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_11 (int *,char*,int ,char const*) ;
 scalar_t__ FUNC_12 (int *,int) ;
 TYPE_2__* FUNC_13 (int const**,int *,int,int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int **,int *,int,int *,int *) ;
 int FUNC_17 (int *,int) ;
 char* FUNC_18 (int *,int,int *) ;
 scalar_t__ FUNC_19 (int *,int,int ) ;
 int FUNC_20 (int *,int,int ,int ) ;
 int FUNC_21 (int **,int ,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (scalar_t__*,int *) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

svn_error_t *
FUNC_24(svn_wc__db_status_t *VAR_14,
                                  svn_node_kind_t *VAR_15,
                                  svn_revnum_t *VAR_16,
                                  const char **VAR_17,
                                  apr_int64_t *VAR_18,
                                  svn_revnum_t *VAR_19,
                                  apr_time_t *VAR_20,
                                  const char **VAR_21,
                                  svn_depth_t *VAR_22,
                                  const svn_checksum_t **VAR_23,
                                  const char **VAR_24,
                                  svn_wc__db_lock_t **VAR_25,
                                  svn_boolean_t *VAR_26,
                                  apr_hash_t **VAR_27,
                                  svn_boolean_t *VAR_28,
                                  svn_wc__db_wcroot_t *VAR_29,
                                  const char *VAR_30,
                                  apr_pool_t *VAR_31,
                                  apr_pool_t *VAR_32)
{
  svn_sqlite__stmt_t *VAR_33;
  svn_boolean_t VAR_34;
  svn_error_t *VAR_35 = VAR_4;

  FUNC_1(FUNC_21(&VAR_33, VAR_29->sdb,
                                    VAR_25 ? VAR_2
                                         : VAR_1));
  FUNC_1(FUNC_11(VAR_33, "is", VAR_29->wc_id, VAR_30));
  FUNC_1(FUNC_23(&VAR_34, VAR_33));

  if (VAR_34)
    {
      svn_wc__db_status_t VAR_36 = FUNC_19(VAR_33, 2,
                                                                 VAR_7);
      svn_node_kind_t VAR_37 = FUNC_19(VAR_33, 3, VAR_6);

      if (VAR_15)
        {
          *VAR_15 = VAR_37;
        }
      if (VAR_14)
        {
          *VAR_14 = VAR_36;
        }
      FUNC_8(VAR_18, VAR_16, VAR_17,
                                  VAR_33, 0, 4, 1, VAR_31);
      FUNC_2(!VAR_18 || *VAR_18 != VAR_0);
      FUNC_2(!VAR_17 || *VAR_17);
      if (VAR_25)
        {
          *VAR_25 = FUNC_6(VAR_33, 15, 16, 17, 18, VAR_31);
        }
      if (VAR_19)
        {
          *VAR_19 = FUNC_17(VAR_33, 7);
        }
      if (VAR_20)
        {
          *VAR_20 = FUNC_14(VAR_33, 8);
        }
      if (VAR_21)
        {

          *VAR_21 = FUNC_18(VAR_33, 9, VAR_31);
        }
      if (VAR_22)
        {
          if (VAR_37 != VAR_9)
            {
              *VAR_22 = VAR_8;
            }
          else
            {
              *VAR_22 = FUNC_20(VAR_33, 10, VAR_5,
                                                     VAR_8);
            }
        }
      if (VAR_23)
        {
          if (VAR_37 != VAR_10)
            {
              *VAR_23 = ((void*)0);
            }
          else
            {
              VAR_35 = FUNC_13(VAR_23, VAR_33, 5,
                                                VAR_31);
              if (VAR_35 != ((void*)0))
                VAR_35 = FUNC_10(
                        VAR_35->apr_err, VAR_35,
                        FUNC_3("The node '%s' has a corrupt checksum value."),
                        FUNC_7(VAR_29, VAR_30,
                                               VAR_32));
            }
        }
      if (VAR_24)
        {
          if (VAR_37 != VAR_11)
            *VAR_24 = ((void*)0);
          else
            *VAR_24 = FUNC_18(VAR_33, 11, VAR_31);
        }
      if (VAR_26)
        {
          *VAR_26 = FUNC_0(VAR_33, 13);
        }
      if (VAR_27)
        {
          if (VAR_36 == VAR_13
              || VAR_36 == VAR_12)
            {
              FUNC_1(FUNC_16(VAR_27, VAR_33, 13,
                                                    VAR_31, VAR_32));
              if (*VAR_27 == ((void*)0))
                *VAR_27 = FUNC_4(VAR_31);
            }
          else
            {
              FUNC_5(FUNC_15(VAR_33, 13));
              *VAR_27 = ((void*)0);
            }
        }
      if (VAR_28)
        {

          *VAR_28 = FUNC_12(VAR_33, 14);
        }
    }
  else
    {
      VAR_35 = FUNC_10(VAR_3, ((void*)0),
                              FUNC_3("The node '%s' was not found."),
                              FUNC_7(VAR_29, VAR_30,
                                                     VAR_32));
    }


  return FUNC_9(VAR_35, FUNC_22(VAR_33));
}
