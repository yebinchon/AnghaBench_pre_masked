
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int relax_addressT ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static relax_addressT
FUNC_0 (register relax_addressT VAR_1,
      register int VAR_2 )
{
  relax_addressT VAR_3;
  relax_addressT VAR_4;

  VAR_3 = ~((~0) << VAR_2);
  VAR_4 = (VAR_1 + VAR_3) & (~VAR_3);






  return (VAR_4 - VAR_1);
}
