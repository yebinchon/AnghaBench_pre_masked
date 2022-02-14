
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_stream_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef enum svn_wc_merge_outcome_t { ____Placeholder_svn_wc_merge_outcome_t } svn_wc_merge_outcome_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char const*,char const*,int *) ;
 int FUNC_2 (char const*,scalar_t__*,scalar_t__*,int *) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__*,char const*,char const*,char const*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,int *,int ,void*,int *) ;
 int FUNC_5 (int **,char const*,int *,int *) ;
 int FUNC_6 (int **,char const**,char const*,int ,int *,int *) ;
 int FUNC_7 (char const**,int *,char const*,int *,int *) ;
 int FUNC_8 (char const**,int *,char const*,int *,int *) ;
 int FUNC_9 (int **,int *,char const*,char const*,scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_10 (int **,int *,char const*,char const*,int *,int *) ;
 int * FUNC_11 (int *,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_skel_t **VAR_8,
                   enum svn_wc_merge_outcome_t *VAR_9,
                   const char *VAR_10,
                   const char *VAR_11,
                   const char *VAR_12,
                   const char *VAR_13,
                   svn_boolean_t VAR_14,
                   svn_wc__db_t *VAR_15,
                   svn_cancel_func_t VAR_16,
                   void *VAR_17,
                   apr_pool_t *VAR_18,
                   apr_pool_t *VAR_19)
{
  svn_skel_t *VAR_20;
  svn_boolean_t VAR_21;
  svn_boolean_t VAR_22;
  svn_boolean_t VAR_23;
  svn_node_kind_t VAR_24;
  svn_boolean_t VAR_25;


  FUNC_0(FUNC_2(VAR_12, &VAR_24, &VAR_25,
                                    VAR_19));
  if (VAR_24 != VAR_4 || VAR_25)
    {
      *VAR_9 = VAR_6;
      return VAR_1;
    }


  FUNC_0(FUNC_3(&VAR_21,
                                             &VAR_22,
                                             &VAR_23,
                                             VAR_10,
                                             VAR_11,
                                             VAR_13,
                                             VAR_19));



  if (VAR_23)
    {


      if (VAR_21)
        {
          *VAR_9 = VAR_7;
        }
      else
        {
          *VAR_9 = VAR_5;
          if (!VAR_14)
            {
              const char *VAR_26;
              svn_boolean_t VAR_27 = VAR_0;







              FUNC_0(FUNC_7(&VAR_26,
                                            VAR_15, VAR_12,
                                            VAR_19, VAR_19));

              if (!FUNC_1(VAR_26, VAR_11, ((void*)0)))
                {
                  svn_stream_t *VAR_28;
                  svn_stream_t *VAR_29;
                  const char *VAR_30;

                  FUNC_0(FUNC_5(&VAR_28, VAR_11,
                                                   VAR_19,
                                                   VAR_19));

                  FUNC_0(FUNC_8(&VAR_30, VAR_15,
                                                         VAR_12,
                                                         VAR_19,
                                                         VAR_19));

                  FUNC_0(FUNC_6(&VAR_29, &VAR_11,
                                                 VAR_30, VAR_3,
                                                 VAR_19, VAR_19));

                  FUNC_0(FUNC_4(VAR_28, VAR_29,
                                           VAR_16, VAR_17,
                                           VAR_19));

                  VAR_27 = VAR_2;
                }

              FUNC_0(FUNC_9(
                        &VAR_20, VAR_15, VAR_12, VAR_11,
                        VAR_0 ,
                        VAR_0 ,
                        VAR_18, VAR_19));
              *VAR_8 = FUNC_11(*VAR_8, VAR_20,
                                             VAR_18);

              if (VAR_27)
                {
                  FUNC_0(FUNC_10(
                                    &VAR_20, VAR_15, VAR_26,
                                    VAR_11,
                                    VAR_18, VAR_19));
                  *VAR_8 = FUNC_11(*VAR_8, VAR_20,
                                                 VAR_18);
                }
            }
        }

      return VAR_1;
    }
  else
    {





      if (VAR_22)
        {
          *VAR_9 = VAR_7;
          return VAR_1;
        }
    }

  *VAR_9 = VAR_6;
  return VAR_1;
}
