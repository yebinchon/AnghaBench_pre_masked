
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list {char* name; struct list* next; } ;
struct TYPE_4__ {struct TYPE_4__* archive_next; int filename; } ;
typedef TYPE_1__ bfd ;
struct TYPE_5__ {TYPE_1__* archive_head; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 () ;
 TYPE_2__* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;

void
FUNC_5 (struct list *VAR_3)
{
  if (!VAR_0)
    {
      FUNC_3 (VAR_2, FUNC_1("%s: no open output archive\n"), VAR_1);
      FUNC_4 ();
    }
  else
    {
      while (VAR_3)
 {

   bfd *VAR_4 = VAR_0->archive_head;
   bfd **VAR_5 = &(VAR_0->archive_head);
   int VAR_6 = 0;

   while (VAR_4)
     {
       if (FUNC_0 (VAR_4->filename, VAR_3->name) == 0)
  {

    bfd *VAR_7 = FUNC_2 (VAR_3->name, 0);

    if (!VAR_7)
      {
        FUNC_3 (VAR_2, FUNC_1("%s: can't open file %s\n"),
          VAR_1, VAR_3->name);
        FUNC_4 ();
      }
    else
      {
        *VAR_5 = VAR_7;
        VAR_7->archive_next = VAR_4->archive_next;
        VAR_6 = 1;
      }
  }
       else
  {
    VAR_5 = &(VAR_4->archive_next);
  }
       VAR_4 = VAR_4->archive_next;
     }

   if (!VAR_6)
     {
       bfd *VAR_8 = FUNC_2 (VAR_3->name, 0);

       FUNC_3 (VAR_2,FUNC_1("%s: can't find module file %s\n"),
         VAR_1, VAR_3->name);
       if (!VAR_8)
  {
    FUNC_3 (VAR_2, FUNC_1("%s: can't open file %s\n"),
      VAR_1, VAR_3->name);
    FUNC_4 ();
  }
       else
  *VAR_5 = VAR_8;
     }

   VAR_3 = VAR_3->next;
 }
    }
}
