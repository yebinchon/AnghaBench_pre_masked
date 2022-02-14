
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int revision; } ;
typedef TYPE_1__ svn_diff_source_t ;
struct svn_diff_tree_processor_t {int * baton; } ;
typedef int diff_writer_info_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,int ,int ,int const*,int *,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_2,
                 const svn_diff_source_t *VAR_3,
                 const svn_diff_source_t *VAR_4,
                           apr_hash_t *VAR_5,
                           apr_hash_t *VAR_6,
                 const apr_array_header_t *VAR_7,
                 void *VAR_8,
                 const struct svn_diff_tree_processor_t *VAR_9,
                 apr_pool_t *VAR_10)
{
  diff_writer_info_t *VAR_11 = VAR_9->baton;

  FUNC_0(FUNC_1(VAR_2,
                             VAR_3->revision,
                             VAR_4->revision,
                             VAR_7,
                             VAR_5, VAR_6,
                             VAR_1 ,
                             VAR_11,
                             VAR_10));

  return VAR_0;
}
