
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* e_ident; scalar_t__ e_machine; scalar_t__ e_version; } ;
typedef TYPE_1__ Elf_Ehdr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__) ;

int
FUNC_1(Elf_Ehdr *VAR_7)
{
 int VAR_8 = 0;






 if (FUNC_0(*VAR_7) &&
     VAR_7->e_ident[VAR_0] == VAR_3 &&
     VAR_7->e_ident[VAR_1] == VAR_4 &&
     VAR_7->e_ident[VAR_2] == VAR_6) {


  if (VAR_7->e_machine == VAR_5 &&
      VAR_7->e_version == VAR_6)
   VAR_8 = 1;
 }
 return VAR_8;
}
