
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_wc_operation_t ;
typedef int svn_wc_notify_func2_t ;
typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc_conflict_choice_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_wc__db_t ;
typedef int const svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int *,int *) ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 (scalar_t__*,int *,int *,int *,int*,int *,char const*,int const*,int *,int *) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,char const**,int *,char const*,int const*,int *,int *) ;
 int FUNC_8 (int *,char const*,char const*,int,int ,void*,int *) ;
 int FUNC_9 (int *,char const*,int,int,int,int *,int *) ;
 int * FUNC_10 (int *,char const*,int ,void*,int *) ;
 int FUNC_11 (int const**,int *,int *,int *,char const*,int *,int *) ;
 int * FUNC_12 (int *,char const*,char const*,scalar_t__,scalar_t__,scalar_t__,int ,void*,int ,void*,int *) ;
 int FUNC_13 (int *,char const*,int ,void*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_boolean_t *VAR_14,
                              svn_wc__db_t *VAR_15,
                              const char *VAR_16,
                              const svn_skel_t *VAR_17,
                              svn_wc_conflict_choice_t VAR_18,
                              apr_hash_t *VAR_19,
                              svn_wc_notify_func2_t VAR_20,
                              void *VAR_21,
                              svn_cancel_func_t VAR_22,
                              void *VAR_23,
                              apr_pool_t *VAR_24)
{
  svn_wc_conflict_reason_t VAR_25;
  svn_wc_conflict_action_t VAR_26;
  svn_wc_operation_t VAR_27;
  svn_boolean_t VAR_28;
  const char *VAR_29;

  *VAR_14 = VAR_0;

  FUNC_0(FUNC_6(&VAR_27, ((void*)0), ((void*)0), ((void*)0),
                                     &VAR_28, VAR_15, VAR_16,
                                     VAR_17, VAR_24, VAR_24));
  if (!VAR_28)
    return VAR_2;

  FUNC_0(FUNC_7(&VAR_25, &VAR_26,
                                              &VAR_29,
                                              VAR_15, VAR_16,
                                              VAR_17,
                                              VAR_24, VAR_24));

  if (VAR_27 == VAR_13
      || VAR_27 == VAR_12)
    {
      svn_error_t *VAR_30;
      if (VAR_25 == VAR_9 ||
          VAR_25 == VAR_11)
        {
          if (VAR_18 == VAR_7)
            {



              if (VAR_26 != VAR_4)
                {
                  FUNC_0(FUNC_8(
                                  VAR_15, VAR_16, VAR_29, VAR_3,
                                  VAR_20, VAR_21,
                                  VAR_24));
                  *VAR_14 = VAR_3;
                  return VAR_2;
                }



              *VAR_14 = VAR_3;
            }
          else if (VAR_18 == VAR_8)
            {
              svn_skel_t *VAR_31;







              VAR_30 = FUNC_10(
                        VAR_15, VAR_16, VAR_20, VAR_21,
                        VAR_24);

              if (VAR_30)
                FUNC_0(FUNC_3(
                          VAR_16, VAR_30, VAR_19));



              FUNC_0(FUNC_11(&VAR_31, ((void*)0), ((void*)0),
                                               VAR_15, VAR_16,
                                               VAR_24, VAR_24));

              if (VAR_31)
                FUNC_0(FUNC_6(((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                   &VAR_28,
                                                   VAR_15, VAR_16,
                                                   VAR_31,
                                                   VAR_24,
                                                   VAR_24));

              if (!VAR_31 || !VAR_28)
                {


                  *VAR_14 = VAR_3;
                  return VAR_2;
                }

              FUNC_0(FUNC_7(&VAR_25, &VAR_26,
                                                          &VAR_29,
                                                          VAR_15, VAR_16,
                                                          VAR_31,
                                                          VAR_24,
                                                          VAR_24));

              if (VAR_25 != VAR_10)
                {
                  *VAR_14 = VAR_3;
                  return VAR_2;
                }

              VAR_17 = VAR_31;

            }
          else
            return FUNC_5(VAR_1,
                                     ((void*)0),
                                     FUNC_2("Tree conflict can only be resolved to "
                                       "'working' or 'mine-conflict' state; "
                                       "'%s' not resolved"),
                                     FUNC_4(VAR_16,
                                                            VAR_24));
        }

      if (VAR_25 == VAR_10
           && VAR_26 == VAR_5)
        {




          if (VAR_18 == VAR_8)
            {
              VAR_30 = FUNC_12(
                        VAR_15, VAR_16, VAR_29,
                        VAR_27, VAR_26, VAR_25,
                        VAR_22, VAR_23,
                        VAR_20, VAR_21,
                        VAR_24);

              if (VAR_30)
                FUNC_0(FUNC_3(
                          VAR_16, VAR_30, VAR_19));
              else
                *VAR_14 = VAR_3;
            }
          else if (VAR_18 == VAR_7)
            {




              FUNC_0(FUNC_8(VAR_15, VAR_16,
                                                     VAR_29, VAR_3,
                                                     VAR_20, VAR_21,
                                                     VAR_24));
              *VAR_14 = VAR_3;
              return VAR_2;
            }
          else
            return FUNC_5(VAR_1,
                                     ((void*)0),
                                     FUNC_2("Tree conflict can only be resolved to "
                                       "'working' or 'mine-conflict' state; "
                                       "'%s' not resolved"),
                                     FUNC_4(VAR_16,
                                                            VAR_24));
        }
      else if (VAR_25 == VAR_10
               && VAR_26 != VAR_5)
        {



          FUNC_1(VAR_26 == VAR_4
                         || VAR_26 == VAR_6);

          if (VAR_18 == VAR_7)
            {




              *VAR_14 = VAR_3;
            }
          else if (VAR_18 == VAR_8)
            {
              return FUNC_5(VAR_1,
                                       ((void*)0),
                                       FUNC_2("Tree conflict can only be "
                                         "resolved to 'working' state; "
                                         "'%s' is no longer moved"),
                                       FUNC_4(VAR_16,
                                                              VAR_24));
            }
        }
    }

  if (! *VAR_14)
    {
      if (VAR_18 != VAR_7)
        {



          return FUNC_5(VAR_1,
                                   ((void*)0),
                                   FUNC_2("Tree conflict can only be "
                                     "resolved to 'working' state; "
                                     "'%s' not resolved"),
                                   FUNC_4(VAR_16,
                                                          VAR_24));
        }
      else
        *VAR_14 = VAR_3;
    }

  FUNC_1(*VAR_14);

  FUNC_0(FUNC_9(VAR_15, VAR_16, VAR_0, VAR_0, VAR_3,
                                      ((void*)0), VAR_24));
  FUNC_0(FUNC_13(VAR_15, VAR_16, VAR_22, VAR_23,
                         VAR_24));
  return VAR_2;
}
