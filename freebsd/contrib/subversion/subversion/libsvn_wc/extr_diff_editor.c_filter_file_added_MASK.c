
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {struct filter_tree_baton_t* baton; } ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
struct filter_tree_baton_t {TYPE_2__* processor; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_5__ {int (* file_added ) (char const*,int const*,int const*,char const*,char const*,int *,int *,void*,TYPE_2__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,int const*,int const*,char const*,char const*,int *,int *,void*,TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_1,
                  const svn_diff_source_t *VAR_2,
                  const svn_diff_source_t *VAR_3,
                  const char *VAR_4,
                  const char *VAR_5,
                            apr_hash_t *VAR_6,
                            apr_hash_t *VAR_7,
                  void *VAR_8,
                  const svn_diff_tree_processor_t *VAR_9,
                  apr_pool_t *VAR_10)
{
  struct filter_tree_baton_t *VAR_11 = VAR_9->baton;

  FUNC_0(VAR_11->processor->file_added(VAR_1,
                                    VAR_2,
                                    VAR_3,
                                    VAR_4,
                                    VAR_5,
                                    VAR_6,
                                    VAR_7,
                                    VAR_8,
                                    VAR_11->processor,
                                    VAR_10));
  return VAR_0;
}
