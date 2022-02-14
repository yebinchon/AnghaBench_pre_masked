
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int callback_baton; TYPE_1__* callbacks; } ;
typedef TYPE_2__ wc_diff_wrap_baton_t ;
typedef int svn_wc_notify_state_t ;
typedef int svn_error_t ;
typedef int svn_diff_source_t ;
typedef int svn_boolean_t ;
struct svn_diff_tree_processor_t {TYPE_2__* baton; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_3__ {int (* dir_props_changed ) (int *,int *,char const*,int ,int const*,int *,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,char const*,int ,int const*,int *,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (char const*,int const*,int const*,void*,struct svn_diff_tree_processor_t const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_3,
                 const svn_diff_source_t *VAR_4,
                 const svn_diff_source_t *VAR_5,
                           apr_hash_t *VAR_6,
                           apr_hash_t *VAR_7,
                 const apr_array_header_t *VAR_8,
                 void *VAR_9,
                 const struct svn_diff_tree_processor_t *VAR_10,
                 apr_pool_t *VAR_11)
{
  wc_diff_wrap_baton_t *VAR_12 = VAR_10->baton;
  svn_boolean_t VAR_13 = VAR_0;
  svn_wc_notify_state_t VAR_14 = VAR_2;

  FUNC_1(VAR_4 && VAR_5);

  FUNC_0(VAR_12->callbacks->dir_props_changed(&VAR_14, &VAR_13,
                                           VAR_3,
                                           VAR_0 ,
                                           VAR_8,
                                           VAR_6,
                                           VAR_12->callback_baton,
                                           VAR_11));


  FUNC_0(FUNC_3(VAR_3, VAR_4, VAR_5,
                          VAR_9, VAR_10,
                          VAR_11));
  return VAR_1;
}
