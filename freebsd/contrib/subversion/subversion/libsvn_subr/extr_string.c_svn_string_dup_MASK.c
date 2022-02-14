
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int ,int ,int *) ;

svn_string_t *
FUNC_1(const svn_string_t *VAR_0, apr_pool_t *VAR_1)
{
  return (VAR_0 ? FUNC_0(VAR_0->data,
                                               VAR_0->len, VAR_1)
                          : ((void*)0));
}
