
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_error_t ;
struct node_baton {TYPE_1__* node; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int prop_mod; } ;


 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void *VAR_2,
                 const char *VAR_3,
                 const svn_string_t *VAR_4,
                 apr_pool_t *VAR_5)
{
  struct node_baton *VAR_6 = VAR_2;
  VAR_6->node->prop_mod = VAR_1;
  return VAR_0;
}
