
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_conflict_choice_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_diff_conflict_display_style_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const**,int *,char const*,int ,int const*,char const*,char const*,char const*,int ,int ,void*,int *,int *) ;
 int FUNC_4 (int **,scalar_t__*,int *,char const*,char const*,int *,int *) ;
 int FUNC_5 (int **,int *,char const*,char const*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char const*,int *) ;
 int * FUNC_7 (int ,int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_8 (char const**,char const**,char const**,int *,char const*,int const*,int *,int *) ;
 int FUNC_9 (int **,int *,char const*,char const*,scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_10 (int **,int *,char const*,char const*,int *,int *) ;
 int * FUNC_11 (int *,int *,int *) ;
__attribute__((used)) static svn_error_t *
FUNC_12(svn_skel_t **VAR_7,
                                  svn_boolean_t *VAR_8,
                                  svn_wc__db_t *VAR_9,
                                  const char *VAR_10,
                                  const svn_skel_t *VAR_11,
                                  svn_wc_conflict_choice_t VAR_12,
                                  const char *VAR_13,
                                  svn_boolean_t VAR_14,
                                  const apr_array_header_t *VAR_15,
                                  svn_cancel_func_t VAR_16,
                                  void *VAR_17,
                                  apr_pool_t *VAR_18,
                                  apr_pool_t *VAR_19)
{
  const char *VAR_20;
  const char *VAR_21;
  const char *VAR_22;
  svn_skel_t *VAR_23;
  const char *VAR_24 = ((void*)0);
  svn_boolean_t VAR_25 = VAR_0;

  *VAR_7 = ((void*)0);

  if (VAR_8)
    *VAR_8 = VAR_0;

  FUNC_0(FUNC_8(&VAR_20,
                                              &VAR_21,
                                              &VAR_22,
                                              VAR_9, VAR_10,
                                              VAR_11,
                                              VAR_19, VAR_19));

  if (VAR_14)
    FUNC_0(FUNC_5(VAR_7,
                              VAR_9, VAR_10,
                              VAR_13
                                ? VAR_13
                                : VAR_10,
                              VAR_18, VAR_19));

  if (VAR_12 == 130)
    return VAR_2;

  switch (VAR_12)
    {


      case 134:
        {
          VAR_24 = VAR_21;
          break;
        }
      case 128:
        {
          VAR_24 = VAR_22;
          break;
        }
      case 131:
        {





          VAR_24 = VAR_20
                                   ? VAR_20
                                   : VAR_10;
          break;
        }
      case 129:
      case 132:
        {
          svn_diff_conflict_display_style_t VAR_26
            = VAR_12 == 129
                ? VAR_4
                : VAR_5;

          if (VAR_20 == ((void*)0))
            return FUNC_7(VAR_1, ((void*)0),
                                     FUNC_2("Conflict on '%s' cannot be resolved to "
                                       "'theirs-conflict' or 'mine-conflict' "
                                       "because a merged version of the file "
                                       "cannot be created."),
                                     FUNC_6(VAR_10,
                                                            VAR_19));

          FUNC_0(FUNC_3(&VAR_24,
                                          VAR_9, VAR_10,
                                          VAR_26, VAR_15,
                                          VAR_21,
                                          VAR_20,
                                          VAR_22,

                                          VAR_6,
                                          VAR_16, VAR_17,
                                          VAR_19, VAR_19));
          VAR_25 = VAR_3;
          break;
        }







      case 133:
        {
          VAR_24 = VAR_13
                                  ? VAR_13
                                  : VAR_10;
          break;
        }
      case 130:
        {

          return VAR_2;
        }
      default:
        FUNC_1(VAR_12 == 130);
    }

  if (VAR_24 == ((void*)0))
    return FUNC_7(VAR_1, ((void*)0),
                             FUNC_2("Conflict on '%s' could not be resolved "
                               "because the chosen version of the file "
                               "is not available."),
                             FUNC_6(VAR_10,
                                                    VAR_19));



  FUNC_0(FUNC_9(&VAR_23,
                                        VAR_9, VAR_10,
                                        VAR_24,
                                        VAR_0 ,
                                        VAR_0 ,
                                        VAR_18, VAR_19));
  *VAR_7 = FUNC_11(*VAR_7, VAR_23, VAR_18);

  if (VAR_25)
    {
      FUNC_0(FUNC_10(&VAR_23,
                                           VAR_9, VAR_10,
                                           VAR_24,
                                           VAR_18, VAR_19));
      *VAR_7 = FUNC_11(*VAR_7, VAR_23, VAR_18);
    }

  FUNC_0(FUNC_4(&VAR_23, VAR_8,
                                         VAR_9, VAR_10,
                                         VAR_21,
                                         VAR_18, VAR_19));
  *VAR_7 = FUNC_11(*VAR_7, VAR_23, VAR_18);

  FUNC_0(FUNC_4(&VAR_23, VAR_8,
                                         VAR_9, VAR_10,
                                         VAR_22,
                                         VAR_18, VAR_19));
  *VAR_7 = FUNC_11(*VAR_7, VAR_23, VAR_18);

  FUNC_0(FUNC_4(&VAR_23, VAR_8,
                                         VAR_9, VAR_10,
                                         VAR_20,
                                         VAR_18, VAR_19));
  *VAR_7 = FUNC_11(*VAR_7, VAR_23, VAR_18);

  return VAR_2;
}
