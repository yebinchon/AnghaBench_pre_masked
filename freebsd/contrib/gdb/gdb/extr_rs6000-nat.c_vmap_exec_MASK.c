
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_8__ {TYPE_2__* to_sections; TYPE_2__* to_sections_end; } ;
struct TYPE_7__ {scalar_t__ dvma; scalar_t__ dstart; scalar_t__ tvma; scalar_t__ tstart; } ;
struct TYPE_6__ {int endaddr; int addr; TYPE_1__* the_bfd_section; } ;
struct TYPE_5__ {int name; } ;


 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int * VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  static bfd *VAR_3;
  int VAR_4;

  if (VAR_3 == VAR_0)
    return;

  VAR_3 = VAR_0;

  if (!VAR_2 || !VAR_1.to_sections)
    FUNC_1 ("vmap_exec: vmap or exec_ops.to_sections == 0\n");

  for (VAR_4 = 0; &VAR_1.to_sections[VAR_4] < VAR_1.to_sections_end; VAR_4++)
    {
      if (FUNC_0 (".text", VAR_1.to_sections[VAR_4].the_bfd_section->name))
 {
   VAR_1.to_sections[VAR_4].addr += VAR_2->tstart - VAR_2->tvma;
   VAR_1.to_sections[VAR_4].endaddr += VAR_2->tstart - VAR_2->tvma;
 }
      else if (FUNC_0 (".data", VAR_1.to_sections[VAR_4].the_bfd_section->name))
 {
   VAR_1.to_sections[VAR_4].addr += VAR_2->dstart - VAR_2->dvma;
   VAR_1.to_sections[VAR_4].endaddr += VAR_2->dstart - VAR_2->dvma;
 }
      else if (FUNC_0 (".bss", VAR_1.to_sections[VAR_4].the_bfd_section->name))
 {
   VAR_1.to_sections[VAR_4].addr += VAR_2->dstart - VAR_2->dvma;
   VAR_1.to_sections[VAR_4].endaddr += VAR_2->dstart - VAR_2->dvma;
 }
    }
}
