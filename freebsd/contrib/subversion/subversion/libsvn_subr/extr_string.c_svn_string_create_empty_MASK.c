
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;

svn_string_t *
FUNC_1(apr_pool_t *VAR_1)
{
  svn_string_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));
  VAR_2->data = VAR_0;
  VAR_2->len = 0;

  return VAR_2;
}
