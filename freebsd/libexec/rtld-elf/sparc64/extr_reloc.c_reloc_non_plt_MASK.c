
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int relasize; int * rela; int dynsymcount; } ;
typedef int SymCache ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;
typedef int Elf_Rela ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int const*,int *,int,int *) ;

int
FUNC_3(Obj_Entry *VAR_1, Obj_Entry *VAR_2, int VAR_3,
    RtldLockState *VAR_4)
{
 const Elf_Rela *VAR_5;
 const Elf_Rela *VAR_6;
 SymCache *VAR_7;
 int VAR_8 = -1;

 if ((VAR_3 & VAR_0) != 0)

  return (0);





 if (VAR_1 != VAR_2) {
  VAR_7 = FUNC_0(VAR_1->dynsymcount, sizeof(SymCache));

 } else
  VAR_7 = ((void*)0);

 VAR_5 = (const Elf_Rela *)((const char *)VAR_1->rela + VAR_1->relasize);
 for (VAR_6 = VAR_1->rela; VAR_6 < VAR_5; VAR_6++) {
  if (FUNC_2(VAR_1, VAR_6, VAR_7, VAR_3, VAR_4) < 0)
   goto done;
 }
 VAR_8 = 0;
done:
 if (VAR_7 != ((void*)0))
  FUNC_1(VAR_7);
 return (VAR_8);
}
