
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_io_dirent2_t ;
typedef int svn_error_t ;
typedef int * (* svn_cancel_func_t ) (void*) ;
typedef int svn_boolean_t ;
struct svn_wc__db_info_t {scalar_t__ status; scalar_t__ kind; int recorded_time; int recorded_size; int conflicted; int file_external; scalar_t__ op_root; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 struct svn_wc__db_info_t* FUNC_7 (int *) ;
 int * FUNC_8 (int **,scalar_t__*,int *,char const*,char const*,char const*,int ,int ,int const*,int ,int ,int * (*) (void*),void*,int *,int *) ;
 int * FUNC_9 (int *,char const*,char const*,char const*,char const*,int ,int ,int ,int *,int ,int ,int * (*) (void*),void*,int *,int *,int *) ;
 int FUNC_10 (void*,TYPE_1__*,int *) ;
 char* FUNC_11 (char const*,int *) ;
 char* FUNC_12 (char const*,char const*,int *) ;
 int FUNC_13 (char const*,int *) ;
 int * FUNC_14 (int ,int *,int ,int ) ;
 int * FUNC_15 (int *,char const*) ;
 int FUNC_16 (int *,char const*,int *) ;
 int * FUNC_17 (int **,char const*,int ,int *,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (int **,int *,char const*,int *,int *) ;
 int * FUNC_22 (int *,char const*,char const*,char const*,int ,int *,int *) ;
 int * FUNC_23 (int *,char const*,char const*,int ,int *) ;
 int * FUNC_24 (int **,int **,int *,char const*,int ,int *,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int * FUNC_25 (int *,char const*,int *,int *) ;
 int * FUNC_26 (int *,int *,int *) ;
 int * FUNC_27 (int *,char const*,int * (*) (void*),void*,int *) ;
 TYPE_1__* FUNC_28 (char const*,int ,int *) ;
 scalar_t__ FUNC_29 (char const*,int *) ;
 int VAR_15 ;

__attribute__((used)) static svn_error_t *
FUNC_30(svn_wc__db_t *VAR_16,
                   const char *VAR_17,
                   const char *VAR_18,
                   const char *VAR_19,
                   const char *VAR_20,
                   svn_boolean_t VAR_21,
                   svn_boolean_t VAR_22,
                   const svn_io_dirent2_t *VAR_23,
                   svn_cancel_func_t VAR_24,
                   void *VAR_25,
                   svn_wc_notify_func2_t VAR_26,
                   void *VAR_27,
                   apr_pool_t *VAR_28)
{
  svn_skel_t *VAR_29 = ((void*)0);
  const char *VAR_30 = FUNC_11(VAR_18, VAR_28);
  apr_hash_t *VAR_31;
  apr_hash_t *VAR_32;
  apr_hash_t *VAR_33;
  apr_hash_index_t *VAR_34;
  svn_node_kind_t VAR_35;
  apr_pool_t *VAR_36;


  if (!VAR_21)
    {
      FUNC_0(FUNC_8(&VAR_29, &VAR_35,
                             VAR_16, VAR_17, VAR_18,
                             VAR_20,
                             VAR_0 ,
                             VAR_0 ,
                             VAR_23, VAR_3, 0,
                             VAR_24, VAR_25,
                             VAR_28, VAR_28));
    }



  FUNC_0(FUNC_22(VAR_16, VAR_17, VAR_18,
                             VAR_19, VAR_22, VAR_29,
                             VAR_28));

  if (VAR_26)
    {
      svn_wc_notify_t *VAR_37
        = FUNC_28(VAR_18, VAR_15,
                               VAR_28);
      VAR_37->kind = VAR_6;


      if (VAR_29 != ((void*)0))
        FUNC_0(FUNC_27(VAR_16, VAR_30,
                               VAR_24, VAR_25, VAR_28));

      (*VAR_26)(VAR_27, VAR_37, VAR_28);
    }

  if (!VAR_21 && VAR_35 == VAR_6)



    FUNC_0(FUNC_17(&VAR_33, VAR_17, VAR_5,
                                VAR_28, VAR_28));
  else
    VAR_33 = ((void*)0);


  VAR_36 = FUNC_19(VAR_28);
  FUNC_0(FUNC_24(&VAR_31,
                                        &VAR_32,
                                        VAR_16, VAR_17,
                                        VAR_0 ,
                                        VAR_28, VAR_36));
  for (VAR_34 = FUNC_4(VAR_28, VAR_31);
       VAR_34;
       VAR_34 = FUNC_5(VAR_34))
    {
      const char *VAR_38, *VAR_39, *VAR_40;
      struct svn_wc__db_info_t *VAR_41;

      FUNC_18(VAR_36);

      if (VAR_24)
        FUNC_0(VAR_24(VAR_25));

      VAR_38 = FUNC_6(VAR_34);
      VAR_41 = FUNC_7(VAR_34);
      VAR_39 = FUNC_12(VAR_17, VAR_38, VAR_36);
      VAR_40 = FUNC_12(VAR_18, VAR_38, VAR_36);

      if (VAR_41->op_root)
        FUNC_0(FUNC_23(VAR_16,
                                                  VAR_39,
                                                  VAR_40,
                                                  VAR_22,
                                                  VAR_28));

      if (VAR_41->status == VAR_12
          || VAR_41->status == VAR_8)
        {

          if (VAR_41->kind == VAR_7)
            {


              if (!VAR_41->file_external)
                FUNC_0(FUNC_9(VAR_16,
                                            VAR_39,
                                            VAR_40,
                                            VAR_19,
                                            VAR_20,
                                            VAR_21, VAR_41->conflicted,
                                            VAR_22,
                                            VAR_33
                                              ? FUNC_15(VAR_33,
                                                              VAR_38)
                                              : ((void*)0),
                                            VAR_41->recorded_size,
                                            VAR_41->recorded_time,
                                            VAR_24, VAR_25,
                                            ((void*)0), ((void*)0),
                                            VAR_36));
            }
          else if (VAR_41->kind == VAR_6)
            FUNC_0(FUNC_30(VAR_16,
                                       VAR_39, VAR_40,
                                       VAR_19, VAR_20,
                                       VAR_21, VAR_22,
                                       VAR_33
                                              ? FUNC_15(VAR_33,
                                                              VAR_38)
                                              : ((void*)0),
                                       VAR_24, VAR_25, ((void*)0), ((void*)0),
                                       VAR_36));
          else
            return FUNC_14(VAR_1, ((void*)0),
                                     FUNC_2("cannot handle node kind for '%s'"),
                                     FUNC_13(VAR_39,
                                                            VAR_28));
        }
      else if (VAR_41->status == VAR_9
          || VAR_41->status == VAR_13
          || VAR_41->status == VAR_10)
        {


          FUNC_0(FUNC_22(VAR_16, VAR_39,
                                     VAR_40, VAR_19,
                                     VAR_22, ((void*)0), VAR_36));



        }
      else if (VAR_41->status == VAR_11)
        {


          return FUNC_14(VAR_2, ((void*)0),
                                   FUNC_2("Cannot handle status of '%s'"),
                                   FUNC_13(VAR_39,
                                                          VAR_36));
        }
      else
        {
          FUNC_1(VAR_41->status == VAR_14);

          return FUNC_14(VAR_2, ((void*)0),
                                   FUNC_2("Cannot copy '%s' excluded by server"),
                                   FUNC_13(VAR_39,
                                                          VAR_36));
        }

      if (VAR_33
          && (VAR_41->status == VAR_12
              || VAR_41->status == VAR_8))
        {

          FUNC_16(VAR_33, VAR_38, ((void*)0));
        }
    }



  if (VAR_33 && FUNC_3(VAR_33))
    {
      apr_hash_t *VAR_42;

      FUNC_0(FUNC_21(&VAR_42, VAR_16,
                                                   VAR_17, VAR_28,
                                                   VAR_28));

      VAR_29 = ((void*)0);

      for (VAR_34 = FUNC_4(VAR_28, VAR_33); VAR_34;
           VAR_34 = FUNC_5(VAR_34))
        {
          const char *VAR_43 = FUNC_6(VAR_34);
          const char *VAR_44, *VAR_45;
          svn_skel_t *VAR_46;

          if (FUNC_29(VAR_43, VAR_36))
            continue;

          if (VAR_24)
            FUNC_0(VAR_24(VAR_25));

          FUNC_18(VAR_36);
          VAR_44 = FUNC_12(VAR_17, VAR_43, VAR_36);
          VAR_45 = FUNC_12(VAR_18, VAR_43, VAR_36);

          if (VAR_42 &&
              FUNC_15(VAR_42, VAR_44))
            continue;

          FUNC_0(FUNC_8(&VAR_46, ((void*)0), VAR_16, VAR_44,
                                 VAR_45, VAR_20,
                                 VAR_5 , VAR_5 ,
                                 ((void*)0), VAR_3, 0,
                                 VAR_24, VAR_25,
                                 VAR_28, VAR_36));

          if (VAR_46)
            VAR_29 = FUNC_26(VAR_29, VAR_46, VAR_28);
        }
      FUNC_0(FUNC_25(VAR_16, VAR_18, VAR_29, VAR_36));
    }

  FUNC_20(VAR_36);

  return VAR_4;
}
