
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t s_ndx; } ;
typedef TYPE_1__ Elf_Scn ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_1 ;

size_t
FUNC_1(Elf_Scn *VAR_2)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_0, 0);
  return (VAR_1);
 }
 return (VAR_2->s_ndx);
}
