
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct web_entry {struct web_entry* pred; } ;



struct web_entry *
FUNC_0 (struct web_entry *VAR_0)
{
  struct web_entry *VAR_1 = VAR_0, *VAR_2;

  while (VAR_0->pred)
    VAR_0 = VAR_0->pred;
  while (VAR_1->pred)
    {
      VAR_2 = VAR_1->pred;
      VAR_1->pred = VAR_0;
      VAR_1 = VAR_2;
    }
  return VAR_0;
}
