
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ value; scalar_t__ name; } ;
typedef TYPE_1__ svn_prop_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_2(svn_prop_t *VAR_0, apr_pool_t *VAR_1)
{
  if (VAR_0->name)
    VAR_0->name = FUNC_0(VAR_1, VAR_0->name);
  if (VAR_0->value)
    VAR_0->value = FUNC_1(VAR_0->value, VAR_1);
}
