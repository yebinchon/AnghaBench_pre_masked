
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct TYPE_2__ {int adr; } ;
struct mips_extra_func_info {TYPE_1__ pdr; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct symbol*) ;

void
FUNC_1 (struct symbol *VAR_0, CORE_ADDR VAR_1)
{
  struct mips_extra_func_info *VAR_2;

  VAR_2 = (struct mips_extra_func_info *) FUNC_0 (VAR_0);

  VAR_2->pdr.adr += VAR_1;
}
