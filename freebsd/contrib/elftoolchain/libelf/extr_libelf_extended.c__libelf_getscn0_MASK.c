
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int e_scn; } ;
struct TYPE_7__ {TYPE_1__ e_elf; } ;
struct TYPE_8__ {TYPE_2__ e_u; } ;
typedef int Elf_Scn ;
typedef TYPE_3__ Elf ;


 int * FUNC_0 (int ,int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (TYPE_3__*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static Elf_Scn *
FUNC_2(Elf *VAR_2)
{
 Elf_Scn *VAR_3;

 if ((VAR_3 = FUNC_0(VAR_1, &VAR_2->e_u.e_elf.e_scn)) != ((void*)0))
  return (VAR_3);

 return (FUNC_1(VAR_2, (size_t) VAR_0));
}
