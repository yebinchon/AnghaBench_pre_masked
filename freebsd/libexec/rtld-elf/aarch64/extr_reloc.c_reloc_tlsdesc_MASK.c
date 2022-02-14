
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ r_addend; int r_info; } ;
struct TYPE_10__ {scalar_t__ st_value; scalar_t__ st_shndx; } ;
struct TYPE_9__ {scalar_t__ tlsoffset; int tlsindex; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Rela ;
typedef scalar_t__ Elf_Addr ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_1 (scalar_t__,TYPE_1__ const*,TYPE_1__ const**,int,int *,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(const Obj_Entry *VAR_4, const Elf_Rela *VAR_5, Elf_Addr *VAR_6,
    int VAR_7, RtldLockState *VAR_8)
{
 const Elf_Sym *VAR_9;
 const Obj_Entry *VAR_10;
 Elf_Addr VAR_11;


 VAR_11 = 0;
 if (FUNC_0(VAR_5->r_info) != 0) {
  VAR_9 = FUNC_1(FUNC_0(VAR_5->r_info), VAR_4, &VAR_10, VAR_7,
       ((void*)0), VAR_8);
  if (VAR_9 == ((void*)0))
   FUNC_3();
  VAR_11 = VAR_9->st_value;
  VAR_4 = VAR_10;
  if (VAR_9->st_shndx == VAR_0) {

   VAR_6[0] = (Elf_Addr)VAR_3;
   VAR_6[1] = VAR_5->r_addend;
   return;
  }
 }
 VAR_11 += VAR_5->r_addend;

 if (VAR_4->tlsoffset != 0) {

  VAR_6[0] = (Elf_Addr)VAR_2;
  VAR_6[1] = VAR_4->tlsoffset + VAR_11;
 } else {

  VAR_6[0] = (Elf_Addr)VAR_1;
  VAR_6[1] = FUNC_2(VAR_4->tlsindex, VAR_11);
 }
}
