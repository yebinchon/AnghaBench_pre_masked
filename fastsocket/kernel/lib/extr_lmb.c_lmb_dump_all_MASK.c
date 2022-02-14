
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; } ;
struct TYPE_4__ {TYPE_1__ reserved; TYPE_1__ memory; scalar_t__ rmo_size; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(void)
{
 if (!VAR_1)
  return;

 FUNC_1("LMB configuration:\n");
 FUNC_1(" rmo_size    = 0x%llx\n", (unsigned long long)VAR_0.rmo_size);
 FUNC_1(" memory.size = 0x%llx\n", (unsigned long long)VAR_0.memory.size);

 FUNC_0(&VAR_0.memory, "memory");
 FUNC_0(&VAR_0.reserved, "reserved");
}
