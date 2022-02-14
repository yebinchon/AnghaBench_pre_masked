
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_handler_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct file_rev_baton {int delta_count; int rev_count; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void *VAR_2, const char *VAR_3, svn_revnum_t VAR_4,
                 apr_hash_t *VAR_5,
                 svn_boolean_t VAR_6,
                 svn_txdelta_window_handler_t *VAR_7,
                 void **VAR_8,
                 apr_array_header_t *VAR_9,
                 apr_pool_t *VAR_10)
{
  struct file_rev_baton *VAR_11 = VAR_2;

  VAR_11->rev_count++;

  if (VAR_7)
    {
      *VAR_7 = VAR_1;
      *VAR_8 = VAR_2;
      VAR_11->delta_count++;
    }

  return VAR_0;
}
