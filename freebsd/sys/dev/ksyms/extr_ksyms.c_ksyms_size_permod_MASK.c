
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsizes {long ts_symsz; int ts_strsz; } ;
typedef int linker_file_t ;
typedef int caddr_t ;
typedef int Elf_Sym ;


 scalar_t__ FUNC_0 (int ,int *) ;
 long FUNC_1 (int ,int const**) ;

__attribute__((used)) static int
FUNC_2(linker_file_t VAR_0, void *VAR_1)
{
 struct tsizes *VAR_2;
 const Elf_Sym *VAR_3;
 caddr_t VAR_4;
 long VAR_5;

 VAR_2 = VAR_1;

 VAR_5 = FUNC_1(VAR_0, &VAR_3);
 VAR_2->ts_symsz += VAR_5 * sizeof(Elf_Sym);
 VAR_2->ts_strsz += FUNC_0(VAR_0, &VAR_4);

 return (0);
}
