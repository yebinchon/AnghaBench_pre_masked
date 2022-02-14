
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data_size; scalar_t__ data_base; scalar_t__ text_size; scalar_t__ text_base; scalar_t__ linkage_ptr; } ;
struct so_list {scalar_t__ loaded; struct so_list* next; TYPE_1__ pa64_solib_desc; int * objfile; int name; } ;


 int * VAR_0 ;
 int FUNC_0 (scalar_t__,char*) ;
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
  FUNC_1 ("   %-19s%-19s%-19s%-19s\n",
       "  text start", "   text end",
       "  data start", "   data end");
  while (VAR_4)
    {
      unsigned int VAR_5;

      FUNC_1 ("%s", VAR_4->name);
      if (VAR_4->objfile == ((void*)0))
 FUNC_1 ("  (symbols not loaded)");
      if (VAR_4->loaded == 0)
 FUNC_1 ("  (shared library unloaded)");
      FUNC_1 ("  %-18s",
 FUNC_0 (VAR_4->pa64_solib_desc.linkage_ptr,
     "016l"));
      FUNC_1 ("\n");
      FUNC_1 ("%-18s",
 FUNC_0 (VAR_4->pa64_solib_desc.text_base,
     "016l"));
      FUNC_1 (" %-18s",
 FUNC_0 ((VAR_4->pa64_solib_desc.text_base
      + VAR_4->pa64_solib_desc.text_size),
     "016l"));
      FUNC_1 (" %-18s",
 FUNC_0 (VAR_4->pa64_solib_desc.data_base,
     "016l"));
      FUNC_1 (" %-18s\n",
 FUNC_0 ((VAR_4->pa64_solib_desc.data_base
      + VAR_4->pa64_solib_desc.data_size),
     "016l"));
      VAR_4 = VAR_4->next;
    }
}
