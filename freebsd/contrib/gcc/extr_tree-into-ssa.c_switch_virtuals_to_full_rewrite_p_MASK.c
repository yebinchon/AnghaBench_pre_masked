
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num_virtual_mappings; unsigned int num_virtual_symbols; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static bool
FUNC_0 (void)
{
  if (VAR_2.num_virtual_mappings < (unsigned) VAR_0)
    return 0;

  if (VAR_2.num_virtual_mappings
      > (unsigned) VAR_1
        * VAR_2.num_virtual_symbols)
    return 1;

  return 0;
}
