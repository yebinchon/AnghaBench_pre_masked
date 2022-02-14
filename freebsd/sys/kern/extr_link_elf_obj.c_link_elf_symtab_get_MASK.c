
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int linker_file_t ;
typedef TYPE_1__* elf_file_t ;
struct TYPE_2__ {long ddbsymcnt; int * ddbsymtab; } ;
typedef int Elf_Sym ;



__attribute__((used)) static long
FUNC_0(linker_file_t VAR_0, const Elf_Sym **VAR_1)
{
    elf_file_t VAR_2 = (elf_file_t)VAR_0;

    *VAR_1 = VAR_2->ddbsymtab;

    if (*VAR_1 == ((void*)0))
        return (0);

    return (VAR_2->ddbsymcnt);
}
