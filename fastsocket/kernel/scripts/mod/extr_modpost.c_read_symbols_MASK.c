
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct module {int skip; int gpl_compatible; int unres; int srcversion; } ;
struct elf_info {char* strtab; scalar_t__ hdr; scalar_t__ modinfo; int modinfo_len; TYPE_1__* symtab_stop; TYPE_1__* symtab_start; } ;
struct TYPE_4__ {int st_name; } ;
typedef TYPE_1__ Elf_Sym ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct module*,char*,struct elf_info*) ;
 int FUNC_2 (struct elf_info*,struct module*) ;
 char* FUNC_3 (scalar_t__,int ,char*) ;
 char* FUNC_4 (scalar_t__,int ,char*,char*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (struct module*,struct elf_info*,TYPE_1__*,char const*) ;
 int FUNC_7 (struct module*,struct elf_info*,TYPE_1__*,char const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 struct module* FUNC_11 (char*) ;
 int FUNC_12 (struct elf_info*,char*) ;
 int FUNC_13 (struct elf_info*) ;
 scalar_t__ VAR_3 ;
 int FUNC_14 (char*,char*) ;

__attribute__((used)) static void FUNC_15(char *VAR_4)
{
 const char *VAR_5;
 char *VAR_6;
 char *VAR_7;
 struct module *VAR_8;
 struct elf_info VAR_9 = { };
 Elf_Sym *VAR_10;

 if (!FUNC_12(&VAR_9, VAR_4))
  return;

 VAR_8 = FUNC_11(VAR_4);



 if (FUNC_8(VAR_4)) {
  VAR_1 = 1;
  VAR_8->skip = 1;
 }

 VAR_7 = FUNC_3(VAR_9.modinfo, VAR_9.modinfo_len, "license");
 if (VAR_9.modinfo && !VAR_7 && !FUNC_8(VAR_4))
  FUNC_14("modpost: missing MODULE_LICENSE() in %s\n"
       "see include/linux/module.h for "
       "more information\n", VAR_4);
 while (VAR_7) {
  if (FUNC_9(VAR_7))
   VAR_8->gpl_compatible = 1;
  else {
   VAR_8->gpl_compatible = 0;
   break;
  }
  VAR_7 = FUNC_4(VAR_9.modinfo, VAR_9.modinfo_len,
        "license", VAR_7);
 }

 for (VAR_10 = VAR_9.symtab_start; VAR_10 < VAR_9.symtab_stop; VAR_10++) {
  VAR_5 = VAR_9.strtab + VAR_10->st_name;

  FUNC_7(VAR_8, &VAR_9, VAR_10, VAR_5);
  FUNC_6(VAR_8, &VAR_9, VAR_10, VAR_5);
 }
 if (!FUNC_8(VAR_4) ||
      (FUNC_8(VAR_4) && VAR_3))
  FUNC_1(VAR_8, VAR_4, &VAR_9);

 VAR_6 = FUNC_3(VAR_9.modinfo, VAR_9.modinfo_len, "version");
 if (VAR_6)
  FUNC_10(VAR_4, VAR_6, VAR_9.modinfo,
           VAR_6 - (char *)VAR_9.hdr);
 if (VAR_6 || (VAR_0 && !FUNC_8(VAR_4)))
  FUNC_5(VAR_4, VAR_8->srcversion,
    sizeof(VAR_8->srcversion)-1);

 FUNC_2(&VAR_9, VAR_8);

 FUNC_13(&VAR_9);





 if (VAR_2)
  VAR_8->unres = FUNC_0("module_layout", 0, VAR_8->unres);
}
