
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_string_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef scalar_t__ svn_filesize_t ;
struct TYPE_12__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_13__ {scalar_t__ filetype; scalar_t__ size; scalar_t__ mtime; } ;
typedef TYPE_2__ apr_finfo_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_16 ;
 int FUNC_3 (int*,int *,char const*,int,int ,void*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int*,TYPE_2__*,int *) ;
 int FUNC_8 (int*,TYPE_2__*,int *) ;
 int FUNC_9 (char const*,int ,int *) ;
 int FUNC_10 (char const*,int,int ,void*,int *) ;
 int FUNC_11 (char const*,int,int *) ;
 int FUNC_12 (char const*,int,int,int *) ;
 int FUNC_13 (char const*,int,int *) ;
 int FUNC_14 (char const*,int,int *) ;
 TYPE_1__* FUNC_15 (TYPE_2__*,char const*,int,int *) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_16 (int **,int *,char const*,int *,int *) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_17 (int *,char const*,int *,int *) ;
 int FUNC_18 (int*,int *,char const*,int,int *) ;
 int FUNC_19 (int **,int *,char const*,int *,int,int,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_20(svn_boolean_t *VAR_26,
               svn_boolean_t *VAR_27,
               svn_wc__db_t *VAR_28,
               const char *VAR_29,
               svn_wc__db_status_t VAR_30,
               svn_node_kind_t VAR_31,
               svn_node_kind_t VAR_32,
               svn_filesize_t VAR_33,
               apr_time_t VAR_34,
               svn_boolean_t VAR_35,
               svn_boolean_t VAR_36,
               svn_cancel_func_t VAR_37,
               void *VAR_38,
               apr_pool_t *VAR_39)
{
  svn_error_t *VAR_40;
  apr_finfo_t VAR_41;
  svn_node_kind_t VAR_42;







  VAR_40 = FUNC_15(&VAR_41, VAR_29,
                    VAR_4 | VAR_1
                    | VAR_3 | VAR_2
                    | VAR_14
                    | VAR_15,
                    VAR_39);

  if (VAR_40 && (FUNC_0(VAR_40->apr_err)
              || FUNC_2(VAR_40->apr_err)))
    {
      FUNC_4(VAR_40);
      VAR_42 = VAR_19;



    }
  else if (!VAR_40)
    {
      if (VAR_41.filetype == VAR_7 || VAR_41.filetype == VAR_5)
        VAR_42 = VAR_18;
      else if (VAR_41.filetype == VAR_0)
        VAR_42 = VAR_17;
      else
        VAR_42 = VAR_20;




    }
  else
    return FUNC_5(VAR_40);

  if (VAR_35)
    {

      if (VAR_32 == VAR_18 && VAR_42 == VAR_18)
        {
          FUNC_1(FUNC_11(VAR_29, VAR_16, VAR_39));
          VAR_42 = VAR_19;
        }
      else if (VAR_32 == VAR_17 && VAR_42 == VAR_17)
        {
          svn_boolean_t VAR_43;

          FUNC_1(FUNC_3(&VAR_43, VAR_28,
                                                    VAR_29, VAR_16,
                                                    VAR_37, VAR_38,
                                                    VAR_39));
          if (VAR_43)
            VAR_42 = VAR_19;
        }
    }




  if (VAR_42 != VAR_19
      && VAR_30 != VAR_25
      && VAR_30 != VAR_21
      && VAR_30 != VAR_22
      && VAR_30 != VAR_24)
    {
      if (VAR_42 == VAR_17 && VAR_31 != VAR_17)
        {
          FUNC_1(FUNC_10(VAR_29, VAR_8,
                                     VAR_37, VAR_38, VAR_39));
          VAR_42 = VAR_19;
        }
      else if (VAR_42 == VAR_18 && VAR_31 != VAR_18)
        {





            {
              FUNC_1(FUNC_11(VAR_29, VAR_8, VAR_39));
              VAR_42 = VAR_19;
            }
        }
      else if (VAR_42 == VAR_18)
        {
          svn_boolean_t VAR_44;
          apr_hash_t *VAR_45;




          FUNC_1(FUNC_16(&VAR_45, VAR_28, VAR_29,
                                                 VAR_39, VAR_39));
            {
              if (VAR_33 != VAR_9
                  && VAR_34 != 0
                  && VAR_33 == VAR_41.size
                  && VAR_34 == VAR_41.mtime)
                {
                  VAR_44 = VAR_8;
                }
              else

                FUNC_1(FUNC_18(&VAR_44,
                                                         VAR_28, VAR_29,
                                                         VAR_16, VAR_39));

              if (VAR_44)
                {

                  VAR_42 = VAR_19;
                }
              else
                {
                  if (VAR_30 == VAR_23)
                    {
                      svn_boolean_t VAR_46;
                      svn_string_t *VAR_47;

                      FUNC_1(FUNC_8(&VAR_46, &VAR_41,
                                                         VAR_39));

                      VAR_47 = FUNC_6(VAR_45,
                                                      VAR_12);
                      if (VAR_47 && !VAR_46)
                        {
                          FUNC_1(FUNC_13(VAR_29,
                                                            VAR_8,
                                                            VAR_39));
                          *VAR_27 = VAR_16;
                        }
                      else if (!VAR_47 && VAR_46)
                        {
                          FUNC_1(FUNC_14(VAR_29,
                                                             VAR_8,
                                                             VAR_39));
                          *VAR_27 = VAR_16;
                        }
                    }





                    {
                      svn_boolean_t VAR_48;
                      svn_string_t *VAR_49;

                      FUNC_1(FUNC_7(&VAR_48, &VAR_41,
                                                          VAR_39));
                      VAR_49 = FUNC_6(VAR_45,
                                                      VAR_11);
                      if (VAR_49 && !VAR_48)
                        {
                          FUNC_1(FUNC_12(VAR_29,
                                                             VAR_16, VAR_8,
                                                             VAR_39));
                          *VAR_27 = VAR_16;
                        }
                      else if (!VAR_49 && VAR_48)
                        {
                          FUNC_1(FUNC_12(VAR_29,
                                                             VAR_8, VAR_8,
                                                             VAR_39));
                          *VAR_27 = VAR_16;
                        }
                    }

                }
            }
        }
    }



  if (VAR_42 == VAR_19
      && VAR_30 != VAR_25
      && VAR_30 != VAR_21
      && VAR_30 != VAR_22
      && VAR_30 != VAR_24)
    {
      if (VAR_31 == VAR_17)
        FUNC_1(FUNC_9(VAR_29, VAR_6, VAR_39));

      if (VAR_31 == VAR_18)
        {
          svn_skel_t *VAR_50;

          FUNC_1(FUNC_19(&VAR_50, VAR_28, VAR_29,
                                                ((void*)0), VAR_36, VAR_16,
                                                VAR_39, VAR_39));
          FUNC_1(FUNC_17(VAR_28, VAR_29, VAR_50,
                                    VAR_39));
          *VAR_26 = VAR_16;
        }
      *VAR_27 = VAR_16;
    }

  return VAR_10;
}
