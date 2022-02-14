
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inferior_list_entry {int id; struct inferior_list_entry* next; } ;
struct TYPE_4__ {struct inferior_list_entry* head; } ;
struct TYPE_3__ {int (* read_auxv ) (int ,char*,unsigned int) ;int (* look_up_symbols ) () ;} ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int *,unsigned int*) ;
 int FUNC_2 (char*,char*,...) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,unsigned int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

void
FUNC_10 (char *VAR_3)
{
  static struct inferior_list_entry *VAR_4;

  if (FUNC_3 ("qSymbol::", VAR_3) == 0)
    {
      if (VAR_2->look_up_symbols != ((void*)0))
 (*VAR_2->look_up_symbols) ();

      FUNC_4 (VAR_3, "OK");
      return;
    }

  if (FUNC_3 ("qfThreadInfo", VAR_3) == 0)
    {
      VAR_4 = VAR_1.head;
      FUNC_2 (VAR_3, "m%x", VAR_4->id);
      VAR_4 = VAR_4->next;
      return;
    }

  if (FUNC_3 ("qsThreadInfo", VAR_3) == 0)
    {
      if (VAR_4 != ((void*)0))
 {
   FUNC_2 (VAR_3, "m%x", VAR_4->id);
   VAR_4 = VAR_4->next;
   return;
 }
      else
 {
   FUNC_2 (VAR_3, "l");
   return;
 }
    }

  if (VAR_2->read_auxv != ((void*)0)
      && FUNC_5 ("qPart:auxv:read::", VAR_3, 17) == 0)
    {
      char VAR_5[(VAR_0 - 1) / 2];
      CORE_ADDR VAR_6;
      unsigned int VAR_7;
      int VAR_8;
      FUNC_1 (&VAR_3[17], &VAR_6, &VAR_7);
      if (VAR_7 > sizeof VAR_5)
 VAR_7 = sizeof VAR_5;
      VAR_8 = (*VAR_2->read_auxv) (VAR_6, VAR_5, VAR_7);
      if (VAR_8 == 0)
 FUNC_9 (VAR_3);
      else if (VAR_8 < 0)
 FUNC_8 (VAR_3);
      else
 FUNC_0 (VAR_5, VAR_3, VAR_8);
      return;
    }



  VAR_3[0] = 0;
}
