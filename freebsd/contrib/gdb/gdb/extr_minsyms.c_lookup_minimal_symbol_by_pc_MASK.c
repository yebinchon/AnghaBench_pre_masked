
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obj_section {int the_bfd_section; } ;
struct minimal_symbol {int dummy; } ;
typedef int CORE_ADDR ;


 struct obj_section* FUNC_0 (int ) ;
 struct minimal_symbol* FUNC_1 (int ,int ) ;

struct minimal_symbol *
FUNC_2 (CORE_ADDR VAR_0)
{



  struct obj_section *VAR_1 = FUNC_0 (VAR_0);
  if (VAR_1 == ((void*)0))
    return ((void*)0);
  return FUNC_1 (VAR_0, VAR_1->the_bfd_section);
}
