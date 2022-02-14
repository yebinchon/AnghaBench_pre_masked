
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ e_kind; } ;
typedef scalar_t__ Elf_Kind ;
typedef TYPE_1__ Elf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

Elf_Kind
FUNC_0(Elf *VAR_3)
{
 if (VAR_3 == ((void*)0))
  return (VAR_2);
 if (VAR_3->e_kind == VAR_0 ||
     VAR_3->e_kind == VAR_1)
  return (VAR_3->e_kind);
 return (VAR_2);
}
