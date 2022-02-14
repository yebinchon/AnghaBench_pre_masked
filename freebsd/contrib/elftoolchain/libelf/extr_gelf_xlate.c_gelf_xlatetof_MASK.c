
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int e_class; } ;
typedef int Elf_Data ;
typedef TYPE_1__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int *,int const*,unsigned int,int ,int ,int ) ;

Elf_Data *
FUNC_3(Elf *VAR_2, Elf_Data *VAR_3, const Elf_Data *VAR_4,
    unsigned int VAR_5)
{
 if (VAR_2 != ((void*)0))
  return (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_2->e_class,
      FUNC_1(VAR_2), VAR_1));
 FUNC_0(VAR_0, 0);
 return (((void*)0));
}
