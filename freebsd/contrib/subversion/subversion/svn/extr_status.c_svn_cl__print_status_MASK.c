
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {scalar_t__ node_status; scalar_t__ repos_node_status; scalar_t__ prop_status; scalar_t__ conflicted; int wc_is_locked; int lock; int changelist; scalar_t__ file_external; scalar_t__ versioned; } ;
typedef TYPE_1__ svn_client_status_t ;
typedef int svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int * FUNC_0 (char const*,char const*,char const*,scalar_t__,scalar_t__,scalar_t__,TYPE_1__ const*,unsigned int*,unsigned int*,unsigned int*,int *,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_1(const char *VAR_4,
                     const char *VAR_5,
                     const char *VAR_6,
                     const svn_client_status_t *VAR_7,
                     svn_boolean_t VAR_8,
                     svn_boolean_t VAR_9,
                     svn_boolean_t VAR_10,
                     svn_boolean_t VAR_11,
                     svn_boolean_t VAR_12,
                     unsigned int *VAR_13,
                     unsigned int *VAR_14,
                     unsigned int *VAR_15,
                     svn_client_ctx_t *VAR_16,
                     apr_pool_t *VAR_17)
{
  if (! VAR_7
      || (VAR_11
          && !(VAR_7->versioned
               || VAR_7->conflicted
               || VAR_7->node_status == VAR_1))
      || (VAR_7->node_status == VAR_2
          && VAR_7->repos_node_status == VAR_2))
    return VAR_0;



  if (VAR_8)
    {

      if ((VAR_7->node_status == VAR_1)
          && (VAR_7->repos_node_status == VAR_2)
          && (! VAR_7->conflicted))
        return VAR_0;




      if ((VAR_7->file_external)
          && (VAR_7->repos_node_status == VAR_2)
          && ((VAR_7->node_status == VAR_3)
              || (VAR_7->node_status == VAR_2))
          && ((VAR_7->prop_status == VAR_3)
              || (VAR_7->prop_status == VAR_2))
          && (! VAR_7->changelist)
          && (! VAR_7->lock)
          && (! VAR_7->wc_is_locked)
          && (! VAR_7->conflicted))
        return VAR_0;
    }

  return FUNC_0(VAR_4, VAR_5, VAR_6,
                      VAR_9, VAR_10, VAR_12, VAR_7,
                      VAR_13, VAR_14, VAR_15,
                      VAR_16, VAR_17);
}
