
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_5__ {TYPE_1__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int len; int data; } ;


 int const* FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static const svn_string_t *
FUNC_1(const svn_skel_t *VAR_0,
                 apr_pool_t *VAR_1)
{
  if (VAR_0->children == ((void*)0))
    return ((void*)0);

  return FUNC_0(VAR_0->children->data,
                            VAR_0->children->len,
                            VAR_1);
}
