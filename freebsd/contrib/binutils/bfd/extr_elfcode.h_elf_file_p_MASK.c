
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_3__ {scalar_t__* e_ident; } ;
typedef TYPE_1__ Elf_External_Ehdr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static inline bfd_boolean
FUNC_0 (Elf_External_Ehdr *VAR_8)
{
  return ((VAR_8->e_ident[VAR_0] == VAR_4)
   && (VAR_8->e_ident[VAR_1] == VAR_5)
   && (VAR_8->e_ident[VAR_2] == VAR_6)
   && (VAR_8->e_ident[VAR_3] == VAR_7));
}
