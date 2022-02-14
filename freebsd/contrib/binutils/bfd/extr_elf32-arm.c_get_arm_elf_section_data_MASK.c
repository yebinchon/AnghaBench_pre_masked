
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_list {int sec; } ;
typedef int asection ;
typedef int _arm_elf_section_data ;


 int * FUNC_0 (int ) ;
 struct section_list* FUNC_1 (int *) ;

__attribute__((used)) static _arm_elf_section_data *
FUNC_2 (asection * VAR_0)
{
  struct section_list * VAR_1;

  VAR_1 = FUNC_1 (VAR_0);

  if (VAR_1)
    return FUNC_0 (VAR_1->sec);
  else
    return ((void*)0);
}
