
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
struct TYPE_11__ {int len; int * data; int member_0; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
struct insert_base_baton_t {char const* repos_relpath; int revision; scalar_t__ kind; int status; scalar_t__ repos_id; } ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_11 ;
 int FUNC_2 (int ,int const*,int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct insert_base_baton_t*) ;
 int FUNC_7 (TYPE_1__*,int ,int *) ;
 int FUNC_8 (TYPE_1__*,char const*,int,scalar_t__,char const*,int ,int *) ;
 int FUNC_9 (scalar_t__*,char const**,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_10 (struct insert_base_baton_t*,TYPE_1__*,char const*,int *) ;
 int VAR_12 ;
 int FUNC_11 (int **,TYPE_1__*,char const*,int ,int *,int *) ;
 int FUNC_12 (TYPE_1__*,char const*,scalar_t__,char const*,int ,int *,int *) ;
 int VAR_13 ;
 int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 scalar_t__ VAR_14 ;
 char* FUNC_15 (char const*,int *) ;
 int FUNC_16 (int *,int,int *,int ) ;
 int FUNC_17 (int *,int,int const*,int *) ;
 int FUNC_18 (int *,int,int *,int *) ;
 int FUNC_19 (int *,char*,scalar_t__,char const*,...) ;
 void* FUNC_20 (int *,int,int *,int *) ;
 int FUNC_21 (int *,int) ;
 scalar_t__ FUNC_22 (int *,int) ;
 int FUNC_23 (int *,int) ;
 char* FUNC_24 (int *,int,int *) ;
 scalar_t__ FUNC_25 (int *,int,int ) ;
 int FUNC_26 (int **,int ,int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int*,int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int*,int *) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static svn_error_t *
FUNC_32(svn_wc__db_wcroot_t *VAR_19,
            const char *VAR_20,
            svn_revnum_t VAR_21,
            svn_revnum_t VAR_22,
            apr_time_t VAR_23,
            const char *VAR_24,
            const svn_checksum_t *VAR_25,
            apr_hash_t *VAR_26,
            svn_boolean_t VAR_27,
            svn_boolean_t VAR_28,
            const svn_skel_t *VAR_29,
            apr_pool_t *VAR_30)
{
  svn_sqlite__stmt_t *VAR_31;
  svn_sqlite__stmt_t *VAR_32;
  svn_boolean_t VAR_33;
  svn_string_t VAR_34 = { 0 };
  svn_string_t VAR_35 = { 0 };
  const char *VAR_36 = ((void*)0);
  const char *VAR_37;
  svn_wc__db_status_t VAR_38;
  svn_node_kind_t VAR_39;
  const char *VAR_40 = ((void*)0);
  svn_sqlite__stmt_t *VAR_41;
  apr_int64_t VAR_42;
  const char *VAR_43;
  int VAR_44;
  svn_wc__db_status_t VAR_45;
  svn_boolean_t VAR_46;







  FUNC_0(FUNC_9(&VAR_42, &VAR_43,
                                      VAR_19, VAR_20,
                                      VAR_30, VAR_30));


  FUNC_0(FUNC_26(&VAR_31, VAR_19->sdb,
                                    VAR_10));
  FUNC_0(FUNC_19(VAR_31, "is", VAR_19->wc_id, VAR_20));
  FUNC_0(FUNC_30(VAR_31));

  FUNC_0(FUNC_26(&VAR_32, VAR_19->sdb,
                                    VAR_9));
  FUNC_0(FUNC_19(VAR_32, "is",
                            VAR_19->wc_id, VAR_20));
  FUNC_0(FUNC_28(&VAR_33, VAR_32));



  VAR_44 = FUNC_21(VAR_31, 0);



  VAR_45 = FUNC_25(VAR_31, 3, VAR_13);
  VAR_39 = FUNC_25(VAR_31, 4, VAR_12);


  if (VAR_39 == VAR_14)
    VAR_40 = FUNC_24(VAR_31, 11, VAR_30);


  if (VAR_44 == 0)
    {
      FUNC_1(!FUNC_23(VAR_31, 1));
      FUNC_1(!FUNC_23(VAR_31, 2));


      FUNC_1(VAR_42 == FUNC_22(VAR_31, 1));
      FUNC_1(FUNC_14(VAR_43,
                            FUNC_24(VAR_31, 2, ((void*)0))) == 0);
    }

  if (VAR_45 != VAR_15)
    {





      if (VAR_33)
        VAR_34.data = FUNC_20(VAR_32, 1, &VAR_34.len,
                                                 VAR_30);
      if (VAR_34.data == ((void*)0))
        VAR_34.data = FUNC_20(VAR_31, 14, &VAR_34.len,
                                                 VAR_30);

      VAR_35.data = FUNC_20(
                                            VAR_31, 16,
                                            &VAR_35.len,
                                            VAR_30);

      if (VAR_27 && VAR_33)
        VAR_36 = FUNC_24(VAR_32, 0, VAR_30);

      VAR_46 = FUNC_21(VAR_31, 15);
    }
  else
    {
      VAR_46 = VAR_0;
      VAR_36 = ((void*)0);
    }



  FUNC_0(FUNC_27(VAR_31));
  FUNC_0(FUNC_27(VAR_32));

  if (VAR_44 > 0)
    {
      int VAR_47;

      FUNC_1(VAR_44 == FUNC_13(VAR_20));


      {
        apr_hash_t *VAR_48;
        apr_hash_index_t *VAR_49;
        FUNC_0(FUNC_11(&VAR_48, VAR_19, VAR_20, 0,
                                         VAR_30, VAR_30));

        if (VAR_48)
          for (VAR_49 = FUNC_3(VAR_30, VAR_48);
                VAR_49; VAR_49 = FUNC_4(VAR_49))
            {
              FUNC_0(FUNC_7(VAR_19, FUNC_5(VAR_49),
                                        VAR_30));
            }
      }




      FUNC_0(FUNC_26(&VAR_41, VAR_19->sdb,
                                        VAR_6));
      FUNC_0(FUNC_19(VAR_41, "is", VAR_19->wc_id, VAR_20));
      FUNC_0(FUNC_31(&VAR_47, VAR_41));

      if (VAR_47 > 1)
        {






          FUNC_0(FUNC_26(&VAR_41, VAR_19->sdb,
                                            VAR_7));

          FUNC_0(FUNC_19(VAR_41,
                                    "isd",
                                    VAR_19->wc_id,
                                    VAR_20,
                                    VAR_44));

          FUNC_0(FUNC_29(VAR_41));
        }





      if (VAR_45 != VAR_15)
        {


          FUNC_0(FUNC_8(VAR_19, VAR_20, VAR_44,
                                    VAR_42, VAR_43, VAR_21,
                                    VAR_30));
        }

      if (VAR_45 != VAR_15)
        {
          apr_hash_t *VAR_50 = ((void*)0);

          FUNC_0(FUNC_11(&VAR_50, VAR_19, VAR_20, 0,
                                           VAR_30, VAR_30));



          FUNC_0(FUNC_12(VAR_19, VAR_20,
                                      VAR_42, VAR_43, VAR_21,
                                      VAR_50, VAR_30));
        }

      if (VAR_46)
        {

          FUNC_0(FUNC_26(&VAR_41, VAR_19->sdb,
                                            VAR_2));
          FUNC_0(FUNC_19(VAR_41, "is", VAR_19->wc_id,
                                                VAR_20));

          FUNC_0(FUNC_29(VAR_41));
        }
    }


  if (*VAR_20 == '\0')
    VAR_37 = ((void*)0);
  else
    VAR_37 = FUNC_15(VAR_20, VAR_30);


  if (VAR_45 != VAR_15)
    {
      VAR_38 = (VAR_45 == VAR_16
                      ? VAR_16
                      : VAR_17);

      FUNC_0(FUNC_26(&VAR_41, VAR_19->sdb,
                                        VAR_1));

      FUNC_0(FUNC_19(VAR_41, "issisrtstrisnbn",
                                VAR_19->wc_id, VAR_20,
                                VAR_37,
                                VAR_42,
                                VAR_43,
                                VAR_21,
                                VAR_13, VAR_38,
                                VAR_40,
                                VAR_12, VAR_39,
                                VAR_22,
                                VAR_23,
                                VAR_24,
                                VAR_34.data, VAR_34.len));

      FUNC_0(FUNC_17(VAR_41, 13, VAR_25,
                                        VAR_30));
      FUNC_0(FUNC_18(VAR_41, 15, VAR_26,
                                          VAR_30));
      if (VAR_35.data != ((void*)0))
        {
          FUNC_0(FUNC_16(VAR_41, 17, VAR_35.data,
                                        VAR_35.len));
        }

      FUNC_0(FUNC_29(VAR_41));
    }
  else
    {
      struct insert_base_baton_t VAR_51;
      FUNC_6(&VAR_51);

      VAR_51.repos_id = VAR_42;
      VAR_51.status = VAR_18;
      VAR_51.kind = VAR_39;
      VAR_51.repos_relpath = VAR_43;
      VAR_51.revision = VAR_21;

      FUNC_0(FUNC_10(&VAR_51, VAR_19, VAR_20, VAR_30));

      VAR_27 = VAR_0;
    }

  if (VAR_33)
    {
      if (VAR_27 && VAR_36 != ((void*)0))
        {


          FUNC_0(FUNC_26(
                    &VAR_41, VAR_19->sdb,
                    VAR_8));
          FUNC_0(FUNC_19(VAR_41, "isss",
                                    VAR_19->wc_id, VAR_20,
                                    FUNC_15(VAR_20,
                                                        VAR_30),
                                    VAR_36));
          FUNC_0(FUNC_29(VAR_41));
        }
      else
        {

          FUNC_0(FUNC_26(&VAR_41, VAR_19->sdb,
                                            VAR_3));
          FUNC_0(FUNC_19(VAR_41, "is", VAR_19->wc_id, VAR_20));
          FUNC_0(FUNC_29(VAR_41));
        }
    }

  if (!VAR_28)
    {
      svn_sqlite__stmt_t *VAR_52;
      svn_boolean_t VAR_53 = (VAR_44 > 0
                               && (FUNC_13(VAR_20) == VAR_44));






      FUNC_0(FUNC_26(&VAR_52, VAR_19->sdb,
                                        VAR_53
                                          ? VAR_5
                                          : VAR_4));
      FUNC_0(FUNC_19(VAR_52, "is", VAR_42, VAR_43));
      FUNC_0(FUNC_29(VAR_52));
    }


  FUNC_0(FUNC_2(VAR_19->sdb, VAR_29, VAR_30));

  return VAR_11;
}
