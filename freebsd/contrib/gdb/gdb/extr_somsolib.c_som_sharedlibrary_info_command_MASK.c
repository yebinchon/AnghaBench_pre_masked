
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int struct_version; int bind_mode; unsigned int library_version; unsigned int text_addr; unsigned int text_end; unsigned int data_start; unsigned int data_end; unsigned int got_value; int name; } ;
struct so_list {struct so_list* next; TYPE_1__ som_solib; int * objfile; } ;


 int * VAR_0 ;
 int FUNC_0 (unsigned int,char*) ;
 int FUNC_1 (char*,...) ;
 struct so_list* VAR_1 ;

__attribute__((used)) static void
FUNC_2 (char *VAR_2, int VAR_3)
{
  struct so_list *VAR_4 = VAR_1;

  if (VAR_0 == ((void*)0))
    {
      FUNC_1 ("No executable file.\n");
      return;
    }

  if (VAR_4 == ((void*)0))
    {
      FUNC_1 ("No shared libraries loaded at this time.\n");
      return;
    }

  FUNC_1 ("Shared Object Libraries\n");
  FUNC_1 ("    %-12s%-12s%-12s%-12s%-12s%-12s\n",
  "  flags", "  tstart", "   tend", "  dstart", "   dend", "   dlt");
  while (VAR_4)
    {
      unsigned int VAR_5;

      VAR_5 = VAR_4->som_solib.struct_version << 24;
      VAR_5 |= VAR_4->som_solib.bind_mode << 16;
      VAR_5 |= VAR_4->som_solib.library_version;
      FUNC_1 ("%s", VAR_4->som_solib.name);
      if (VAR_4->objfile == ((void*)0))
 FUNC_1 ("  (symbols not loaded)");
      FUNC_1 ("\n");
      FUNC_1 ("    %-12s", FUNC_0 (VAR_5, "08l"));
      FUNC_1 ("%-12s",
      FUNC_0 (VAR_4->som_solib.text_addr, "08l"));
      FUNC_1 ("%-12s",
       FUNC_0 (VAR_4->som_solib.text_end, "08l"));
      FUNC_1 ("%-12s",
     FUNC_0 (VAR_4->som_solib.data_start, "08l"));
      FUNC_1 ("%-12s",
       FUNC_0 (VAR_4->som_solib.data_end, "08l"));
      FUNC_1 ("%-12s\n",
      FUNC_0 (VAR_4->som_solib.got_value, "08l"));
      VAR_4 = VAR_4->next;
    }
}
