
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_diff_source_t ;
struct svn_diff_tree_processor_t {int (* dir_closed ) (char const*,int const*,int const*,void*,struct svn_diff_tree_processor_t const*,int *) ;} ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,int const*,int const*,void*,struct svn_diff_tree_processor_t const*,int *) ;

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
  FUNC_0(VAR_8->dir_closed(VAR_1,
                                VAR_2, VAR_3,
                                VAR_7,
                                VAR_8, VAR_9));
  return VAR_0;
}
