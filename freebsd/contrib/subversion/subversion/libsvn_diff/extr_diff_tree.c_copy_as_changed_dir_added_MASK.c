
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {struct copy_as_changed_baton_t* baton; } ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
struct copy_as_changed_baton_t {TYPE_2__* processor; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_6__ {int (* dir_added ) (char const*,int const*,int const*,int *,int *,void*,TYPE_2__*,int *) ;int (* dir_changed ) (char const*,int const*,int const*,int *,int *,int *,void*,TYPE_2__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,int const*,int const*,int *,int *,int *,void*,TYPE_2__*,int *) ;
 int FUNC_2 (char const*,int const*,int const*,int *,int *,void*,TYPE_2__*,int *) ;
 int FUNC_3 (int **,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_1,
                          const svn_diff_source_t *VAR_2,
                          const svn_diff_source_t *VAR_3,
                                    apr_hash_t *VAR_4,
                                    apr_hash_t *VAR_5,
                          void *VAR_6,
                          const svn_diff_tree_processor_t *VAR_7,
                          apr_pool_t *VAR_8)
{
  struct copy_as_changed_baton_t *VAR_9 = VAR_7->baton;

  if (VAR_2)
    {
      apr_array_header_t *VAR_10;
      FUNC_0(FUNC_3(&VAR_10, VAR_5, VAR_4,
                             VAR_8));
      FUNC_0(VAR_9->processor->dir_changed(VAR_1,
                                         VAR_2,
                                         VAR_3,
                                         VAR_4,
                                         VAR_5,
                                         VAR_10,
                                         VAR_6,
                                         VAR_9->processor,
                                         VAR_8));
    }
  else
    {
      FUNC_0(VAR_9->processor->dir_added(VAR_1,
                                       VAR_2,
                                       VAR_3,
                                       VAR_4,
                                       VAR_5,
                                       VAR_6,
                                       VAR_9->processor,
                                       VAR_8));
    }

  return VAR_0;
}
