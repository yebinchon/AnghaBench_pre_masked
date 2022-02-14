
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_18__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (scalar_t__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_1__*,char const*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (char const*) ;
 TYPE_2__* FUNC_10 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_11 (int ,TYPE_2__*,int ,int ) ;
 TYPE_2__* FUNC_12 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_13 (int *,char*,int ,char const*) ;
 TYPE_2__* FUNC_14 (int const**,int *,int,int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int **,int *,int,int *,int *) ;
 int FUNC_19 (int *,int) ;
 char* FUNC_20 (int *,int,int *) ;
 scalar_t__ FUNC_21 (int *,int,int ) ;
 int FUNC_22 (int *,int,int ,int ) ;
 int FUNC_23 (int **,int ,int ) ;
 TYPE_2__* FUNC_24 (int *) ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_27 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_28(svn_wc__db_status_t *VAR_12,
                              svn_node_kind_t *VAR_13,
                              svn_revnum_t *VAR_14,
                              apr_time_t *VAR_15,
                              const char **VAR_16,
                              svn_depth_t *VAR_17,
                              const svn_checksum_t **VAR_18,
                              const char **VAR_19,
                              svn_boolean_t *VAR_20,
                              apr_hash_t **VAR_21,
                              svn_wc__db_t *VAR_22,
                              const char *VAR_23,
                              apr_pool_t *VAR_24,
                              apr_pool_t *VAR_25)
{
  svn_wc__db_wcroot_t *VAR_26;
  const char *VAR_27;
  svn_sqlite__stmt_t *VAR_28;
  svn_boolean_t VAR_29;
  svn_error_t *VAR_30 = ((void*)0);
  int VAR_31;
  svn_wc__db_status_t VAR_32;
  svn_node_kind_t VAR_33;

  FUNC_2(FUNC_9(VAR_23));

  FUNC_1(FUNC_27(&VAR_26, &VAR_27, VAR_22,
                                                VAR_23,
                                                VAR_25, VAR_25));
  FUNC_3(VAR_26);



  FUNC_1(FUNC_23(&VAR_28, VAR_26->sdb,
                                    VAR_0));
  FUNC_1(FUNC_13(VAR_28, "is", VAR_26->wc_id, VAR_27));
  FUNC_1(FUNC_25(&VAR_29, VAR_28));

  if (!VAR_29)
    {
      return FUNC_11(VAR_1,
                               FUNC_24(VAR_28),
                               FUNC_4("The node '%s' was not found."),
                               FUNC_8(VAR_26,
                                                      VAR_27,
                                                      VAR_25));
    }

  VAR_31 = FUNC_15(VAR_28, 0);
  VAR_32 = FUNC_21(VAR_28, 3, VAR_4);

  if (VAR_31 > 0 && VAR_32 == VAR_9)
    {
      FUNC_1(FUNC_26(VAR_28));

      VAR_31 = FUNC_15(VAR_28, 0);
      VAR_32 = FUNC_21(VAR_28, 3, VAR_4);
    }

  VAR_33 = FUNC_21(VAR_28, 4, VAR_3);

  if (VAR_12)
    {
      if (VAR_31 > 0)
        {
          VAR_30 = FUNC_10(VAR_30,
                                         FUNC_7(
                                                    VAR_12,
                                                    VAR_32));
        }
      else
        *VAR_12 = VAR_32;
    }
  if (VAR_13)
    {
      *VAR_13 = VAR_33;
    }
  if (VAR_14)
    {
      *VAR_14 = FUNC_19(VAR_28, 8);
    }
  if (VAR_15)
    {
      *VAR_15 = FUNC_16(VAR_28, 9);
    }
  if (VAR_16)
    {
      *VAR_16 = FUNC_20(VAR_28, 10,
                                                VAR_24);
    }
  if (VAR_17)
    {
      if (VAR_33 != VAR_6)
        {
          *VAR_17 = VAR_5;
        }
      else
        {
          *VAR_17 = FUNC_22(VAR_28, 11, VAR_2,
                                                 VAR_5);
        }
    }
  if (VAR_18)
    {
      if (VAR_33 != VAR_7)
        {
          *VAR_18 = ((void*)0);
        }
      else
        {
          svn_error_t *VAR_34;
          VAR_34 = FUNC_14(VAR_18, VAR_28, 6, VAR_24);

          if (VAR_34 != ((void*)0))
            {
              if (VAR_30)
                VAR_30 = FUNC_10(
                         VAR_30,
                         FUNC_11(
                               VAR_30->apr_err, VAR_34,
                              FUNC_4("The node '%s' has a corrupt checksum value."),
                              FUNC_8(VAR_26, VAR_27,
                                                     VAR_25)));
              else
                VAR_30 = VAR_34;
            }
        }
    }
  if (VAR_19)
    {
      if (VAR_33 != VAR_8)
        *VAR_19 = ((void*)0);
      else
        *VAR_19 = FUNC_20(VAR_28, 12, VAR_24);
    }
  if (VAR_20)
    {
      *VAR_20 = FUNC_0(VAR_28, 14);
    }
  if (VAR_21)
    {
      if (VAR_32 == VAR_11
          || VAR_32 == VAR_10)
        {
          FUNC_1(FUNC_18(VAR_21, VAR_28, 14,
                                                VAR_24, VAR_25));
          if (*VAR_21 == ((void*)0))
            *VAR_21 = FUNC_5(VAR_24);
        }
      else
        {
          FUNC_6(FUNC_17(VAR_28, 14));
          *VAR_21 = ((void*)0);
        }
    }

  return FUNC_12(
            FUNC_10(VAR_30,
                                     FUNC_24(VAR_28)));
}
