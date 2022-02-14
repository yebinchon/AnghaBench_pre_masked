
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int callback_baton; TYPE_1__* callbacks; } ;
typedef TYPE_2__ wc_diff_wrap_baton_t ;
typedef int svn_wc_notify_state_t ;
typedef int svn_error_t ;
struct TYPE_7__ {TYPE_2__* baton; } ;
typedef TYPE_3__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_5__ {int (* dir_closed ) (int *,int *,int *,char const*,int ,int ,int *) ;int (* dir_props_changed ) (int *,int *,char const*,int ,int *,int *,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,char const*,int ,int *,int *,int ,int *) ;
 int FUNC_4 (int *,int *,int *,char const*,int ,int ,int *) ;
 int FUNC_5 (int **,int *,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char *VAR_4,
               const svn_diff_source_t *VAR_5,
               const svn_diff_source_t *VAR_6,
                         apr_hash_t *VAR_7,
                         apr_hash_t *VAR_8,
               void *VAR_9,
               const svn_diff_tree_processor_t *VAR_10,
               apr_pool_t *VAR_11)
{
  wc_diff_wrap_baton_t *VAR_12 = VAR_10->baton;
  svn_boolean_t VAR_13 = VAR_0;
  svn_wc_notify_state_t VAR_14 = VAR_3;
  svn_wc_notify_state_t VAR_15 = VAR_3;
  apr_hash_t *VAR_16 = VAR_7;
  apr_array_header_t *VAR_17 = ((void*)0);

  if (VAR_8 && FUNC_1(VAR_8))
    {
      if (!VAR_16)
        VAR_16 = FUNC_2(VAR_11);

      FUNC_0(FUNC_5(&VAR_17, VAR_8, VAR_16,
                             VAR_11));

      FUNC_0(VAR_12->callbacks->dir_props_changed(&VAR_15,
                                               &VAR_13,
                                               VAR_4,
                                               VAR_2 ,
                                               VAR_17, VAR_16,
                                               VAR_12->callback_baton,
                                               VAR_11));
    }

  FUNC_0(VAR_12->callbacks->dir_closed(&VAR_14, &VAR_15,
                                   &VAR_13,
                                   VAR_4,
                                   VAR_2 ,
                                   VAR_12->callback_baton,
                                   VAR_11));
  return VAR_1;
}
