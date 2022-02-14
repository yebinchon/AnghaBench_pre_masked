
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* e_ehdr64; TYPE_5__* e_ehdr32; } ;
struct TYPE_8__ {TYPE_2__ e_ehdr; } ;
struct TYPE_10__ {TYPE_1__ e_elf; } ;
struct TYPE_13__ {scalar_t__ e_kind; int e_class; TYPE_3__ e_u; } ;
struct TYPE_12__ {int e_machine; } ;
struct TYPE_11__ {int e_machine; } ;
typedef TYPE_4__ Elf64_Ehdr ;
typedef TYPE_5__ Elf32_Ehdr ;
typedef TYPE_6__ Elf ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

int
FUNC_1(Elf *VAR_3)
{
 Elf32_Ehdr *VAR_4;
 Elf64_Ehdr *VAR_5;

 if (!VAR_3)
  return VAR_2;

 FUNC_0(VAR_3->e_kind == VAR_1);
 FUNC_0(VAR_3->e_class != VAR_0);

 VAR_4 = ((void*)0);
 VAR_5 = ((void*)0);

 switch (VAR_3->e_class) {
 case 129:
  VAR_4 = VAR_3->e_u.e_elf.e_ehdr.e_ehdr32;
  return VAR_4 ? VAR_4->e_machine : VAR_2;
 case 128:
  VAR_5 = VAR_3->e_u.e_elf.e_ehdr.e_ehdr64;
  return VAR_5 ? VAR_5->e_machine : VAR_2;
 }

 return (VAR_2);
}
