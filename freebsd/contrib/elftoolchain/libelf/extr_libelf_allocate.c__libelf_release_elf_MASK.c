
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {TYPE_7__* e_arhdr; } ;
struct TYPE_14__ {int e_phdr64; int e_phdr32; } ;
struct TYPE_13__ {int e_ehdr64; int e_ehdr32; } ;
struct TYPE_15__ {int e_scn; TYPE_3__ e_phdr; TYPE_2__ e_ehdr; } ;
struct TYPE_12__ {int e_symtab; } ;
struct TYPE_16__ {TYPE_4__ e_elf; TYPE_1__ e_ar; } ;
struct TYPE_18__ {int e_kind; int e_flags; int ar_rawname; int ar_name; TYPE_6__ e_hdr; TYPE_5__ e_u; int e_class; } ;
typedef TYPE_7__ Elf_Arhdr ;
typedef TYPE_7__ Elf ;






 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*) ;

Elf *
FUNC_4(Elf *VAR_1)
{
 Elf_Arhdr *VAR_2;

 switch (VAR_1->e_kind) {
 case 129:
  FUNC_0(VAR_1->e_u.e_ar.e_symtab);
  break;

 case 128:
  switch (VAR_1->e_class) {
  case 131:
   FUNC_0(VAR_1->e_u.e_elf.e_ehdr.e_ehdr32);
   FUNC_0(VAR_1->e_u.e_elf.e_phdr.e_phdr32);
   break;
  case 130:
   FUNC_0(VAR_1->e_u.e_elf.e_ehdr.e_ehdr64);
   FUNC_0(VAR_1->e_u.e_elf.e_phdr.e_phdr64);
   break;
  }

  FUNC_2(FUNC_1(&VAR_1->e_u.e_elf.e_scn));

  if (VAR_1->e_flags & VAR_0) {
   VAR_2 = VAR_1->e_hdr.e_arhdr;
   FUNC_0(VAR_2->ar_name);
   FUNC_0(VAR_2->ar_rawname);
   FUNC_3(VAR_2);
  }

  break;

 default:
  break;
 }

 FUNC_3(VAR_1);

 return (((void*)0));
}
