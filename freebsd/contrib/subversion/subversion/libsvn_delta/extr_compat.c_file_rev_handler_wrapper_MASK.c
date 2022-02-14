
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_handler_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct file_rev_handler_wrapper_baton {int baton; int * (* handler ) (int ,char const*,int ,int *,int *,void**,int *,int *) ;} ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int * VAR_0 ;
 int * FUNC_0 (int ,char const*,int ,int *,int *,void**,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
                         const char *VAR_2,
                         svn_revnum_t VAR_3,
                         apr_hash_t *VAR_4,
                         svn_boolean_t VAR_5,
                         svn_txdelta_window_handler_t *VAR_6,
                         void **VAR_7,
                         apr_array_header_t *VAR_8,
                         apr_pool_t *VAR_9)
{
  struct file_rev_handler_wrapper_baton *VAR_10 = VAR_1;

  if (VAR_10->handler)
    return VAR_10->handler(VAR_10->baton,
                        VAR_2,
                        VAR_3,
                        VAR_4,
                        VAR_6,
                        VAR_7,
                        VAR_8,
                        VAR_9);

  return VAR_0;
}
