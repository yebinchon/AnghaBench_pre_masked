
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef void* svn_wc__db_status_t ;
typedef int svn_wc__db_lock_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_filesize_t ;
struct TYPE_18__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef void* svn_depth_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (TYPE_2__**,int *,int,int ) ;
 int FUNC_5 (void**,void*) ;
 int VAR_10 ;
 int FUNC_6 (int *,int) ;
 int VAR_11 ;
 int * FUNC_7 (int *,int,int,int,int,int *) ;
 int FUNC_8 (TYPE_1__*,char const*,int *) ;
 int VAR_12 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int *,int *,char const**,int *,int,int,int,int *) ;
 void* VAR_13 ;
 TYPE_2__* FUNC_11 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_12 (scalar_t__,int *,int ,int ) ;
 TYPE_2__* FUNC_13 (TYPE_2__*,int ,char const*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 TYPE_2__* FUNC_14 (int *,char*,int ,char const*) ;
 int FUNC_15 (int const**,int *,int,int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int) ;
 scalar_t__ FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int) ;
 char* FUNC_20 (int *,int,int *) ;
 TYPE_2__* FUNC_21 (int **,int ,int ) ;
 int FUNC_22 (int *) ;
 TYPE_2__* FUNC_23 (int*,int *) ;
 void* VAR_18 ;

