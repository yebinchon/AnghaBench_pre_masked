
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_10__ {size_t ds_next; int ds_symid; } ;
typedef TYPE_3__ dt_sym_t ;
struct TYPE_9__ {char* cts_data; } ;
struct TYPE_8__ {TYPE_5__* cts_data; } ;
struct TYPE_11__ {scalar_t__ dm_nsymelems; size_t dm_nsymbuckets; size_t* dm_symbuckets; TYPE_3__* dm_symchains; TYPE_2__ dm_strtab; TYPE_1__ dm_symtab; } ;
typedef TYPE_4__ dt_module_t ;
struct TYPE_12__ {int st_name; } ;
typedef int GElf_Sym ;
typedef TYPE_5__ Elf64_Sym ;


 int * FUNC_0 (TYPE_5__ const*,int *) ;
 size_t FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static GElf_Sym *
FUNC_3(dt_module_t *VAR_0, const char *VAR_1,
    GElf_Sym *VAR_2, uint_t *VAR_3)
{
 const Elf64_Sym *VAR_4 = VAR_0->dm_symtab.cts_data;
 const char *VAR_5 = VAR_0->dm_strtab.cts_data;

 const Elf64_Sym *VAR_6;
 const dt_sym_t *VAR_7;
 uint_t VAR_8, VAR_9;

 if (VAR_0->dm_nsymelems == 0)
  return (((void*)0));

 VAR_9 = FUNC_1(VAR_1, ((void*)0)) % VAR_0->dm_nsymbuckets;

 for (VAR_8 = VAR_0->dm_symbuckets[VAR_9]; VAR_8 != 0; VAR_8 = VAR_7->ds_next) {
  VAR_7 = &VAR_0->dm_symchains[VAR_8];
  VAR_6 = VAR_4 + VAR_7->ds_symid;

  if (FUNC_2(VAR_1, VAR_5 + VAR_6->st_name) == 0) {
   if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_7->ds_symid;
   return (FUNC_0(VAR_6, VAR_2));
  }
 }

 return (((void*)0));
}
