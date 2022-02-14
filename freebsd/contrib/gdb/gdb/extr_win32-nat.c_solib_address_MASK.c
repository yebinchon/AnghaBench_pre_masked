
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct so_stuff {scalar_t__ load_addr; scalar_t__ end_addr; char* name; struct so_stuff* next; } ;
typedef scalar_t__ CORE_ADDR ;


 struct so_stuff VAR_0 ;

char *
FUNC_0 (CORE_ADDR VAR_1)
{
  struct so_stuff *VAR_2;
  for (VAR_2 = &VAR_0; VAR_2->next != ((void*)0); VAR_2 = VAR_2->next)
    if (VAR_1 >= VAR_2->load_addr && VAR_1 <= VAR_2->end_addr)
      return VAR_2->name;
  return ((void*)0);
}
