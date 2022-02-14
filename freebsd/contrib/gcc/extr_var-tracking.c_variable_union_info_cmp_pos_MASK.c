
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable_union_info {scalar_t__ pos; int pos_dst; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct variable_union_info *VAR_2 = VAR_0;
  const struct variable_union_info *VAR_3 = VAR_1;

  if (VAR_2->pos != VAR_3->pos)
    return VAR_2->pos - VAR_3->pos;

  return (VAR_2->pos_dst - VAR_3->pos_dst);
}
