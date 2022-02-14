
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ p_type; int p_flags; int p_memsz; scalar_t__ p_vaddr; } ;
struct TYPE_7__ {int relasize; int phsize; scalar_t__ relocbase; TYPE_2__* phdr; int * rela; int dynsymcount; } ;
typedef int SymCache ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;
typedef int Elf_Rela ;
typedef TYPE_2__ Elf_Phdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*,int const*,int *,int,int *) ;

int
FUNC_4(Obj_Entry *VAR_3, Obj_Entry *VAR_4, int VAR_5,
    RtldLockState *VAR_6)
{
 const Elf_Rela *VAR_7;
 const Elf_Rela *VAR_8;
 const Elf_Phdr *VAR_9;
 SymCache *VAR_10;
 int VAR_11 = -1;

 if ((VAR_5 & VAR_2) != 0)

  return (0);





 if (VAR_3 != VAR_4) {
  VAR_10 = FUNC_1(VAR_3->dynsymcount, sizeof(SymCache));

 } else
  VAR_10 = ((void*)0);






 VAR_7 = (const Elf_Rela *)((const char *)VAR_3->rela + VAR_3->relasize);
 for (VAR_8 = VAR_3->rela; VAR_8 < VAR_7; VAR_8++) {
  if (FUNC_3(VAR_4, VAR_3, VAR_8, VAR_10, VAR_5,
      VAR_6) < 0)
   goto done;
 }
 VAR_11 = 0;
done:
 if (VAR_10 != ((void*)0))
  FUNC_2(VAR_10);





 for (VAR_9 = VAR_3->phdr;
     (const char *)VAR_9 < (const char *)VAR_3->phdr + VAR_3->phsize;
     VAR_9++) {
  if (VAR_9->p_type == VAR_1 && (VAR_9->p_flags & VAR_0) != 0) {
   FUNC_0(VAR_3->relocbase + VAR_9->p_vaddr,
       VAR_9->p_memsz);
  }
 }

 return (VAR_11);
}
