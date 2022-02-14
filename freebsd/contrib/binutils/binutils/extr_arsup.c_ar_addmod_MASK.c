
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list {char* name; struct list* next; } ;
struct TYPE_4__ {struct TYPE_4__* archive_next; } ;
typedef TYPE_1__ bfd ;
struct TYPE_5__ {TYPE_1__* archive_head; } ;


 char* FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 () ;
 TYPE_2__* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;

void
FUNC_4 (struct list *VAR_3)
{
  if (!VAR_0)
    {
      FUNC_2 (VAR_2, FUNC_0("%s: no open output archive\n"), VAR_1);
      FUNC_3 ();
    }
  else
    {
      while (VAR_3)
 {
   bfd *VAR_4 = FUNC_1 (VAR_3->name, ((void*)0));

   if (!VAR_4)
     {
       FUNC_2 (VAR_2, FUNC_0("%s: can't open file %s\n"),
         VAR_1, VAR_3->name);
       FUNC_3 ();
     }
   else
     {
       VAR_4->archive_next = VAR_0->archive_head;
       VAR_0->archive_head = VAR_4;
     }
   VAR_3 = VAR_3->next;
 }
    }
}
