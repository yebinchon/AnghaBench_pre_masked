
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint_t ;
typedef int dtrace_hdl_t ;
typedef int dt_sym_t ;
struct TYPE_11__ {char* cts_name; int cts_size; int cts_entsize; scalar_t__ cts_offset; int * cts_data; scalar_t__ cts_flags; int cts_type; } ;
struct TYPE_10__ {int dm_flags; scalar_t__ dm_pid; int dm_nsymelems; int dm_nsymbuckets; int dm_symfree; int dm_asrsv; int dm_aslen; TYPE_6__ dm_symtab; int dm_name; TYPE_9__* dm_ops; int * dm_asmap; int * dm_symchains; int * dm_symbuckets; TYPE_6__ dm_strtab; TYPE_6__ dm_ctdata; } ;
typedef TYPE_1__ dt_module_t ;
struct TYPE_12__ {int (* do_syminit ) (TYPE_1__*) ;int (* do_symsort ) (TYPE_1__*) ;} ;
typedef int Elf64_Sym ;
typedef int Elf32_Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ,char*,int) ;
 TYPE_9__ VAR_6 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_6__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

int
FUNC_9(dtrace_hdl_t *VAR_7, dt_module_t *VAR_8)
{
 if (VAR_8->dm_flags & VAR_0)
  return (0);

 if (VAR_8->dm_pid != 0)
  return (FUNC_2(VAR_7, VAR_8));

 VAR_8->dm_ctdata.cts_name = ".SUNW_ctf";
 VAR_8->dm_ctdata.cts_type = VAR_2;
 VAR_8->dm_ctdata.cts_flags = 0;
 VAR_8->dm_ctdata.cts_data = ((void*)0);
 VAR_8->dm_ctdata.cts_size = 0;
 VAR_8->dm_ctdata.cts_entsize = 0;
 VAR_8->dm_ctdata.cts_offset = 0;

 VAR_8->dm_symtab.cts_name = ".symtab";
 VAR_8->dm_symtab.cts_type = VAR_4;
 VAR_8->dm_symtab.cts_flags = 0;
 VAR_8->dm_symtab.cts_data = ((void*)0);
 VAR_8->dm_symtab.cts_size = 0;
 VAR_8->dm_symtab.cts_entsize = VAR_8->dm_ops == &VAR_6 ?
     sizeof (Elf64_Sym) : sizeof (Elf32_Sym);
 VAR_8->dm_symtab.cts_offset = 0;

 VAR_8->dm_strtab.cts_name = ".strtab";
 VAR_8->dm_strtab.cts_type = VAR_3;
 VAR_8->dm_strtab.cts_flags = 0;
 VAR_8->dm_strtab.cts_data = ((void*)0);
 VAR_8->dm_strtab.cts_size = 0;
 VAR_8->dm_strtab.cts_entsize = 0;
 VAR_8->dm_strtab.cts_offset = 0;







 if (FUNC_3(VAR_7, VAR_8, &VAR_8->dm_ctdata) == -1 ||
     FUNC_3(VAR_7, VAR_8, &VAR_8->dm_symtab) == -1 ||
     FUNC_3(VAR_7, VAR_8, &VAR_8->dm_strtab) == -1) {
  FUNC_4(VAR_7, VAR_8);
  return (-1);
 }







 VAR_8->dm_nsymelems =
     VAR_8->dm_symtab.cts_size / VAR_8->dm_symtab.cts_entsize;

 VAR_8->dm_nsymbuckets = VAR_5;
 VAR_8->dm_symfree = 1;

 VAR_8->dm_symbuckets = FUNC_0(VAR_8->dm_nsymbuckets, sizeof (uint_t));
 VAR_8->dm_symchains = FUNC_0(VAR_8->dm_nsymelems + 1, sizeof (dt_sym_t));

 if (VAR_8->dm_symbuckets == ((void*)0) || VAR_8->dm_symchains == ((void*)0)) {
  FUNC_4(VAR_7, VAR_8);
  return (FUNC_5(VAR_7, VAR_1));
 }






 VAR_8->dm_asrsv = VAR_8->dm_ops->do_syminit(VAR_8);

 FUNC_1("hashed %s [%s] (%u symbols)\n",
     VAR_8->dm_name, VAR_8->dm_symtab.cts_name, VAR_8->dm_symfree - 1);

 if ((VAR_8->dm_asmap = FUNC_6(sizeof (void *) * VAR_8->dm_asrsv)) == ((void*)0)) {
  FUNC_4(VAR_7, VAR_8);
  return (FUNC_5(VAR_7, VAR_1));
 }

 VAR_8->dm_ops->do_symsort(VAR_8);

 FUNC_1("sorted %s [%s] (%u symbols)\n",
     VAR_8->dm_name, VAR_8->dm_symtab.cts_name, VAR_8->dm_aslen);

 VAR_8->dm_flags |= VAR_0;
 return (0);
}
