
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_diff_source_t ;
struct svn_diff_tree_processor_t {struct summarize_baton_t* baton; } ;
struct summarize_baton_t {int dummy; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct summarize_baton_t*,char const*,int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_4,
                 const svn_diff_source_t *VAR_5,
                 const svn_diff_source_t *VAR_6,
                           apr_hash_t *VAR_7,
                           apr_hash_t *VAR_8,
                 const apr_array_header_t *VAR_9,
                 void *VAR_10,
                 const struct svn_diff_tree_processor_t *VAR_11,
                 apr_pool_t *VAR_12)
{
  struct summarize_baton_t *VAR_13 = VAR_11->baton;

  FUNC_0(FUNC_1(VAR_13, VAR_4, VAR_2,
                       VAR_1, VAR_3, VAR_12));

  return VAR_0;
}
