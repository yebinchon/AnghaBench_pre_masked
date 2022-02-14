
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int prop_count; } ;
typedef TYPE_1__ edit_baton_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void *VAR_1,
                const char *VAR_2,
                const svn_string_t *VAR_3,
                apr_pool_t *VAR_4)
{
  edit_baton_t *VAR_5 = VAR_1;
  VAR_5->prop_count++;

  return VAR_0;
}
