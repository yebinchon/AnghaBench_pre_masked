
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ e_class; } ;
typedef int Elf_Type ;
typedef TYPE_1__ Elf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (int ,scalar_t__,unsigned int,size_t) ;

size_t
FUNC_2(Elf *VAR_3, Elf_Type VAR_4, size_t VAR_5, unsigned int VAR_6)
{

 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0, 0);
  return (0);
 }

 if (VAR_3->e_class == VAR_1 || VAR_3->e_class == VAR_2)
  return (FUNC_1(VAR_4, VAR_3->e_class, VAR_6, VAR_5));

 FUNC_0(VAR_0, 0);
 return (0);
}
