
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int prop_byte_count; int prop_count; } ;
typedef TYPE_2__ edit_baton_t ;
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
  VAR_5->prop_byte_count += VAR_3->len;

  return VAR_0;
}
