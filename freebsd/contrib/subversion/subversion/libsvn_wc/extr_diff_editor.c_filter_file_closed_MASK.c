
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
struct TYPE_5__ {int (* file_closed ) (char const*,int const*,int const*,void*,TYPE_2__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,int const*,int const*,void*,TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_1,
                   const svn_diff_source_t *VAR_2,
                   const svn_diff_source_t *VAR_3,
                   void *VAR_4,
                   const svn_diff_tree_processor_t *VAR_5,
                   apr_pool_t *VAR_6)
{
  struct filter_tree_baton_t *VAR_7 = VAR_5->baton;

  FUNC_0(VAR_7->processor->file_closed(VAR_1,
                                     VAR_2,
                                     VAR_3,
                                     VAR_4,
                                     VAR_7->processor,
                                     VAR_6));

  return VAR_0;
}
