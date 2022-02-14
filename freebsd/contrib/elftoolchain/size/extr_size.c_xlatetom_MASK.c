
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t d_size; int d_version; void* d_buf; int d_type; } ;
struct TYPE_8__ {int * e_ident; int e_version; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef int Elf_Type ;
typedef TYPE_2__ Elf_Data ;
typedef int Elf ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 (int *,TYPE_2__*,TYPE_2__*,int ) ;

__attribute__((used)) static Elf_Data *
FUNC_1(Elf *VAR_1, GElf_Ehdr *VAR_2, void *VAR_3, void *VAR_4,
    Elf_Type VAR_5, size_t VAR_6)
{
 Elf_Data VAR_7, VAR_8;

 VAR_7.d_buf = VAR_3;
 VAR_7.d_type = VAR_5;
 VAR_7.d_version = VAR_2->e_version;
 VAR_7.d_size = VAR_6;
 VAR_8.d_buf = VAR_4;
 VAR_8.d_version = VAR_2->e_version;
 VAR_8.d_size = VAR_6;
 return (FUNC_0(VAR_1, &VAR_8, &VAR_7, VAR_2->e_ident[VAR_0]));
}
