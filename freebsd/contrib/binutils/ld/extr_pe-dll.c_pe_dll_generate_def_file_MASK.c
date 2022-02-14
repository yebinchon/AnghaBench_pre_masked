
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int ordinal; scalar_t__ name; TYPE_1__* module; scalar_t__ internal_name; } ;
typedef TYPE_4__ def_file_import ;
struct TYPE_12__ {int ordinal; scalar_t__ flag_data; scalar_t__ flag_noname; scalar_t__ flag_constant; scalar_t__ flag_private; scalar_t__ internal_name; scalar_t__ name; } ;
typedef TYPE_5__ def_file_export ;
struct TYPE_9__ {scalar_t__ ImageBase; } ;
struct TYPE_14__ {TYPE_2__ pe_opthdr; } ;
struct TYPE_13__ {int version_minor; int version_major; int stack_reserve; int heap_reserve; int stack_commit; int heap_commit; int num_section_defs; int num_exports; int num_imports; TYPE_4__* imports; TYPE_5__* exports; TYPE_3__* section_defs; scalar_t__ description; scalar_t__ name; scalar_t__ is_dll; } ;
struct TYPE_10__ {scalar_t__ flag_shared; scalar_t__ flag_execute; scalar_t__ flag_write; scalar_t__ flag_read; scalar_t__ class; scalar_t__ name; } ;
struct TYPE_8__ {scalar_t__ name; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int VAR_1 ;
 TYPE_7__* FUNC_5 (int ) ;
 TYPE_6__* VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

void
FUNC_8 (const char *VAR_4)
{
  int VAR_5;
  FILE *VAR_6 = FUNC_3 (VAR_4, "w");

  if (VAR_6 == ((void*)0))

    FUNC_1 (FUNC_0("%s: Can't open output def file %s\n"),
    VAR_3, VAR_4);

  if (VAR_2)
    {
      if (VAR_2->name)
 {
   if (VAR_2->is_dll)
     FUNC_4 (VAR_6, "LIBRARY ");
   else
     FUNC_4 (VAR_6, "NAME ");

   FUNC_6 (VAR_2->name, VAR_6, 1);

   if (FUNC_5 (VAR_1)->pe_opthdr.ImageBase)
     FUNC_4 (VAR_6, " BASE=0x%lx",
       (unsigned long) FUNC_5 (VAR_1)->pe_opthdr.ImageBase);
   FUNC_4 (VAR_6, "\n");
 }

      if (VAR_2->description)
 {
   FUNC_4 (VAR_6, "DESCRIPTION ");
   FUNC_6 (VAR_2->description, VAR_6, 1);
   FUNC_4 (VAR_6, "\n");
 }

      if (VAR_2->version_minor != -1)
 FUNC_4 (VAR_6, "VERSION %d.%d\n", VAR_2->version_major,
   VAR_2->version_minor);
      else if (VAR_2->version_major != -1)
 FUNC_4 (VAR_6, "VERSION %d\n", VAR_2->version_major);

      if (VAR_2->stack_reserve != -1 || VAR_2->heap_reserve != -1)
 FUNC_4 (VAR_6, "\n");

      if (VAR_2->stack_commit != -1)
 FUNC_4 (VAR_6, "STACKSIZE 0x%x,0x%x\n",
   VAR_2->stack_reserve, VAR_2->stack_commit);
      else if (VAR_2->stack_reserve != -1)
 FUNC_4 (VAR_6, "STACKSIZE 0x%x\n", VAR_2->stack_reserve);

      if (VAR_2->heap_commit != -1)
 FUNC_4 (VAR_6, "HEAPSIZE 0x%x,0x%x\n",
   VAR_2->heap_reserve, VAR_2->heap_commit);
      else if (VAR_2->heap_reserve != -1)
 FUNC_4 (VAR_6, "HEAPSIZE 0x%x\n", VAR_2->heap_reserve);

      if (VAR_2->num_section_defs > 0)
 {
   FUNC_4 (VAR_6, "\nSECTIONS\n\n");

   for (VAR_5 = 0; VAR_5 < VAR_2->num_section_defs; VAR_5++)
     {
       FUNC_4 (VAR_6, "    ");
       FUNC_6 (VAR_2->section_defs[VAR_5].name, VAR_6, 0);

       if (VAR_2->section_defs[VAR_5].class)
  {
    FUNC_4 (VAR_6, " CLASS ");
    FUNC_6 (VAR_2->section_defs[VAR_5].class, VAR_6, 0);
  }

       if (VAR_2->section_defs[VAR_5].flag_read)
  FUNC_4 (VAR_6, " READ");

       if (VAR_2->section_defs[VAR_5].flag_write)
  FUNC_4 (VAR_6, " WRITE");

       if (VAR_2->section_defs[VAR_5].flag_execute)
  FUNC_4 (VAR_6, " EXECUTE");

       if (VAR_2->section_defs[VAR_5].flag_shared)
  FUNC_4 (VAR_6, " SHARED");

       FUNC_4 (VAR_6, "\n");
     }
 }

      if (VAR_2->num_exports > 0)
 {
   FUNC_4 (VAR_6, "EXPORTS\n");

   for (VAR_5 = 0; VAR_5 < VAR_2->num_exports; VAR_5++)
     {
       def_file_export *VAR_7 = VAR_2->exports + VAR_5;
       FUNC_4 (VAR_6, "    ");
       FUNC_6 (VAR_7->name, VAR_6, 0);

       if (VAR_7->internal_name && FUNC_7 (VAR_7->internal_name, VAR_7->name))
  {
    FUNC_4 (VAR_6, " = ");
    FUNC_6 (VAR_7->internal_name, VAR_6, 0);
  }

       if (VAR_7->ordinal != -1)
  FUNC_4 (VAR_6, " @%d", VAR_7->ordinal);

       if (VAR_7->flag_private)
  FUNC_4 (VAR_6, " PRIVATE");

       if (VAR_7->flag_constant)
  FUNC_4 (VAR_6, " CONSTANT");

       if (VAR_7->flag_noname)
  FUNC_4 (VAR_6, " NONAME");

       if (VAR_7->flag_data)
  FUNC_4 (VAR_6, " DATA");

       FUNC_4 (VAR_6, "\n");
     }
 }

      if (VAR_2->num_imports > 0)
 {
   FUNC_4 (VAR_6, "\nIMPORTS\n\n");

   for (VAR_5 = 0; VAR_5 < VAR_2->num_imports; VAR_5++)
     {
       def_file_import *VAR_8 = VAR_2->imports + VAR_5;
       FUNC_4 (VAR_6, "    ");

       if (VAR_8->internal_name
    && (!VAR_8->name || FUNC_7 (VAR_8->internal_name, VAR_8->name)))
  {
    FUNC_6 (VAR_8->internal_name, VAR_6, 0);
    FUNC_4 (VAR_6, " = ");
  }

       FUNC_6 (VAR_8->module->name, VAR_6, 0);
       FUNC_4 (VAR_6, ".");

       if (VAR_8->name)
  FUNC_6 (VAR_8->name, VAR_6, 0);
       else
  FUNC_4 (VAR_6, "%d", VAR_8->ordinal);

       FUNC_4 (VAR_6, "\n");
     }
 }
    }
  else
    FUNC_4 (VAR_6, FUNC_0("; no contents available\n"));

  if (FUNC_2 (VAR_6) == VAR_0)

    FUNC_1 (FUNC_0("%P: Error closing file `%s'\n"), VAR_4);
}
