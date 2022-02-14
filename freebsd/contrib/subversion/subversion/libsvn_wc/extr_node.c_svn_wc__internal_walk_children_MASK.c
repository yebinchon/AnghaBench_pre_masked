
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int (* svn_wc__node_found_func_t ) (char const*,scalar_t__,void*,int *) ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_4__ {scalar_t__ nelts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__*,scalar_t__,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int ,int *,int ,int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int **,TYPE_1__ const*,int *) ;
 scalar_t__ FUNC_8 (int *,char const*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int *,char const*,int ,int *,int (*) (char const*,scalar_t__,void*,int *),void*,int ,int ,void*,int *) ;

svn_error_t *
FUNC_11(svn_wc__db_t *VAR_9,
                               const char *VAR_10,
                               svn_boolean_t VAR_11,
                               const apr_array_header_t *VAR_12,
                               svn_wc__node_found_func_t VAR_13,
                               void *VAR_14,
                               svn_depth_t VAR_15,
                               svn_cancel_func_t VAR_16,
                               void *VAR_17,
                               apr_pool_t *VAR_18)
{
  svn_node_kind_t VAR_19;
  svn_node_kind_t VAR_20;
  svn_wc__db_status_t VAR_21;
  apr_hash_t *VAR_22 = ((void*)0);
  const char *VAR_23 = ((void*)0);

  FUNC_1(VAR_15 >= VAR_2
                 && VAR_15 <= VAR_3);

  if (VAR_12 && VAR_12->nelts)
    FUNC_0(FUNC_7(&VAR_22, VAR_12,
                                       VAR_18));


  FUNC_0(FUNC_9(&VAR_21, &VAR_19, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               VAR_22 ? &VAR_23 : ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               VAR_9, VAR_10, VAR_18, VAR_18));

  FUNC_0(FUNC_3(&VAR_20, VAR_19, VAR_21, VAR_11));

  if (!VAR_22
      || (VAR_23 && FUNC_8(VAR_22, VAR_23)))
    {
      FUNC_0(VAR_13(VAR_10, VAR_20, VAR_14, VAR_18));
    }

  if (VAR_19 == VAR_5
      || VAR_21 == VAR_7
      || VAR_21 == VAR_6
      || VAR_21 == VAR_8)
    return VAR_1;

  if (VAR_19 == VAR_4)
    {
      return FUNC_6(
        FUNC_10(VAR_9, VAR_10, VAR_11, VAR_22,
                      VAR_13, VAR_14,
                      VAR_15, VAR_16, VAR_17, VAR_18));
    }

  return FUNC_5(VAR_0, ((void*)0),
                           FUNC_2("'%s' has an unrecognized node kind"),
                           FUNC_4(VAR_10,
                                                  VAR_18));
}
