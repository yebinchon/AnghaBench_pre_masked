
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int offset; } ;
typedef TYPE_1__ prop_read_baton_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void *VAR_1, apr_off_t VAR_2, apr_pool_t *VAR_3)
{
  prop_read_baton_t *VAR_4 = VAR_1;

  VAR_4->offset = VAR_2;
  return VAR_0;
}
