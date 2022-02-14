
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct symlink_baton_t {scalar_t__ at_eof; } ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void *VAR_1, apr_off_t *VAR_2, apr_pool_t *VAR_3)
{
  struct symlink_baton_t *VAR_4 = VAR_1;

  *VAR_2 = VAR_4->at_eof ? 1 : 0;
  return VAR_0;
}
