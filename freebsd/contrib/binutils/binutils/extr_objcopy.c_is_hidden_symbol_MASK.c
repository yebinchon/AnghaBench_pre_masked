
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int st_other; } ;
struct TYPE_8__ {TYPE_1__ internal_elf_sym; } ;
typedef TYPE_2__ elf_symbol_type ;
typedef int bfd_boolean ;
struct TYPE_9__ {int the_bfd; } ;
typedef TYPE_3__ asymbol ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ,TYPE_3__*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (asymbol *VAR_2)
{
  elf_symbol_type *VAR_3;

  VAR_3 = FUNC_1 (VAR_2->the_bfd, VAR_2);
  if (VAR_3 != ((void*)0))
    switch (FUNC_0 (VAR_3->internal_elf_sym.st_other))
      {
      case 129:
      case 128:
 return VAR_1;
      }
  return VAR_0;
}
