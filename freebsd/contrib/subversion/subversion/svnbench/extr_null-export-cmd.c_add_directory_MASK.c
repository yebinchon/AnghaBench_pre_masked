
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int dir_count; } ;
typedef TYPE_1__ edit_baton_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(const char *VAR_1,
              void *VAR_2,
              const char *VAR_3,
              svn_revnum_t VAR_4,
              apr_pool_t *VAR_5,
              void **VAR_6)
{
  edit_baton_t *VAR_7 = VAR_2;
  VAR_7->dir_count++;

  *VAR_6 = VAR_2;
  return VAR_0;
}
