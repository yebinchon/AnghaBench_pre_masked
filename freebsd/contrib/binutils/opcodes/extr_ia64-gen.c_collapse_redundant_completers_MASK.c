
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct main_entry {int * completers; struct main_entry* next; } ;
struct TYPE_2__ {int num; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct main_entry*,int *) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *) ;
 struct main_entry* VAR_2 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  struct main_entry *VAR_3;
  int VAR_4;

  for (VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
    {
      if (VAR_3->completers == ((void*)0))
 FUNC_0 ();

      FUNC_1 (VAR_3, VAR_3->completers);
      VAR_3->completers = FUNC_2 (VAR_3->completers);
    }


  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    VAR_0[VAR_4]->num = VAR_4;
}
