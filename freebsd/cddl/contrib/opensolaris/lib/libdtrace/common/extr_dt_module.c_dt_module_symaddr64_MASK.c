
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_6__ {TYPE_3__* cts_data; } ;
struct TYPE_7__ {int dm_aslen; TYPE_1__ dm_symtab; scalar_t__ dm_asmap; } ;
typedef TYPE_2__ dt_module_t ;
struct TYPE_8__ {scalar_t__ st_value; int st_size; } ;
typedef int GElf_Sym ;
typedef scalar_t__ GElf_Addr ;
typedef TYPE_3__ Elf64_Sym ;
typedef scalar_t__ Elf64_Addr ;


 scalar_t__ FUNC_0 (int ,int) ;
 int * FUNC_1 (TYPE_3__ const*,int *) ;

__attribute__((used)) static GElf_Sym *
FUNC_2(dt_module_t *VAR_0, GElf_Addr VAR_1,
    GElf_Sym *VAR_2, uint_t *VAR_3)
{
 const Elf64_Sym **VAR_4 = (const Elf64_Sym **)VAR_0->dm_asmap;
 const Elf64_Sym *VAR_5 = VAR_0->dm_symtab.cts_data;
 const Elf64_Sym *VAR_6;

 uint_t VAR_7, VAR_8, VAR_9 = 0, VAR_10 = VAR_0->dm_aslen - 1;
 Elf64_Addr VAR_11;

 if (VAR_0->dm_aslen == 0)
  return (((void*)0));

 while (VAR_10 - VAR_9 > 1) {
  VAR_8 = (VAR_9 + VAR_10) / 2;
  if (VAR_1 >= VAR_4[VAR_8]->st_value)
   VAR_9 = VAR_8;
  else
   VAR_10 = VAR_8;
 }

 VAR_7 = VAR_1 < VAR_4[VAR_10]->st_value ? VAR_9 : VAR_10;
 VAR_6 = VAR_4[VAR_7];
 VAR_11 = VAR_6->st_value;





 while (VAR_7-- != 0 && VAR_4[VAR_7]->st_value == VAR_11)
  VAR_6 = VAR_4[VAR_7];

 if (VAR_1 - VAR_6->st_value < FUNC_0(VAR_6->st_size, 1)) {
  if (VAR_3 != ((void*)0))
   *VAR_3 = (uint_t)(VAR_6 - VAR_5);
  return (FUNC_1(VAR_6, VAR_2));
 }

 return (((void*)0));
}
