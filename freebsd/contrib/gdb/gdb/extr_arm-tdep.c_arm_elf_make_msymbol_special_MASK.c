
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct minimal_symbol {int dummy; } ;
struct TYPE_3__ {int st_info; } ;
struct TYPE_4__ {TYPE_1__ internal_elf_sym; } ;
typedef TYPE_2__ elf_symbol_type ;
typedef int asymbol ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct minimal_symbol*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(asymbol *VAR_1, struct minimal_symbol *VAR_2)
{


  if (FUNC_0 (((elf_symbol_type *)VAR_1)->internal_elf_sym.st_info)
      == VAR_0)
    FUNC_1 (VAR_2);
}
