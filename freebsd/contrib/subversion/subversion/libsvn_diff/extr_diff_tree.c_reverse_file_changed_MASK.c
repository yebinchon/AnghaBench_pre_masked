
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
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_5__ {int (* file_changed ) (char const*,int const*,int const*,char const*,char const*,int *,int *,int ,int *,void*,TYPE_2__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (char const*,int const*,int const*,char const*,char const*,int *,int *,int ,int *,void*,TYPE_2__*,int *) ;
 int FUNC_3 (int **,int *,int *,int *) ;
 char* FUNC_4 (scalar_t__,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_1,
                     const svn_diff_source_t *VAR_2,
                     const svn_diff_source_t *VAR_3,
                     const char *VAR_4,
                     const char *VAR_5,
                               apr_hash_t *VAR_6,
                               apr_hash_t *VAR_7,
                     svn_boolean_t VAR_8,
                     const apr_array_header_t *VAR_9,
                     void *VAR_10,
                     const svn_diff_tree_processor_t *VAR_11,
                     apr_pool_t *VAR_12)
{
  struct reverse_tree_baton_t *VAR_13 = VAR_11->baton;
  apr_array_header_t *VAR_14 = ((void*)0);

  if (VAR_13->prefix_relpath)
    VAR_1 = FUNC_4(VAR_13->prefix_relpath, VAR_1, VAR_12);

  if (VAR_9)
    {
      FUNC_1(VAR_6 != ((void*)0) && VAR_7 != ((void*)0));
      FUNC_0(FUNC_3(&VAR_14, VAR_6, VAR_7,
                             VAR_12));
    }

  FUNC_0(VAR_13->processor->file_changed(VAR_1,
                                      VAR_3,
                                      VAR_2,
                                      VAR_5,
                                      VAR_4,
                                      VAR_7,
                                      VAR_6,
                                      VAR_8,
                                      VAR_14,
                                      VAR_10,
                                      VAR_13->processor,
                                      VAR_12));
  return VAR_0;
}
