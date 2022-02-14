
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eh_cie_fde {int size; scalar_t__ removed; } ;


 unsigned int FUNC_0 (struct eh_cie_fde*) ;
 unsigned int FUNC_1 (struct eh_cie_fde*) ;

__attribute__((used)) static unsigned int
FUNC_2 (struct eh_cie_fde *VAR_0, unsigned int VAR_1)
{
  if (VAR_0->removed)
    return 0;
  if (VAR_0->size == 4)
    return 4;
  return (VAR_0->size
   + FUNC_1 (VAR_0)
   + FUNC_0 (VAR_0)
   + VAR_1 - 1) & -VAR_1;
}
