
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obj_section {TYPE_1__* the_bfd_section; } ;
struct TYPE_2__ {int * name; } ;
typedef int CORE_ADDR ;


 struct obj_section* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,char*) ;

int
FUNC_2 (CORE_ADDR VAR_0, char *VAR_1)
{
  struct obj_section *VAR_2;
  int VAR_3 = 0;

  VAR_2 = FUNC_0 (VAR_0);

  VAR_3 = (VAR_2 != ((void*)0)
            && VAR_2->the_bfd_section->name != ((void*)0)
            && FUNC_1 (VAR_2->the_bfd_section->name, ".MIPS.stubs") == 0);
  return (VAR_3);
}
