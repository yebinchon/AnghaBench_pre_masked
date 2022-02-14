
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int a32; unsigned int a64; } ;
typedef size_t Elf_Type ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

unsigned int
FUNC_0(Elf_Type VAR_3, int VAR_4)
{
 if (VAR_3 >= VAR_1 || (int) VAR_3 < 0)
  return (0);

 return (VAR_4 == VAR_0 ? VAR_2[VAR_3].a32 :
     VAR_2[VAR_3].a64);
}
