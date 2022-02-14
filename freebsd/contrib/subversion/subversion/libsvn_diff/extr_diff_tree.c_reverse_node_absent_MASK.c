
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {struct reverse_tree_baton_t* baton; } ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
struct reverse_tree_baton_t {TYPE_2__* processor; scalar_t__ prefix_relpath; } ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* node_absent ) (char const*,void*,TYPE_2__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,void*,TYPE_2__*,int *) ;
 char* FUNC_2 (scalar_t__,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_1,
                    void *VAR_2,
                    const svn_diff_tree_processor_t *VAR_3,
                    apr_pool_t *VAR_4)
{
  struct reverse_tree_baton_t *VAR_5 = VAR_3->baton;

  if (VAR_5->prefix_relpath)
    VAR_1 = FUNC_2(VAR_5->prefix_relpath, VAR_1, VAR_4);

  FUNC_0(VAR_5->processor->node_absent(VAR_1,
                                    VAR_2,
                                    VAR_5->processor,
                                    VAR_4));
  return VAR_0;
}
