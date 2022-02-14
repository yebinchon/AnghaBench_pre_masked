
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {scalar_t__ r_offset; } ;
struct TYPE_5__ {int pltrelasize; int* pltgot; scalar_t__ relocbase; int * gotptr; TYPE_2__ const* pltrela; } ;
typedef TYPE_1__ Obj_Entry ;
typedef int Elf_Word ;
typedef TYPE_2__ Elf_Rela ;
typedef int Elf_Addr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*,void*,void*,int,int) ;

__attribute__((used)) static int
FUNC_4(Obj_Entry *VAR_1, const Elf_Rela *VAR_2)
{
 Elf_Word *VAR_3 = (Elf_Word *)(VAR_1->relocbase + VAR_2->r_offset);
 Elf_Addr *VAR_4, *VAR_5, *VAR_6;
 Elf_Addr VAR_7;
 int VAR_8 = VAR_1->pltrelasize / sizeof(Elf_Rela);
 int VAR_9;

 VAR_9 = VAR_2 - VAR_1->pltrela;

 if (VAR_9 < 0)
  return (-1);

 if (VAR_1->gotptr != ((void*)0)) {
  *VAR_3 += (Elf_Addr)VAR_1->relocbase;
  return (0);
 }

 VAR_5 = VAR_1->pltgot + 5;
 VAR_4 = VAR_5 + 5;

 VAR_7 = (Elf_Addr)VAR_4 - (Elf_Addr)(VAR_3 + 1);

 FUNC_3(" reloc_plt_object: where=%p,pltres=%p,reloff=%x,distance=%x",
     (void *)VAR_3, (void *)VAR_4, VAR_9, VAR_7);

 if (VAR_9 < VAR_0) {


  VAR_3[0] = 0x39600000 | VAR_9;
  VAR_3[1] = 0x48000000 | (VAR_7 & 0x03fffffc);
 } else {
  VAR_6 = VAR_1->pltgot + FUNC_0(VAR_8);
  VAR_6[VAR_9] = (u_int)VAR_5;





  VAR_3[0] = 0x3d600000 | FUNC_1(&VAR_6[VAR_9]);
  VAR_3[1] = 0x858b0000 | FUNC_2(&VAR_6[VAR_9]);
  VAR_3[2] = 0x7d8903a6;
  VAR_3[3] = 0x4e800420;
 }







 return (0);
}
