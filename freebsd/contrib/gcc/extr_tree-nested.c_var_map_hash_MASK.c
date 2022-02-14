
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct var_map_elt {int old; } ;
typedef int hashval_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static hashval_t
FUNC_1 (const void *VAR_0)
{
  const struct var_map_elt *VAR_1 = (const struct var_map_elt *) VAR_0;
  return FUNC_0 (VAR_1->old);
}
