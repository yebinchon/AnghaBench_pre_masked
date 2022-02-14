
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int sh ;
struct TYPE_25__ {int e_machine; } ;
struct TYPE_24__ {int dbg_machine; TYPE_3__* dbg_iface; } ;
struct TYPE_20__ {int load_section; int get_section_count; int get_pointer_size; int get_length_size; int get_byte_order; int get_section_info; } ;
struct TYPE_23__ {int eo_seccnt; TYPE_12__* eo_data; int eo_strndx; int * eo_shdr; TYPE_8__ eo_ehdr; TYPE_1__ eo_methods; int * eo_elf; } ;
struct TYPE_22__ {TYPE_1__* methods; TYPE_4__* object; } ;
struct TYPE_21__ {int sh_name; } ;
struct TYPE_19__ {int * ed_data; } ;
struct TYPE_18__ {scalar_t__ applyreloc; } ;
typedef TYPE_2__ GElf_Shdr ;
typedef int Elf_Scn ;
typedef int Elf_Data ;
typedef int Elf ;
typedef TYPE_3__ Dwarf_Obj_Access_Interface ;
typedef int Dwarf_Error ;
typedef TYPE_4__ Dwarf_Elf_Object ;
typedef int Dwarf_Elf_Data ;
typedef TYPE_5__* Dwarf_Debug ;


 int FUNC_0 (TYPE_5__*,int *) ;
 int FUNC_1 (TYPE_5__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_5__*,int *,int,int) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_5__*,int *,TYPE_12__*,size_t,size_t,int *,int *) ;
 TYPE_10__ VAR_9 ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int,int) ;
 char** VAR_10 ;
 int FUNC_7 () ;
 void* FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 size_t FUNC_10 (int *) ;
 int * FUNC_11 (int *,int *) ;
 char* FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int * FUNC_14 (int *,TYPE_8__*) ;
 int * FUNC_15 (int *,TYPE_2__*) ;
 int FUNC_16 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_17 (char const*,char*) ;

