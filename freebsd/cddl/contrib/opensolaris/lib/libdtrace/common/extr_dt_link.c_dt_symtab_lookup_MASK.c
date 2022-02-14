
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef uintptr_t uint64_t ;
struct TYPE_9__ {scalar_t__ d_buf; } ;
struct TYPE_8__ {uintptr_t st_value; scalar_t__ st_shndx; uintptr_t st_size; int st_info; } ;
typedef TYPE_1__ GElf_Sym ;
typedef int Elf_Scn ;
typedef TYPE_2__ Elf_Data ;
typedef uintptr_t Elf64_Addr ;
typedef int Elf ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int *,scalar_t__) ;
 TYPE_2__* FUNC_2 (int *,int *) ;
 int * FUNC_3 (TYPE_2__*,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(Elf_Data *VAR_1, int VAR_2, int VAR_3, uintptr_t VAR_4,
    uint_t VAR_5, GElf_Sym *VAR_6, int VAR_7, Elf *VAR_8)
{
 Elf64_Addr VAR_9;
 Elf_Scn *VAR_10;
 Elf_Data *VAR_11;
 int VAR_12;

 for (VAR_12 = VAR_2; VAR_12 < VAR_3 && FUNC_3(VAR_1, VAR_12, VAR_6) != ((void*)0); VAR_12++) {
  if (FUNC_0(VAR_6->st_info) == VAR_0) {
   VAR_9 = VAR_6->st_value;
   if (VAR_7) {
    VAR_10 = FUNC_1(VAR_8, VAR_6->st_shndx);
    VAR_11 = FUNC_2(VAR_10, ((void*)0));
    VAR_9 =
        *(uint64_t*)((char *)VAR_11->d_buf + VAR_9);
   }
   if ((VAR_7 || VAR_5 == VAR_6->st_shndx) &&
       VAR_9 <= VAR_4 && VAR_4 < VAR_9 + VAR_6->st_size)
    return (0);
  }
 }

 return (-1);
}
