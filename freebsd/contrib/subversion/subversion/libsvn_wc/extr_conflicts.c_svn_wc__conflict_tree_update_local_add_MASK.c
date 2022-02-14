
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef int svn_wc_notify_func2_t ;
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
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (scalar_t__*,int *,int *,int *,int *,int ,char const*,int *,int *,int *) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,int *,int ,char const*,int *,int *,int *) ;
 int FUNC_7 (int ,char const*,int ,void*,int ,void*,int *) ;
 int FUNC_8 (int const**,int **,int ,char const*,int ,int ,int *,int *) ;
 int FUNC_9 (int ,char const*,int ,void*,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

svn_error_t *
FUNC_10(svn_wc_context_t *VAR_9,
                                       const char *VAR_10,
                                       svn_cancel_func_t VAR_11,
                                       void *VAR_12,
                                       svn_wc_notify_func2_t VAR_13,
                                       void *VAR_14,
                                       apr_pool_t *VAR_15)
{
  svn_wc_conflict_reason_t VAR_16;
  svn_wc_conflict_action_t VAR_17;
  svn_wc_operation_t VAR_18;
  svn_boolean_t VAR_19;
  const apr_array_header_t *VAR_20;
  svn_skel_t *VAR_21;

  FUNC_0(FUNC_8(&VAR_20, &VAR_21,
                                 VAR_9->db, VAR_10,
                                 VAR_0,
                                 VAR_0,
                                 VAR_15, VAR_15));

  FUNC_0(FUNC_5(&VAR_18, ((void*)0), ((void*)0), ((void*)0),
                                     &VAR_19, VAR_9->db,
                                     VAR_10, VAR_21,
                                     VAR_15, VAR_15));
  if (!VAR_19)
    return VAR_2;

  FUNC_0(FUNC_6(&VAR_16, &VAR_17,
                                              ((void*)0), VAR_9->db, VAR_10,
                                              VAR_21,
                                              VAR_15, VAR_15));


  if (VAR_18 != VAR_8)
    return FUNC_3(VAR_1, ((void*)0),
                             FUNC_1("Unexpected conflict operation '%s' on '%s'"),
                             FUNC_4(VAR_4, VAR_18),
                             FUNC_2(VAR_10,
                                                    VAR_15));
  if (VAR_16 != VAR_7)
    return FUNC_3(VAR_1, ((void*)0),
                             FUNC_1("Unexpected conflict reason '%s' on '%s'"),
                             FUNC_4(VAR_5, VAR_16),
                             FUNC_2(VAR_10,
                                                    VAR_15));
  if (VAR_17 != VAR_6)
    return FUNC_3(VAR_1, ((void*)0),
                             FUNC_1("Unexpected conflict action '%s' on '%s'"),
                             FUNC_4(VAR_3, VAR_17),
                             FUNC_2(VAR_10,
                                                    VAR_15));

  FUNC_0(FUNC_7(VAR_9->db, VAR_10,
                                      VAR_11, VAR_12,
                                      VAR_13, VAR_14,
                                      VAR_15));

  FUNC_0(FUNC_9(VAR_9->db, VAR_10, VAR_11, VAR_12,
                         VAR_15));

  return VAR_2;
}
