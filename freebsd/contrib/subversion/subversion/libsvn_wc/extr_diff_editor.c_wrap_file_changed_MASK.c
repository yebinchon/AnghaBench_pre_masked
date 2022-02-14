
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int callback_baton; TYPE_1__* callbacks; } ;
typedef TYPE_2__ wc_diff_wrap_baton_t ;
typedef int svn_wc_notify_state_t ;
typedef int svn_error_t ;
struct TYPE_11__ {TYPE_2__* baton; } ;
typedef TYPE_3__ svn_diff_tree_processor_t ;
struct TYPE_12__ {int revision; } ;
typedef TYPE_4__ svn_diff_source_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_9__ {int (* file_changed ) (int *,int *,scalar_t__*,char const*,char const*,char const*,int ,int ,int *,int *,int const*,int *,int ,int *) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,scalar_t__*,char const*,char const*,char const*,int ,int ,int *,int *,int const*,int *,int ,int *) ;
 int * FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_4,
                  const svn_diff_source_t *VAR_5,
                  const svn_diff_source_t *VAR_6,
                  const char *VAR_7,
                  const char *VAR_8,
                            apr_hash_t *VAR_9,
                            apr_hash_t *VAR_10,
                  svn_boolean_t VAR_11,
                  const apr_array_header_t *VAR_12,
                  void *VAR_13,
                  const svn_diff_tree_processor_t *VAR_14,
                  apr_pool_t *VAR_15)
{
  wc_diff_wrap_baton_t *VAR_16 = VAR_14->baton;
  svn_boolean_t VAR_17 = VAR_0;
  svn_wc_notify_state_t VAR_18 = VAR_3;
  svn_wc_notify_state_t VAR_19 = VAR_3;

  FUNC_0(FUNC_4(VAR_16, VAR_15));

  FUNC_1(VAR_5 && VAR_6);

  FUNC_0(VAR_16->callbacks->file_changed(&VAR_18, &VAR_19, &VAR_17,
                                      VAR_4,
                                      VAR_11 ? VAR_7 : ((void*)0),
                                      VAR_11 ? VAR_8 : ((void*)0),
                                      VAR_5->revision,
                                      VAR_6->revision,
                                      VAR_9
                                       ? FUNC_3(VAR_9,
                                                            VAR_2)
                                       : ((void*)0),
                                      VAR_10
                                       ? FUNC_3(VAR_10,
                                                            VAR_2)
                                       : ((void*)0),
                                       VAR_12,
                                      VAR_9,
                                      VAR_16->callback_baton,
                                      VAR_15));
  return VAR_1;
}
