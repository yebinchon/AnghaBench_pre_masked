
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
struct TYPE_5__ {int (* dir_deleted ) (int *,int *,char const*,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *,char const*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_3,
                 const svn_diff_source_t *VAR_4,
                           apr_hash_t *VAR_5,
                 void *VAR_6,
                 const svn_diff_tree_processor_t *VAR_7,
                 apr_pool_t *VAR_8)
{
  wc_diff_wrap_baton_t *VAR_9 = VAR_7->baton;
  svn_boolean_t VAR_10 = VAR_0;
  svn_wc_notify_state_t VAR_11 = VAR_2;

  FUNC_0(VAR_9->callbacks->dir_deleted(&VAR_11, &VAR_10,
                                     VAR_3,
                                     VAR_9->callback_baton,
                                     VAR_8));

  return VAR_1;
}
