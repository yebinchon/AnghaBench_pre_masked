
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {int * db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_t ;
typedef int svn_wc__db_status_t ;
typedef int svn_wc__db_install_data_t ;
typedef int svn_stream_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_26__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (int *,int *,char const**,int *,int *,int *) ;
 TYPE_2__* FUNC_4 (int ,int **,int *,int **,int *) ;
 char* FUNC_5 (char const*,int *) ;
 char const* FUNC_6 (char const*) ;
 int FUNC_7 (char const*,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (int ,TYPE_2__*,int ,char const*,...) ;
 TYPE_2__* FUNC_10 (TYPE_2__*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 TYPE_2__* FUNC_13 (int *,int *,int ,void*,int *) ;
 TYPE_2__* FUNC_14 (int **,char const**,char const*,int ,int *,int *) ;
 char* FUNC_15 (char const*,char const*,int *) ;
 TYPE_2__* FUNC_16 (int *,char const*,int *,int ,int ,char const*,char const*,char const*,char const*,int ,int *,int ,int *,int ,int *,int *,int *) ;
 TYPE_2__* FUNC_17 (int *,int *,int *,int *) ;
 TYPE_2__* FUNC_18 (int **,int **,int **,int **,int *,char const*,int *,int *) ;
 TYPE_2__* FUNC_19 (int*,scalar_t__*,int *,int *,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 TYPE_2__* FUNC_20 (int *,int *,int *,char const**,char const**,int *,int *,int *,int *,int *,char const*,int *,int *) ;




 TYPE_2__* FUNC_21 (char const**,int *,char const*,int *,int *) ;
 TYPE_2__* FUNC_22 (int **,int *,char const*,char const*,int ,int ,int *,int *) ;
 TYPE_2__* FUNC_23 (int **,int *,char const*,char const*,int *,int *) ;
 int * FUNC_24 (int *,int *,int *) ;
 TYPE_2__* FUNC_25 (int *,char const*,int ,void*,int *) ;
 TYPE_2__* FUNC_26 (int *,char const*,int *) ;

svn_error_t *
FUNC_27(svn_wc_context_t *VAR_11,
                       const char *VAR_12,
                       svn_stream_t *VAR_13,
                       svn_stream_t *VAR_14,
                       apr_hash_t *VAR_15,
                       apr_hash_t *VAR_16,
                       const char *VAR_17,
                       svn_revnum_t VAR_18,
                       svn_cancel_func_t VAR_19,
                       void *VAR_20,
                       apr_pool_t *VAR_21)
{
  svn_wc__db_t *VAR_22 = VAR_11->db;
  const char *VAR_23 = FUNC_5(VAR_12, VAR_21);
  svn_wc__db_status_t VAR_24;
  svn_node_kind_t VAR_25;
  const char *VAR_26;
  svn_checksum_t *VAR_27;
  svn_checksum_t *VAR_28;
  const char *VAR_29 = ((void*)0);
  svn_skel_t *VAR_30 = ((void*)0);
  svn_skel_t *VAR_31;
  const char *VAR_32;
  const char *VAR_33;
  const char *VAR_34;
  svn_revnum_t VAR_35;
  apr_time_t VAR_36;
  const char *VAR_37;
  svn_stream_t *VAR_38;
  svn_wc__db_install_data_t *VAR_39;
  svn_error_t *VAR_40;
  apr_pool_t *VAR_41 = VAR_21;

  FUNC_1(FUNC_6(VAR_12));
  FUNC_1(VAR_13 != ((void*)0));
  FUNC_1(VAR_15 != ((void*)0));


  FUNC_0(FUNC_26(VAR_22, VAR_23, VAR_41));

  VAR_40 = FUNC_19(&VAR_24, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0),
                             VAR_22, VAR_12, VAR_21, VAR_21);

  if (VAR_40 && VAR_40->apr_err != VAR_5)
    return FUNC_10(VAR_40);
  else if(VAR_40)
    FUNC_8(VAR_40);
  else
    switch (VAR_24)
      {
        case 128:
        case 130:
          break;
        default:
          return FUNC_9(VAR_1, ((void*)0),
                                   FUNC_2("Node '%s' exists."),
                                   FUNC_7(VAR_12,
                                                          VAR_21));
      }

  FUNC_0(FUNC_19(&VAR_24, &VAR_25, ((void*)0), ((void*)0), &VAR_32,
                               &VAR_33, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               VAR_22, VAR_23, VAR_21, VAR_21));

  switch (VAR_24)
    {
      case 129:
      case 131:
        break;
      case 130:
        return
          FUNC_9(VAR_6, ((void*)0),
                            FUNC_2("Can't add '%s' to a parent directory"
                              " scheduled for deletion"),
                            FUNC_7(VAR_12,
                                                   VAR_21));
      default:
        return FUNC_9(VAR_2, VAR_40,
                                 FUNC_2("Can't find parent directory's node while"
                                   " trying to add '%s'"),
                                 FUNC_7(VAR_12,
                                                        VAR_21));
    }
  if (VAR_25 != VAR_10)
    return FUNC_9(VAR_3, ((void*)0),
                             FUNC_2("Can't schedule an addition of '%s'"
                               " below a not-directory node"),
                             FUNC_7(VAR_12,
                                                    VAR_21));



  if (VAR_17 != ((void*)0))
    {



      if (!VAR_32)
        {

          FUNC_0(FUNC_20(((void*)0), ((void*)0), ((void*)0),
                                           &VAR_32, &VAR_33,
                                           ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           VAR_11->db, VAR_23,
                                           VAR_21, VAR_21));
        }
      FUNC_1(VAR_32);

      VAR_34 =
          FUNC_15(VAR_32, VAR_17, VAR_21);

      if (!VAR_34)
        return FUNC_9(VAR_4, ((void*)0),
                                 FUNC_2("Copyfrom-url '%s' has different repository"
                                   " root than '%s'"),
                                 VAR_17, VAR_32);
    }
  else
    {
      VAR_34 = ((void*)0);
      VAR_18 = VAR_7;
    }



  {
    apr_array_header_t *VAR_42;
    apr_array_header_t *VAR_43;

    FUNC_0(FUNC_4(FUNC_12(VAR_15, VAR_41),
                                 &VAR_43, ((void*)0), &VAR_42,
                                 VAR_41));


    VAR_15 = FUNC_11(VAR_42, VAR_41);


    FUNC_0(FUNC_3(&VAR_35,
                                   &VAR_36,
                                   &VAR_37,
                                   VAR_43, VAR_41, VAR_41));
  }




  if (VAR_17)
    {
      FUNC_0(FUNC_18(&VAR_38,
                                                  &VAR_39,
                                                  &VAR_28,
                                                  &VAR_27,
                                                  VAR_11->db, VAR_12,
                                                  VAR_21, VAR_21));
    }
  else
    {
      const char *VAR_44;




      FUNC_0(FUNC_21(&VAR_44,
                                             VAR_22, VAR_23,
                                             VAR_21, VAR_21));

      FUNC_0(FUNC_14(&VAR_38, &VAR_26,
                                     VAR_44, VAR_9,
                                     VAR_21, VAR_21));

      VAR_28 = ((void*)0);
      VAR_27 = ((void*)0);
    }
  FUNC_0(FUNC_13(VAR_13, VAR_38,
                           VAR_19, VAR_20, VAR_41));




  if (VAR_14)
    {
      const char *VAR_45;
      svn_stream_t *VAR_46;

      FUNC_0(FUNC_21(&VAR_45, VAR_22,
                                             VAR_12, VAR_41, VAR_41));
      FUNC_0(FUNC_14(&VAR_46, &VAR_29,
                                     VAR_45, VAR_9,
                                     VAR_41, VAR_41));
      FUNC_0(FUNC_13(VAR_14, VAR_46,
                               VAR_19, VAR_20, VAR_41));
    }



  if (VAR_17 != ((void*)0))
    {
      FUNC_0(FUNC_17(VAR_39,
                                          VAR_28,
                                          VAR_27, VAR_41));
    }
  else
    {
      VAR_28 = ((void*)0);
      VAR_27 = ((void*)0);
    }



  if (VAR_14 == ((void*)0) && VAR_17 == ((void*)0))
    VAR_29 = VAR_26;

  {
    svn_boolean_t VAR_47;




    VAR_47 = (VAR_14 == ((void*)0));






    FUNC_0(FUNC_22(&VAR_31,
                                          VAR_22, VAR_12,
                                          VAR_29,
                                          VAR_0 ,
                                          VAR_47,
                                          VAR_41, VAR_41));
    VAR_30 = FUNC_24(VAR_30, VAR_31, VAR_41);



    if (VAR_29 != ((void*)0))
      {
        FUNC_0(FUNC_23(&VAR_31, VAR_22, VAR_12,
                                             VAR_29,
                                             VAR_41, VAR_41));
        VAR_30 = FUNC_24(VAR_30, VAR_31, VAR_41);
      }
  }

  FUNC_0(FUNC_16(VAR_22, VAR_12,
                                  VAR_15,
                                  VAR_35,
                                  VAR_36,
                                  VAR_37,
                                  VAR_34,
                                  VAR_34 ? VAR_32
                                                         : ((void*)0),
                                  VAR_34 ? VAR_33 : ((void*)0),
                                  VAR_18,
                                  VAR_28,
                                  VAR_8,
                                  VAR_16,
                                  VAR_0 ,
                                  ((void*)0) ,
                                  VAR_30,
                                  VAR_41));

  return FUNC_10(FUNC_25(VAR_22, VAR_23,
                                        VAR_19, VAR_20,
                                        VAR_41));
}
