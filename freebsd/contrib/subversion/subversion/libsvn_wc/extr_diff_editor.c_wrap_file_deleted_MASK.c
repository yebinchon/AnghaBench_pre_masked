
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int callback_baton; int empty_file; TYPE_1__* callbacks; } ;
typedef TYPE_2__ wc_diff_wrap_baton_t ;
typedef int svn_wc_notify_state_t ;
typedef int svn_error_t ;
struct TYPE_8__ {TYPE_2__* baton; } ;
typedef TYPE_3__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_6__ {int (* file_deleted ) (int *,int *,char const*,char const*,int ,int *,int *,int *,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,char const*,char const*,int ,int *,int *,int *,int ,int *) ;
 int * FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_4,
                  const svn_diff_source_t *VAR_5,
                  const char *VAR_6,
                  apr_hash_t *VAR_7,
                  void *VAR_8,
                  const svn_diff_tree_processor_t *VAR_9,
                  apr_pool_t *VAR_10)
{
  wc_diff_wrap_baton_t *VAR_11 = VAR_9->baton;
  svn_boolean_t VAR_12 = VAR_0;
  svn_wc_notify_state_t VAR_13 = VAR_3;

  FUNC_0(FUNC_3(VAR_11, VAR_10));

  FUNC_0(VAR_11->callbacks->file_deleted(&VAR_13, &VAR_12,
                                      VAR_4,
                                      VAR_6, VAR_11->empty_file,
                                      VAR_7
                                       ? FUNC_2(VAR_7,
                                                            VAR_2)
                                       : ((void*)0),
                                      ((void*)0),
                                      VAR_7,
                                      VAR_11->callback_baton,
                                      VAR_10));
  return VAR_1;
}
