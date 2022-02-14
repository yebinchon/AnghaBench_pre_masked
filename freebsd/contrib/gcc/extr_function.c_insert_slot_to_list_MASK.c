
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_slot {struct temp_slot* prev; struct temp_slot* next; } ;



__attribute__((used)) static void
FUNC_0 (struct temp_slot *VAR_0, struct temp_slot **VAR_1)
{
  VAR_0->next = *VAR_1;
  if (*VAR_1)
    (*VAR_1)->prev = VAR_0;
  VAR_0->prev = ((void*)0);
  *VAR_1 = VAR_0;
}