__attribute__((used)) static svn_error_t *
FUNC_24(svn_wc__db_status_t *VAR_19,
          svn_node_kind_t *VAR_20,
          svn_revnum_t *VAR_21,
          const char **VAR_22,
          apr_int64_t *VAR_23,
          svn_revnum_t *VAR_24,
          apr_time_t *VAR_25,
          const char **VAR_26,
          svn_depth_t *VAR_27,
          const svn_checksum_t **VAR_28,
          const char **VAR_29,
          const char **VAR_30,
          apr_int64_t *VAR_31,
          svn_revnum_t *VAR_32,
          svn_wc__db_lock_t **VAR_33,
          svn_filesize_t *VAR_34,
          apr_time_t *VAR_35,
          const char **VAR_36,
          svn_boolean_t *VAR_37,
          svn_boolean_t *VAR_38,
          svn_boolean_t *VAR_39,
          svn_boolean_t *VAR_40,
          svn_boolean_t *VAR_41,
          svn_boolean_t *VAR_42,
          svn_boolean_t *VAR_43,
          svn_wc__db_wcroot_t *VAR_44,
          const char *VAR_45,
          apr_pool_t *VAR_46,
          apr_pool_t *VAR_47)
{
  svn_sqlite__stmt_t *VAR_48;
  svn_sqlite__stmt_t *VAR_49;
  svn_boolean_t VAR_50;
  svn_boolean_t VAR_51;
  svn_error_t *VAR_52 = ((void*)0);



  FUNC_1(FUNC_21(&VAR_48, VAR_44->sdb,
                                    VAR_33 ? VAR_4
                                         : VAR_3));
  FUNC_1(FUNC_14(VAR_48, "is", VAR_44->wc_id, VAR_45));
  FUNC_1(FUNC_23(&VAR_50, VAR_48));

  if (VAR_36 || VAR_37 || VAR_40)
    {
      FUNC_1(FUNC_21(&VAR_49, VAR_44->sdb,
                                        VAR_2));
      FUNC_1(FUNC_14(VAR_49, "is", VAR_44->wc_id, VAR_45));
      FUNC_1(FUNC_23(&VAR_51, VAR_49));
    }
  else
    {
      VAR_51 = VAR_0;
      VAR_49 = ((void*)0);
    }

  if (VAR_50)
    {
      int VAR_53;
      svn_node_kind_t VAR_54;

      VAR_53 = FUNC_16(VAR_48, 0);
      VAR_54 = FUNC_4(&VAR_52, VAR_48, 4, VAR_11);

      if (VAR_19)
        {
          *VAR_19 = FUNC_4(&VAR_52, VAR_48, 3, VAR_12);

          if (VAR_53 != 0)
            VAR_52 = FUNC_11(VAR_52,
                                           FUNC_5(VAR_19,
                                                                     *VAR_19));
        }
      if (VAR_20)
        {
          *VAR_20 = VAR_54;
        }
      if (VAR_53 != 0)
        {
          if (VAR_23)
            *VAR_23 = VAR_1;
          if (VAR_21)
            *VAR_21 = VAR_7;
          if (VAR_22)



            *VAR_22 = ((void*)0);
        }
      else
        {




          FUNC_10(VAR_23, VAR_21, VAR_22,
                                      VAR_48, 1, 5, 2, VAR_46);
        }
      if (VAR_24)
        {
          *VAR_24 = FUNC_19(VAR_48, 8);
        }
      if (VAR_25)
        {
          *VAR_25 = FUNC_17(VAR_48, 9);
        }
      if (VAR_26)
        {
          *VAR_26 = FUNC_20(VAR_48, 10,
                                                    VAR_46);
        }
      if (VAR_35)
        {
          *VAR_35 = FUNC_17(VAR_48, 13);
        }
      if (VAR_27)
        {
          if (VAR_54 != VAR_14)
            *VAR_27 = VAR_13;
          else if (FUNC_18(VAR_48, 11))
            *VAR_27 = VAR_13;
          else
            *VAR_27 = FUNC_4(&VAR_52, VAR_48, 11, VAR_10);
        }
      if (VAR_28)
        {
          if (VAR_54 != VAR_15)
            {
              *VAR_28 = ((void*)0);
            }
          else
            {

              VAR_52 = FUNC_11(
                        VAR_52, FUNC_15(VAR_28, VAR_48, 6,
                                                         VAR_46));
            }
        }
      if (VAR_34)
        {
          *VAR_34 = FUNC_6(VAR_48, 7);
        }
      if (VAR_29)
        {
          if (VAR_54 != VAR_16)
            *VAR_29 = ((void*)0);
          else
            *VAR_29 = FUNC_20(VAR_48, 12, VAR_46);
        }
      if (VAR_36)
        {
          if (VAR_51)
            *VAR_36 = FUNC_20(VAR_49, 0, VAR_46);
          else
            *VAR_36 = ((void*)0);
        }
      if (VAR_53 == 0)
        {
          if (VAR_31)
            *VAR_31 = VAR_1;
          if (VAR_32)
            *VAR_32 = VAR_7;
          if (VAR_30)
            *VAR_30 = ((void*)0);
        }
      else
        {
          FUNC_10(VAR_31,
                                      VAR_32,
                                      VAR_30,
                                      VAR_48, 1, 5, 2, VAR_46);
        }
      if (VAR_40)
        {
          *VAR_40 = VAR_51 && !FUNC_18(VAR_49, 1);
        }
      if (VAR_39)
        {
          *VAR_39 = FUNC_0(VAR_48, 14);
        }
      if (VAR_37)
        {
          if (VAR_51)
            {
              *VAR_37 =
                 !FUNC_18(VAR_49, 2);
            }
          else
            *VAR_37 = VAR_0;
        }

      if (VAR_33)
        {
          if (VAR_53 != 0)
            *VAR_33 = ((void*)0);
          else
            *VAR_33 = FUNC_7(VAR_48, 17, 18, 19, 20, VAR_46);
        }

      if (VAR_43)
        *VAR_43 = (VAR_53 != 0);

      if (VAR_38)
        {
          *VAR_38 = ((VAR_53 > 0)
                      && (VAR_53 == FUNC_9(VAR_45)));
        }

      if (VAR_41 || VAR_42)
        {
          if (VAR_42)
            *VAR_42 = VAR_0;

          while (!VAR_52 && VAR_53 != 0)
            {
              VAR_52 = FUNC_23(&VAR_50, VAR_48);

              if (VAR_52 || !VAR_50)
                break;

              VAR_53 = FUNC_16(VAR_48, 0);

              if (VAR_42)
                {
                  if (VAR_53 > 0)
                    *VAR_42 = VAR_9;

                  if (!VAR_41)
                   break;
                }
            }

          if (VAR_41)
            *VAR_41 = (VAR_53 == 0);
        }
    }
  else if (VAR_51)
    {


      if (FUNC_18(VAR_49, 2))
          VAR_52 = FUNC_12(VAR_5, ((void*)0),
                                  FUNC_3("Corrupt data for '%s'"),
                                  FUNC_8(VAR_44, VAR_45,
                                                         VAR_47));






      FUNC_2(VAR_37);

      if (VAR_19)
        *VAR_19 = VAR_18;
      if (VAR_20)
        *VAR_20 = VAR_17;
      if (VAR_21)
        *VAR_21 = VAR_7;
      if (VAR_22)
        *VAR_22 = ((void*)0);
      if (VAR_23)
        *VAR_23 = VAR_1;
      if (VAR_24)
        *VAR_24 = VAR_7;
      if (VAR_25)
        *VAR_25 = 0;
      if (VAR_27)
        *VAR_27 = VAR_13;
      if (VAR_28)
        *VAR_28 = ((void*)0);
      if (VAR_29)
        *VAR_29 = ((void*)0);
      if (VAR_30)
        *VAR_30 = ((void*)0);
      if (VAR_31)
        *VAR_31 = VAR_1;
      if (VAR_32)
        *VAR_32 = VAR_7;
      if (VAR_33)
        *VAR_33 = ((void*)0);
      if (VAR_34)
        *VAR_34 = 0;
      if (VAR_35)
        *VAR_35 = 0;
      if (VAR_36)
        *VAR_36 = FUNC_20(VAR_49, 0, VAR_46);
      if (VAR_38)
        *VAR_38 = VAR_0;
      if (VAR_39)
        *VAR_39 = VAR_0;
      if (VAR_40)
        *VAR_40 = VAR_0;
      if (VAR_37)
        *VAR_37 = VAR_9;
      if (VAR_41)
        *VAR_41 = VAR_0;
      if (VAR_42)
        *VAR_42 = VAR_0;
      if (VAR_43)
        *VAR_43 = VAR_0;
    }
  else
    {
      VAR_52 = FUNC_12(VAR_6, ((void*)0),
                              FUNC_3("The node '%s' was not found."),
                              FUNC_8(VAR_44, VAR_45,
                                                     VAR_47));
    }

  if (VAR_49 != ((void*)0))
    VAR_52 = FUNC_11(VAR_52, FUNC_22(VAR_49));

  if (VAR_52 && VAR_52->apr_err != VAR_6)
    VAR_52 = FUNC_13(VAR_52, FUNC_3("Error reading node '%s'"),
                                VAR_45);

  FUNC_1(FUNC_11(VAR_52, FUNC_22(VAR_48)));

  return VAR_8;
}
