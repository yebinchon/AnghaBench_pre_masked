
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {struct reverse_tree_baton_t* baton; } ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
typedef int svn_boolean_t ;
struct reverse_tree_baton_t {TYPE_2__* processor; scalar_t__ prefix_relpath; } ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* file_opened ) (void**,int *,char const*,int const*,int const*,int *,void*,TYPE_2__*,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (void**,int *,char const*,int const*,int const*,int *,void*,TYPE_2__*,int *,int *) ;
 char* FUNC_2 (scalar_t__,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void **VAR_1,
                    svn_boolean_t *VAR_2,
                    const char *VAR_3,
                    const svn_diff_source_t *VAR_4,
                    const svn_diff_source_t *VAR_5,
                    const svn_diff_source_t *VAR_6,
                    void *VAR_7,
                    const svn_diff_tree_processor_t *VAR_8,
                    apr_pool_t *VAR_9,
                    apr_pool_t *VAR_10)
{
  struct reverse_tree_baton_t *VAR_11 = VAR_8->baton;

  if (VAR_11->prefix_relpath)
    VAR_3 = FUNC_2(VAR_11->prefix_relpath, VAR_3, VAR_10);

  FUNC_0(VAR_11->processor->file_opened(VAR_1,
                                     VAR_2,
                                     VAR_3,
                                     VAR_5,
                                     VAR_4,
                                     ((void*)0) ,
                                     VAR_7,
                                     VAR_11->processor,
                                     VAR_9,
                                     VAR_10));
  return VAR_0;
}
