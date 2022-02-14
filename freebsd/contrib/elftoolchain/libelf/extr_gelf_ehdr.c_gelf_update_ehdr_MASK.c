
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ e_kind; int e_class; scalar_t__ e_cmd; } ;
struct TYPE_12__ {int e_shstrndx; int e_shnum; int e_shentsize; int e_phnum; int e_phentsize; int e_ehsize; int e_flags; int e_version; int e_machine; int e_type; int e_ident; } ;
struct TYPE_11__ {int e_shstrndx; int e_shnum; int e_shentsize; int e_phnum; int e_phentsize; int e_ehsize; int e_flags; int e_version; int e_machine; int e_type; int e_ident; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef TYPE_1__ Elf64_Ehdr ;
typedef TYPE_3__ Elf32_Ehdr ;
typedef TYPE_4__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 void* FUNC_2 (TYPE_4__*,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

int
FUNC_5(Elf *VAR_11, GElf_Ehdr *VAR_12)
{
 int VAR_13;
 void *VAR_14;
 Elf32_Ehdr *VAR_15;
 Elf64_Ehdr *VAR_16;

 if (VAR_12== ((void*)0) || VAR_11 == ((void*)0) || VAR_11->e_kind != VAR_6 ||
     ((VAR_13 = VAR_11->e_class) != VAR_1 && VAR_13 != VAR_2)) {
  FUNC_1(VAR_0, 0);
  return (0);
 }

 if (VAR_11->e_cmd == VAR_3) {
  FUNC_1(VAR_7, 0);
  return (0);
 }

 if ((VAR_14 = FUNC_2(VAR_11, VAR_13, 0)) == ((void*)0))
  return (0);

 (void) FUNC_3(VAR_11, VAR_4, VAR_5);

 if (VAR_13 == VAR_2) {
  VAR_16 = (Elf64_Ehdr *) VAR_14;
  *VAR_16 = *VAR_12;
  return (1);
 }

 VAR_15 = (Elf32_Ehdr *) VAR_14;

 (void) FUNC_4(VAR_15->e_ident, VAR_12->e_ident, sizeof(VAR_15->e_ident));

 VAR_15->e_type = VAR_12->e_type;
 VAR_15->e_machine = VAR_12->e_machine;
 VAR_15->e_version = VAR_12->e_version;
 FUNC_0(VAR_15, VAR_12, VAR_8);
 FUNC_0(VAR_15, VAR_12, VAR_9);
 FUNC_0(VAR_15, VAR_12, VAR_10);
 VAR_15->e_flags = VAR_12->e_flags;
 VAR_15->e_ehsize = VAR_12->e_ehsize;
 VAR_15->e_phentsize = VAR_12->e_phentsize;
 VAR_15->e_phnum = VAR_12->e_phnum;
 VAR_15->e_shentsize = VAR_12->e_shentsize;
 VAR_15->e_shnum = VAR_12->e_shnum;
 VAR_15->e_shstrndx = VAR_12->e_shstrndx;

 return (1);
}
