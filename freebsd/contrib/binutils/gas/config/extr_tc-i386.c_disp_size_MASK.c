
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* types; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int
FUNC_0 (unsigned int VAR_4)
{
  int VAR_5 = 4;
  if (VAR_3.types[VAR_4] & (VAR_2 | VAR_0 | VAR_1))
    {
      VAR_5 = 2;
      if (VAR_3.types[VAR_4] & VAR_2)
 VAR_5 = 1;
      if (VAR_3.types[VAR_4] & VAR_1)
 VAR_5 = 8;
    }
  return VAR_5;
}
