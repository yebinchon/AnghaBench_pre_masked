
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
struct TYPE_6__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_7__ {scalar_t__ nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,scalar_t__,int ,int ,int ,int ,void*,int ,void*,int *) ;
 int FUNC_2 (int ,char const*,scalar_t__,int ,int *,int ,int ,int ,void*,int ,void*,int *) ;
 int FUNC_3 (int ,char const*,scalar_t__,int ,int ,int ,int ,void*,int ,void*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_4 (int ,int *,int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int **,TYPE_2__ const*,int *) ;

svn_error_t *
FUNC_7(svn_wc_context_t *VAR_5,
               const char *VAR_6,
               svn_depth_t VAR_7,
               svn_boolean_t VAR_8,
               const apr_array_header_t *VAR_9,
               svn_boolean_t VAR_10,
               svn_boolean_t VAR_11,
               svn_cancel_func_t VAR_12,
               void *VAR_13,
               svn_wc_notify_func2_t VAR_14,
               void *VAR_15,
               apr_pool_t *VAR_16)
{
  if (VAR_9 && VAR_9->nelts)
    {
      apr_hash_t *VAR_17;

      FUNC_0(FUNC_6(&VAR_17, VAR_9,
                                         VAR_16));
      return FUNC_5(FUNC_2(VAR_5->db, VAR_6,
                                               VAR_7, VAR_8,
                                               VAR_17,
                                               VAR_10,
                                               VAR_11,
                                               VAR_12, VAR_13,
                                               VAR_14, VAR_15,
                                               VAR_16));
    }

  if (VAR_7 == VAR_1 || VAR_7 == VAR_4)
    return FUNC_5(FUNC_1(VAR_5->db, VAR_6,
                                  VAR_7, VAR_8, VAR_10,
                                  VAR_11,
                                  VAR_12, VAR_13,
                                  VAR_14, VAR_15,
                                  VAR_16));







  if (VAR_7 == VAR_2 || VAR_7 == VAR_3)
    return FUNC_5(FUNC_3(VAR_5->db, VAR_6,
                                          VAR_7, VAR_8,
                                          VAR_10, VAR_11,
                                          VAR_12, VAR_13,
                                          VAR_14, VAR_15,
                                          VAR_16));


  return FUNC_4(VAR_0, ((void*)0), ((void*)0));
}
