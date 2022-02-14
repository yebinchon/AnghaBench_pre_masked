
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int byte_count; } ;
typedef TYPE_1__ edit_baton_t ;
typedef scalar_t__ apr_size_t ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void *VAR_1, const char *VAR_2, apr_size_t *VAR_3)
{
  edit_baton_t *VAR_4 = VAR_1;
  VAR_4->byte_count += *VAR_3;

  return VAR_0;
}
