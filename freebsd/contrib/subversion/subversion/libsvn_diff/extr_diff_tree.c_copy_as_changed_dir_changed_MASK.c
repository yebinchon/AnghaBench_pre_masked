
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_diff_source_t ;
struct svn_diff_tree_processor_t {struct copy_as_changed_baton_t* baton; } ;
struct copy_as_changed_baton_t {TYPE_1__* processor; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_2__ {int (* dir_changed ) (char const*,int const*,int const*,int *,int *,int const*,void*,TYPE_1__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,int const*,int const*,int *,int *,int const*,void*,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_1,
                            const svn_diff_source_t *VAR_2,
                            const svn_diff_source_t *VAR_3,
                                      apr_hash_t *VAR_4,
                                      apr_hash_t *VAR_5,
                            const apr_array_header_t *VAR_6,
                            void *VAR_7,
                            const struct svn_diff_tree_processor_t *VAR_8,
                            apr_pool_t *VAR_9)
{
  struct copy_as_changed_baton_t *VAR_10 = VAR_8->baton;

  FUNC_0(VAR_10->processor->dir_changed(VAR_1,
                                     VAR_2,
                                     VAR_3,
                                     VAR_4,
                                     VAR_5,
                                     VAR_6,
                                     VAR_7,
                                     VAR_10->processor,
                                     VAR_9));
  return VAR_0;
}
