
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,int ,int *) ;
struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (scalar_t__*,int *,int *,int *,int *,int ,char const*,int *,int *,int *) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,char const**,int ,char const*,int *,int *,int *) ;
 int FUNC_7 (int ,char const*,char const*,int ,int (*) (void*,int ,int *),void*,int *) ;
 int FUNC_8 (int ,char const*,int ,int ,int ,int *,int *) ;
 int FUNC_9 (int const**,int **,int ,char const*,int ,int ,int *,int *) ;
 int FUNC_10 (int ,char const*,int ,void*,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_11 (char const*,int ,int *) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

svn_error_t *
FUNC_12(svn_wc_context_t *VAR_13,
                                              const char *VAR_14,
                                              svn_cancel_func_t VAR_15,
                                              void *VAR_16,
                                              svn_wc_notify_func2_t VAR_17,
                                              void *VAR_18,
                                              apr_pool_t *VAR_19)
{
  svn_wc_conflict_reason_t VAR_20;
  svn_wc_conflict_action_t VAR_21;
  svn_wc_operation_t VAR_22;
  svn_boolean_t VAR_23;
  const char *VAR_24;
  const apr_array_header_t *VAR_25;
  svn_skel_t *VAR_26;

  FUNC_0(FUNC_9(&VAR_25, &VAR_26,
                                 VAR_13->db, VAR_14,
                                 VAR_0,
                                 VAR_0,
                                 VAR_19, VAR_19));

  FUNC_0(FUNC_5(&VAR_22, ((void*)0), ((void*)0), ((void*)0),
                                     &VAR_23, VAR_13->db,
                                     VAR_14, VAR_26,
                                     VAR_19, VAR_19));
  if (!VAR_23)
    return VAR_2;

  FUNC_0(FUNC_6(&VAR_20, &VAR_21,
                                              &VAR_24,
                                              VAR_13->db, VAR_14,
                                              VAR_26,
                                              VAR_19, VAR_19));


  if (VAR_22 != VAR_12 &&
      VAR_22 != VAR_11)
    return FUNC_3(VAR_1, ((void*)0),
                             FUNC_1("Unexpected conflict operation '%s' on '%s'"),
                             FUNC_4(VAR_4, VAR_22),
                             FUNC_2(VAR_14,
                                                    VAR_19));
  if (VAR_20 != VAR_7 &&
      VAR_20 != VAR_9 &&
      VAR_20 != VAR_8)
    return FUNC_3(VAR_1, ((void*)0),
                             FUNC_1("Unexpected conflict reason '%s' on '%s'"),
                             FUNC_4(VAR_5, VAR_20),
                             FUNC_2(VAR_14,
                                                    VAR_19));



  if (VAR_21 != VAR_6)
    {
      FUNC_0(FUNC_7(
                      VAR_13->db, VAR_14, VAR_24, VAR_3,
                      VAR_17, VAR_18, VAR_19));


      if (VAR_17)
        VAR_17(VAR_18,
                    FUNC_11(VAR_14,
                                         VAR_10,
                                         VAR_19),
                    VAR_19);
      return VAR_2;
    }


  FUNC_0(FUNC_8(VAR_13->db, VAR_14,
                                      VAR_0, VAR_0, VAR_3,
                                      ((void*)0), VAR_19));
  FUNC_0(FUNC_10(VAR_13->db, VAR_14, VAR_15, VAR_16,
                         VAR_19));

  if (VAR_17)
    VAR_17(VAR_18,
                FUNC_11(VAR_14,
                                     VAR_10,
                                     VAR_19),
                VAR_19);

  return VAR_2;
}
