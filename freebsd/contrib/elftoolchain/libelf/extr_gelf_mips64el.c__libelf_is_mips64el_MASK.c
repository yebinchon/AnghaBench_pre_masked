
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* e_ehdr64; } ;
struct TYPE_9__ {TYPE_2__ e_ehdr; } ;
struct TYPE_10__ {TYPE_3__ e_elf; } ;
struct TYPE_11__ {scalar_t__ e_kind; scalar_t__ e_class; TYPE_4__ e_u; } ;
struct TYPE_7__ {scalar_t__ e_machine; scalar_t__* e_ident; } ;
typedef TYPE_5__ Elf ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_0(Elf *VAR_5)
{

 return (VAR_5->e_kind == VAR_3 && VAR_5->e_class == VAR_1 &&
     VAR_5->e_u.e_elf.e_ehdr.e_ehdr64->e_machine == VAR_4 &&
     VAR_5->e_u.e_elf.e_ehdr.e_ehdr64->e_ident[VAR_0] == VAR_2);
}
