
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff3_block {struct diff3_block* next; } ;



__attribute__((used)) static struct diff3_block *
FUNC_0 (struct diff3_block *VAR_0)
{
  register struct diff3_block *VAR_1, *VAR_2, *VAR_3;

  for (VAR_1 = VAR_0, VAR_3 = 0; VAR_1; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;
      VAR_1->next = VAR_3;
      VAR_3 = VAR_1;
    }

  return VAR_3;
}
