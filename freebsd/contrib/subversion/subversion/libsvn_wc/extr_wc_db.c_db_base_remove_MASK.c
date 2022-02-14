
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;


struct TYPE_35__ {int sdb; int wc_id; int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_36__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct insert_base_baton_t {char const* repos_relpath; int * target; int * checksum; int depth; int * children; int revision; scalar_t__ kind; int status; int repos_id; } ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_2__* FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (struct insert_base_baton_t*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,char const*,int *) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,char const*,int ,int *) ;
 TYPE_2__* FUNC_6 (struct insert_base_baton_t*,TYPE_1__*,char const*,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (char const*) ;
 int VAR_15 ;
 char* FUNC_8 (int ,char const*,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_11 (TYPE_2__*) ;
 scalar_t__ VAR_16 ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 char* FUNC_15 (char const*,char const*,int *) ;
 int FUNC_16 (char const**,char const**,char const*,int *) ;
 TYPE_2__* FUNC_17 (int *,char*,int ,char const*,...) ;
 int FUNC_18 (int *,int ) ;
 char* FUNC_19 (int *,int,int *) ;
 scalar_t__ FUNC_20 (int *,int,int ) ;
 TYPE_2__* FUNC_21 (int **,int ,int ) ;
 TYPE_2__* FUNC_22 (int *) ;
 TYPE_2__* FUNC_23 (scalar_t__*,int *) ;
 TYPE_2__* FUNC_24 (int *) ;
 TYPE_2__* FUNC_25 (scalar_t__*,scalar_t__*,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,scalar_t__*,TYPE_1__*,char const*,int *,int *) ;
 TYPE_2__* FUNC_26 (TYPE_1__*,char const*,int *,int *) ;
 TYPE_2__* FUNC_27 (TYPE_1__*,char const*,int,char const*,int *,int *) ;
 TYPE_2__* FUNC_28 (TYPE_1__*,char const*,scalar_t__,int *,int *,int *) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 TYPE_2__* FUNC_29 (int **,int *,int ,char const*,scalar_t__,int *,int *) ;
 TYPE_2__* FUNC_30 (int **,int *,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_31(svn_wc__db_wcroot_t *VAR_22,
               const char *VAR_23,
               svn_wc__db_t *VAR_24,
               svn_boolean_t VAR_25,
               svn_boolean_t VAR_26,
               svn_boolean_t VAR_27,
               svn_revnum_t VAR_28,
               svn_skel_t *VAR_29,
               svn_skel_t *VAR_30,
               apr_pool_t *VAR_31)
{
  svn_sqlite__stmt_t *VAR_32;
  svn_boolean_t VAR_33;
  svn_wc__db_status_t VAR_34;
  svn_revnum_t VAR_35;
  apr_int64_t VAR_36;
  const char *VAR_37;
  svn_node_kind_t VAR_38;
  svn_boolean_t VAR_39;
  int VAR_40;
  svn_node_kind_t VAR_41;
  svn_boolean_t VAR_42 = VAR_0;
  svn_boolean_t VAR_43;

  FUNC_0(FUNC_25(&VAR_34, &VAR_38, &VAR_35,
                                            &VAR_37, &VAR_36,
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            &VAR_43,
                                            VAR_22, VAR_23,
                                            VAR_31, VAR_31));


  FUNC_0(FUNC_21(&VAR_32, VAR_22->sdb,
                                    VAR_8));
  FUNC_0(FUNC_17(VAR_32, "is", VAR_22->wc_id, VAR_23));
  FUNC_0(FUNC_23(&VAR_33, VAR_32));

  if (!VAR_33)
    return FUNC_11(FUNC_22(VAR_32));

  VAR_40 = FUNC_18(VAR_32, 0);
  VAR_41 = FUNC_20(VAR_32, 4, VAR_13);

  if (VAR_40 > 0
      && VAR_40 == FUNC_7(VAR_23))
    {
      svn_wc__db_status_t VAR_44;
      VAR_44 = FUNC_20(VAR_32, 3, VAR_14);

      if (VAR_44 == VAR_17)
        {
          VAR_39 = VAR_0;
          VAR_42 = VAR_12;
        }
      else
        {
          VAR_39 = VAR_12;
        }
    }
  else
    VAR_39 = VAR_0;
  FUNC_0(FUNC_22(VAR_32));

  if (VAR_25 && VAR_40 == 0)
    {
      if (VAR_34 == VAR_20
          || VAR_34 == VAR_19)
        {
          FUNC_0(FUNC_28(VAR_22, VAR_23, VAR_12,
                                                   ((void*)0), ((void*)0),
                                                   VAR_31));
        }
      VAR_39 = VAR_12;
    }



  if (!VAR_39 && !VAR_42)
    {
      svn_skel_t *VAR_45;
      const char *VAR_46;

      VAR_46 = FUNC_8(VAR_22->abspath, VAR_23,
                                      VAR_31);
      if (VAR_41 == VAR_16)
        {
          apr_pool_t *VAR_47;
          FUNC_0(FUNC_21(&VAR_32, VAR_22->sdb,
                                            VAR_9));
          FUNC_0(FUNC_17(VAR_32, "is", VAR_22->wc_id, VAR_23));

          VAR_47 = FUNC_13(VAR_31);

          FUNC_0(FUNC_23(&VAR_33, VAR_32));

          while (VAR_33)
            {
              const char *VAR_48 = FUNC_19(VAR_32, 0, ((void*)0));
              svn_node_kind_t VAR_49 = FUNC_20(VAR_32, 1,
                                                              VAR_13);
              const char *VAR_50;
              svn_error_t *VAR_51;

              FUNC_12(VAR_47);

              VAR_50 = FUNC_8(VAR_22->abspath, VAR_48,
                                             VAR_47);

              if (VAR_49 == VAR_16)
                VAR_51 = FUNC_29(&VAR_45,
                                                  VAR_24, VAR_22->abspath,
                                                  VAR_50, VAR_0,
                                                  VAR_47, VAR_47);
              else
                VAR_51 = FUNC_30(&VAR_45,
                                                   VAR_24,
                                                   VAR_22->abspath,
                                                   VAR_50,
                                                   VAR_47, VAR_47);

              if (!VAR_51)
                VAR_51 = FUNC_2(VAR_22->sdb, VAR_45, VAR_47);
              if (VAR_51)
                return FUNC_10(VAR_51, FUNC_22(VAR_32));

              FUNC_0(FUNC_23(&VAR_33, VAR_32));
           }

          FUNC_0(FUNC_22(VAR_32));

          FUNC_0(FUNC_29(&VAR_45,
                                              VAR_24, VAR_22->abspath,
                                              VAR_46, VAR_0,
                                              VAR_31, VAR_47));
          FUNC_14(VAR_47);
        }
      else
        FUNC_0(FUNC_30(&VAR_45,
                                             VAR_24, VAR_22->abspath,
                                             VAR_46,
                                             VAR_31, VAR_31));

      FUNC_0(FUNC_2(VAR_22->sdb, VAR_45, VAR_31));
    }


  if (! VAR_39)
    {


      FUNC_0(FUNC_21(&VAR_32, VAR_22->sdb,
                                        VAR_2));
      FUNC_0(FUNC_17(VAR_32, "is", VAR_22->wc_id, VAR_23));
      FUNC_0(FUNC_24(VAR_32));
    }
  else if (! VAR_25)
    {

      FUNC_0(FUNC_21(&VAR_32, VAR_22->sdb,
                                       VAR_1));
      FUNC_0(FUNC_17(VAR_32, "is", VAR_22->wc_id, VAR_23));
      FUNC_0(FUNC_24(VAR_32));
    }




  if (!VAR_39)
    {
      apr_pool_t *VAR_52;




      FUNC_0(FUNC_21(&VAR_32, VAR_22->sdb,
                                        VAR_7));
      FUNC_0(FUNC_17(VAR_32, "isd", VAR_22->wc_id,
                                             VAR_23,
                                             FUNC_7(VAR_23)));
      FUNC_0(FUNC_23(&VAR_33, VAR_32));
      VAR_52 = FUNC_13(VAR_31);
      while (VAR_33)
        {
          const char *VAR_53;
          svn_error_t *VAR_54;

          FUNC_12(VAR_52);
          VAR_53 = FUNC_19(VAR_32, 1, VAR_52);
          VAR_54 = FUNC_4(VAR_22, VAR_53, VAR_52);
          if (VAR_54)
            return FUNC_10(VAR_54, FUNC_22(VAR_32));
          FUNC_0(FUNC_23(&VAR_33, VAR_32));
        }
      FUNC_14(VAR_52);
      FUNC_0(FUNC_22(VAR_32));
    }
  else
    {




      apr_pool_t *VAR_55;

      FUNC_0(FUNC_21(&VAR_32, VAR_22->sdb,
                                        VAR_6));
      FUNC_0(FUNC_17(VAR_32, "isd", VAR_22->wc_id,
                                VAR_23, 0));
      FUNC_0(FUNC_23(&VAR_33, VAR_32));
      VAR_55 = FUNC_13(VAR_31);
      while (VAR_33)
        {
          int VAR_56 = FUNC_18(VAR_32, 0);
          const char *VAR_57;
          const char *VAR_58;
          svn_error_t *VAR_59;

          FUNC_12(VAR_55);

          VAR_57 = FUNC_19(VAR_32, 1, VAR_55);
          VAR_58 = FUNC_19(VAR_32, 4, VAR_55);

          VAR_59 = FUNC_27(VAR_22, VAR_57,
                                                  VAR_56,
                                                  VAR_58,
                                                  ((void*)0),
                                                  VAR_55);

          if (VAR_59)
            return FUNC_10(VAR_59, FUNC_22(VAR_32));

          FUNC_0(FUNC_23(&VAR_33, VAR_32));
        }
      FUNC_14(VAR_55);
      FUNC_0(FUNC_22(VAR_32));
    }
  if (VAR_39)
    {
      FUNC_0(FUNC_21(
                    &VAR_32, VAR_22->sdb,
                    VAR_4));
      FUNC_0(FUNC_17(VAR_32, "isd", VAR_22->wc_id, VAR_23, 0));
      FUNC_0(FUNC_24(VAR_32));
    }
  else
    {
      FUNC_0(FUNC_21(&VAR_32, VAR_22->sdb,
                                        VAR_5));
      FUNC_0(FUNC_17(VAR_32, "is", VAR_22->wc_id, VAR_23));
      FUNC_0(FUNC_24(VAR_32));
    }


  FUNC_0(FUNC_21(&VAR_32, VAR_22->sdb,
                                    VAR_3));
  FUNC_0(FUNC_17(VAR_32, "is", VAR_22->wc_id, VAR_23));
  FUNC_0(FUNC_24(VAR_32));

  FUNC_0(FUNC_5(VAR_22, VAR_23, 0, VAR_31));

  if (VAR_26 || VAR_27)
    {
      struct insert_base_baton_t VAR_60;
      svn_boolean_t VAR_61 = VAR_0;

      if (VAR_43)
        {
          const char *VAR_62;
          const char *VAR_63;
          svn_error_t *VAR_64;




          FUNC_16(&VAR_62, &VAR_63, VAR_23,
                            VAR_31);

          VAR_64 = FUNC_25(((void*)0), ((void*)0), ((void*)0),
                                                  &VAR_37, &VAR_36,
                                                  ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                  ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                  VAR_22, VAR_62,
                                                  VAR_31, VAR_31);

          if (VAR_64 && VAR_64->apr_err != VAR_10)
            return FUNC_11(VAR_64);
          else if (VAR_64)
            {
              FUNC_9(VAR_64);
              VAR_61 = VAR_12;
            }
          else
            {



              VAR_37 = FUNC_15(VAR_37, VAR_63, VAR_31);
            }
        }

      if (!VAR_61)
        {
          FUNC_3(&VAR_60);

          VAR_60.repos_id = VAR_36;
          VAR_60.status = VAR_27 ? VAR_18
                                     : VAR_21;
          VAR_60.kind = VAR_38;
          VAR_60.repos_relpath = VAR_37;
          VAR_60.revision = FUNC_1(VAR_28)
                            ? VAR_28
                            : VAR_35;


          VAR_60.children = ((void*)0);
          VAR_60.depth = VAR_15;
          VAR_60.checksum = ((void*)0);
          VAR_60.target = ((void*)0);

          FUNC_0(FUNC_6(&VAR_60, VAR_22, VAR_23, VAR_31));
        }
    }

  FUNC_0(FUNC_2(VAR_22->sdb, VAR_30, VAR_31));
  if (VAR_29)
    FUNC_0(FUNC_26(VAR_22, VAR_23,
                                              VAR_29, VAR_31));

  return VAR_11;
}
