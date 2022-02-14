
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int linker_file_t ;
typedef TYPE_1__* elf_file_t ;
struct TYPE_4__ {scalar_t__ st_shndx; scalar_t__ st_value; int st_name; int st_info; } ;
struct TYPE_3__ {scalar_t__ nchains; char* strtab; scalar_t__ address; TYPE_2__* symtab; } ;
typedef TYPE_2__ Elf_Sym ;
typedef scalar_t__ Elf_Size ;
typedef scalar_t__ Elf_Addr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,char const*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(linker_file_t VAR_6, Elf_Size VAR_7, int VAR_8, Elf_Addr *VAR_9)
{
 elf_file_t VAR_10 = (elf_file_t)VAR_6;
 const Elf_Sym *VAR_11;
 const char *VAR_12;
 Elf_Addr VAR_13, VAR_14, VAR_15;


 if (VAR_7 >= VAR_10->nchains) {
  *VAR_9 = 0;
  return (VAR_0);
 }

 VAR_11 = VAR_10->symtab + VAR_7;





 if (FUNC_0(VAR_11->st_info) == VAR_2) {

  if (VAR_11->st_shndx == VAR_1 || VAR_11->st_value == 0) {
   *VAR_9 = 0;
   return (VAR_0);
  }
  *VAR_9 = ((Elf_Addr)VAR_10->address + VAR_11->st_value);
  return (0);
 }
 VAR_12 = VAR_10->strtab + VAR_11->st_name;


 if (*VAR_12 == 0) {
  *VAR_9 = 0;
  return (VAR_0);
 }

 VAR_13 = ((Elf_Addr)FUNC_2(VAR_6, VAR_12, VAR_8));
 if (VAR_13 == 0 && FUNC_0(VAR_11->st_info) != VAR_3) {
  *VAR_9 = 0;
  return (VAR_0);
 }

 if (FUNC_1(&VAR_4, VAR_13, &VAR_14, &VAR_15))
  VAR_13 = VAR_13 - VAR_14 + VAR_15;




 *VAR_9 = VAR_13;
 return (0);
}
