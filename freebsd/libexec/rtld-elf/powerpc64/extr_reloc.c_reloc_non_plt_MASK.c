
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ p_type; int p_flags; int p_memsz; scalar_t__ p_vaddr; } ;
struct TYPE_7__ {int dynsymcount; int relasize; int phsize; scalar_t__ relocbase; TYPE_2__* phdr; int * rela; } ;
typedef int SymCache ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;
typedef int Elf_Rela ;
typedef TYPE_2__ Elf_Phdr ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int ) ;
 int * FUNC_1 (int *,int,int,int ,int,int ) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*,int const*,int *,int,int *) ;

int
FUNC_4(Obj_Entry *VAR_7, Obj_Entry *VAR_8, int VAR_9,
    RtldLockState *VAR_10)
{
 const Elf_Rela *VAR_11;
 const Elf_Rela *VAR_12;
 const Elf_Phdr *VAR_13;
 SymCache *VAR_14;
 int VAR_15 = VAR_7->dynsymcount * sizeof(SymCache);
 int VAR_16 = -1;

 if ((VAR_9 & VAR_6) != 0)

  return (0);





 if (VAR_7 != VAR_8) {
  VAR_14 = FUNC_1(((void*)0), VAR_15, VAR_3|VAR_4, VAR_0,
      -1, 0);
  if (VAR_14 == VAR_1)
   VAR_14 = ((void*)0);
 } else
  VAR_14 = ((void*)0);






 VAR_11 = (const Elf_Rela *)((const char *)VAR_7->rela + VAR_7->relasize);
 for (VAR_12 = VAR_7->rela; VAR_12 < VAR_11; VAR_12++) {
  if (FUNC_3(VAR_8, VAR_7, VAR_12, VAR_14, VAR_9,
      VAR_10) < 0)
   goto done;
 }
 VAR_16 = 0;
done:
 if (VAR_14)
  FUNC_2(VAR_14, VAR_15);





 for (VAR_13 = VAR_7->phdr;
     (const char *)VAR_13 < (const char *)VAR_7->phdr + VAR_7->phsize;
     VAR_13++) {
  if (VAR_13->p_type == VAR_5 && (VAR_13->p_flags & VAR_2) != 0) {
   FUNC_0(VAR_7->relocbase + VAR_13->p_vaddr,
       VAR_13->p_memsz);
  }
 }

 return (VAR_16);
}
