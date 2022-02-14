
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_9__ {int ds_symid; } ;
typedef TYPE_3__ dt_sym_t ;
struct TYPE_8__ {int * cts_data; } ;
struct TYPE_7__ {scalar_t__ cts_data; } ;
struct TYPE_10__ {int dm_symfree; int dm_aslen; scalar_t__ dm_asrsv; scalar_t__ dm_asmap; TYPE_2__ dm_strtab; TYPE_3__* dm_symchains; TYPE_1__ dm_symtab; } ;
typedef TYPE_4__ dt_module_t ;
struct TYPE_11__ {scalar_t__ st_value; scalar_t__ st_size; int st_info; } ;
typedef TYPE_5__ Elf32_Sym ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int ) ;

__attribute__((used)) static void
FUNC_3(dt_module_t *VAR_3)
{
 Elf32_Sym *VAR_4 = (Elf32_Sym *)VAR_3->dm_symtab.cts_data;
 Elf32_Sym **VAR_5 = (Elf32_Sym **)VAR_3->dm_asmap;
 const dt_sym_t *VAR_6 = VAR_3->dm_symchains + 1;
 uint_t VAR_7, VAR_8 = VAR_3->dm_symfree;

 for (VAR_7 = 1; VAR_7 < VAR_8; VAR_7++, VAR_6++) {
  Elf32_Sym *VAR_9 = VAR_4 + VAR_6->ds_symid;
  if (VAR_9->st_value != 0 &&
      (FUNC_0(VAR_9->st_info) != VAR_0 || VAR_9->st_size))
   *VAR_5++ = VAR_9;
 }

 VAR_3->dm_aslen = (uint_t)(VAR_5 - (Elf32_Sym **)VAR_3->dm_asmap);
 FUNC_1(VAR_3->dm_aslen <= VAR_3->dm_asrsv);

 VAR_1 = VAR_3->dm_strtab.cts_data;
 FUNC_2(VAR_3->dm_asmap, VAR_3->dm_aslen,
     sizeof (Elf32_Sym *), VAR_2);
 VAR_1 = ((void*)0);
}
