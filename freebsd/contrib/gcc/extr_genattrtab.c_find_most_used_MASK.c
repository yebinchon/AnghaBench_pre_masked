
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_value {int num_insns; struct attr_value* next; } ;
struct attr_desc {struct attr_value* first_value; } ;



__attribute__((used)) static struct attr_value *
FUNC_0 (struct attr_desc *VAR_0)
{
  struct attr_value *VAR_1;
  struct attr_value *VAR_2;
  int VAR_3;

  VAR_2 = ((void*)0);
  VAR_3 = -1;

  for (VAR_1 = VAR_0->first_value; VAR_1; VAR_1 = VAR_1->next)
    if (VAR_1->num_insns > VAR_3)
      VAR_3 = VAR_1->num_insns, VAR_2 = VAR_1;

  return VAR_2;
}