int
FUNC_18(Dwarf_Debug VAR_11, Elf *VAR_12, Dwarf_Error *VAR_13)
{
 Dwarf_Obj_Access_Interface *VAR_14;
 Dwarf_Elf_Object *VAR_15;
 const char *VAR_16;
 GElf_Shdr VAR_17;
 Elf_Scn *VAR_18;
 Elf_Data *VAR_19;
 size_t VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_25 = VAR_2;

 if ((VAR_14 = FUNC_6(1, sizeof(*VAR_14))) == ((void*)0)) {
  FUNC_1(VAR_11, VAR_13, VAR_1);
  return (VAR_1);
 }

 if ((VAR_15 = FUNC_6(1, sizeof(*VAR_15))) == ((void*)0)) {
  FUNC_13(VAR_14);
  FUNC_1(VAR_11, VAR_13, VAR_1);
  return (VAR_1);
 }

 VAR_15->eo_elf = VAR_12;
 VAR_15->eo_methods.get_section_info = VAR_7;
 VAR_15->eo_methods.get_byte_order = VAR_3;
 VAR_15->eo_methods.get_length_size = VAR_4;
 VAR_15->eo_methods.get_pointer_size = VAR_5;
 VAR_15->eo_methods.get_section_count = VAR_6;
 VAR_15->eo_methods.load_section = VAR_8;

 VAR_14->object = VAR_15;
 VAR_14->methods = &VAR_15->eo_methods;

 VAR_11->dbg_iface = VAR_14;

 if (FUNC_14(VAR_12, &VAR_15->eo_ehdr) == ((void*)0)) {
  FUNC_0(VAR_11, VAR_13);
  VAR_25 = VAR_0;
  goto fail_cleanup;
 }

 VAR_11->dbg_machine = VAR_15->eo_ehdr.e_machine;

 if (!FUNC_9(VAR_12, &VAR_15->eo_strndx)) {
  FUNC_0(VAR_11, VAR_13);
  VAR_25 = VAR_0;
  goto fail_cleanup;
 }

 VAR_24 = 0;
 VAR_20 = 0;
 VAR_19 = ((void*)0);
 VAR_18 = ((void*)0);
 (void) FUNC_7();
 while ((VAR_18 = FUNC_11(VAR_12, VAR_18)) != ((void*)0)) {
  if (FUNC_15(VAR_18, &VAR_17) == ((void*)0)) {
   FUNC_0(VAR_11, VAR_13);
   VAR_25 = VAR_0;
   goto fail_cleanup;
  }

  if ((VAR_16 = FUNC_12(VAR_12, VAR_15->eo_strndx, VAR_17.sh_name)) ==
      ((void*)0)) {
   FUNC_0(VAR_11, VAR_13);
   VAR_25 = VAR_0;
   goto fail_cleanup;
  }

  if (!FUNC_17(VAR_16, ".symtab")) {
   VAR_20 = FUNC_10(VAR_18);
   if ((VAR_19 = FUNC_8(VAR_18, ((void*)0))) == ((void*)0)) {
    VAR_21 = FUNC_7();
    if (VAR_21 != 0) {
     FUNC_2(((void*)0), VAR_13,
         VAR_0, VAR_21);
     VAR_25 = VAR_0;
     goto fail_cleanup;
    }
   }
   continue;
  }

  for (VAR_22 = 0; VAR_10[VAR_22] != ((void*)0); VAR_22++) {
   if (!FUNC_17(VAR_16, VAR_10[VAR_22]))
    VAR_24++;
  }
 }
 VAR_21 = FUNC_7();
 if (VAR_21 != 0) {
  FUNC_0(VAR_11, VAR_13);
  return (VAR_0);
 }

 VAR_15->eo_seccnt = VAR_24;

 if (VAR_24 == 0)
  return (VAR_2);

 if ((VAR_15->eo_data = FUNC_6(VAR_24, sizeof(Dwarf_Elf_Data))) == ((void*)0) ||
     (VAR_15->eo_shdr = FUNC_6(VAR_24, sizeof(GElf_Shdr))) == ((void*)0)) {
  FUNC_1(((void*)0), VAR_13, VAR_1);
  VAR_25 = VAR_1;
  goto fail_cleanup;
 }

 VAR_18 = ((void*)0);
 VAR_23 = 0;
 while ((VAR_18 = FUNC_11(VAR_12, VAR_18)) != ((void*)0) && VAR_23 < VAR_24) {
  if (FUNC_15(VAR_18, &VAR_17) == ((void*)0)) {
   FUNC_0(VAR_11, VAR_13);
   VAR_25 = VAR_0;
   goto fail_cleanup;
  }

  FUNC_16(&VAR_15->eo_shdr[VAR_23], &VAR_17, sizeof(VAR_17));

  if ((VAR_16 = FUNC_12(VAR_12, VAR_15->eo_strndx, VAR_17.sh_name)) ==
      ((void*)0)) {
   FUNC_0(VAR_11, VAR_13);
   VAR_25 = VAR_0;
   goto fail_cleanup;
  }

  for (VAR_22 = 0; VAR_10[VAR_22] != ((void*)0); VAR_22++) {
   if (FUNC_17(VAR_16, VAR_10[VAR_22]))
    continue;

   (void) FUNC_7();
   if ((VAR_15->eo_data[VAR_23].ed_data = FUNC_8(VAR_18, ((void*)0))) ==
       ((void*)0)) {
    VAR_21 = FUNC_7();
    if (VAR_21 != 0) {
     FUNC_2(VAR_11, VAR_13,
         VAR_0, VAR_21);
     VAR_25 = VAR_0;
     goto fail_cleanup;
    }
   }

   if (VAR_9.applyreloc) {
    if (FUNC_4(VAR_11, VAR_12,
        &VAR_15->eo_data[VAR_23], FUNC_10(VAR_18), VAR_20,
        VAR_19, VAR_13) != VAR_2)
     goto fail_cleanup;
   }

   VAR_23++;
  }
 }

 FUNC_5(VAR_23 == VAR_24);

 return (VAR_2);

fail_cleanup:

 FUNC_3(VAR_11);

 return (VAR_25);
}
