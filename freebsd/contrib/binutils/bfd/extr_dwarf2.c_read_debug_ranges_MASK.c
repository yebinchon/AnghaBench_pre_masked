
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dwarf2_debug {int dwarf_ranges_buffer; int syms; int dwarf_ranges_size; } ;
struct comp_unit {int * abfd; struct dwarf2_debug* stash; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {int size; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*,int *,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (struct comp_unit *VAR_3)
{
  struct dwarf2_debug *VAR_4 = VAR_3->stash;
  if (! VAR_4->dwarf_ranges_buffer)
    {
      bfd *VAR_5 = VAR_3->abfd;
      asection *VAR_6;

      VAR_6 = FUNC_2 (VAR_5, ".debug_ranges");
      if (! VAR_6)
 {
   FUNC_1) (FUNC_0("Dwarf Error: Can't find .debug_ranges section."));
   FUNC_3 (VAR_2);
   return VAR_0;
 }

      VAR_4->dwarf_ranges_size = VAR_6->size;
      VAR_4->dwarf_ranges_buffer
 = FUNC_4 (VAR_5, VAR_6, ((void*)0),
           VAR_4->syms);
      if (! VAR_4->dwarf_ranges_buffer)
 return VAR_0;
    }
  return VAR_1;
}
