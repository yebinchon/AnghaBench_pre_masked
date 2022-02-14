
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const** coreRegisters; } ;


 TYPE_1__ VAR_0 ;

const char *
FUNC_0(int VAR_1)
{
  if (VAR_1 < 32)
    return 0;
  return VAR_0.coreRegisters[VAR_1-32];
}
