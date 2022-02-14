
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {int to_has_all_memory; int (* to_files_info ) (struct target_ops*) ;int to_longname; scalar_t__ to_stratum; int to_has_memory; struct target_ops* beneath; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct target_ops*) ;
 TYPE_1__* VAR_1 ;
 struct target_ops* VAR_2 ;

__attribute__((used)) static void
FUNC_3 (char *VAR_3, int VAR_4)
{
  struct target_ops *VAR_5;
  int VAR_6 = 0;

  if (VAR_1 != ((void*)0))
    FUNC_1 ("Symbols from \"%s\".\n", VAR_1->name);






  for (VAR_5 = VAR_2; VAR_5 != ((void*)0); VAR_5 = VAR_5->beneath)
    {
      if (!VAR_5->to_has_memory)
 continue;

      if ((int) (VAR_5->to_stratum) <= (int) VAR_0)
 continue;
      if (VAR_6)
 FUNC_1 ("\tWhile running this, GDB does not access memory from...\n");
      FUNC_1 ("%s:\n", VAR_5->to_longname);
      (VAR_5->to_files_info) (VAR_5);
      VAR_6 = VAR_5->to_has_all_memory;
    }
}
