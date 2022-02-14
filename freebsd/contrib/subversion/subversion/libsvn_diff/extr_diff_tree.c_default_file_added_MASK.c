
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int (* file_closed ) (char const*,int *,int const*,void*,TYPE_1__ const*,int *) ;} ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,int *,int const*,void*,TYPE_1__ const*,int *) ;

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
  FUNC_0(VAR_9->file_closed(VAR_1,
                                 ((void*)0), VAR_3,
                                 VAR_8, VAR_9, VAR_10));
  return VAR_0;
}
