
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int (* file_closed ) (char const*,int const*,int const*,void*,TYPE_1__ const*,int *) ;} ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,int const*,int const*,void*,TYPE_1__ const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_1,
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
  FUNC_0(VAR_11->file_closed(VAR_1,
                                 VAR_2, VAR_3,
                                 VAR_10, VAR_11, VAR_12));
  return VAR_0;
}
