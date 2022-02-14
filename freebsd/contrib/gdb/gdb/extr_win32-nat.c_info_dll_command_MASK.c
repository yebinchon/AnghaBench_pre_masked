
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct so_stuff {int load_addr; int name; struct so_stuff* next; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,...) ;
 struct so_stuff VAR_1 ;

void
FUNC_1 (char *VAR_2, int VAR_3)
{
  struct so_stuff *VAR_4 = &VAR_1;

  if (!VAR_4->next)
    return;

  FUNC_0 ("%*s  Load Address\n", -VAR_0, "DLL Name");
  while ((VAR_4 = VAR_4->next) != ((void*)0))
    FUNC_0 ("%*s  %08lx\n", -VAR_0, VAR_4->name, VAR_4->load_addr);

  return;
}
