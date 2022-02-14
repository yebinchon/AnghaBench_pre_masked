
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct so_stuff {scalar_t__ load_addr; scalar_t__ objfile; struct so_stuff* next; } ;
struct TYPE_4__ {scalar_t__ lpBaseOfDll; } ;
struct TYPE_5__ {TYPE_1__ UnloadDll; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
typedef scalar_t__ DWORD ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct so_stuff* VAR_1 ;
 struct so_stuff VAR_2 ;
 int FUNC_2 (struct so_stuff*) ;

__attribute__((used)) static int
FUNC_3 (void *VAR_3)
{
  DWORD VAR_4 = (DWORD) VAR_0.u.UnloadDll.lpBaseOfDll + 0x1000;
  struct so_stuff *VAR_5;

  for (VAR_5 = &VAR_2; VAR_5->next != ((void*)0); VAR_5 = VAR_5->next)
    if (VAR_5->next->load_addr == VAR_4)
      {
 struct so_stuff *VAR_6 = VAR_5->next;
 VAR_5->next = VAR_6->next;
 if (!VAR_5->next)
   VAR_1 = VAR_5;
 if (VAR_6->objfile)
   FUNC_1 (VAR_6->objfile);
 FUNC_2(VAR_6);
 return 1;
      }
  FUNC_0 ("Error: dll starting at 0x%lx not found.\n", (DWORD) VAR_4);

  return 0;
}
