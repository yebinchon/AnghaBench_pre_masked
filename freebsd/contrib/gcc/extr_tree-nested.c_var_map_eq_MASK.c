
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct var_map_elt {scalar_t__ old; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct var_map_elt *VAR_2 = (const struct var_map_elt *) VAR_0;
  const struct var_map_elt *VAR_3 = (const struct var_map_elt *) VAR_1;
  return VAR_2->old == VAR_3->old;
}
