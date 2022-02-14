
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* types; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int
FUNC_0 (unsigned int VAR_5)
{
  int VAR_6 = 4;
  if (VAR_4.types[VAR_5] & (VAR_2 | VAR_3 | VAR_0 | VAR_1))
    {
      VAR_6 = 2;
      if (VAR_4.types[VAR_5] & (VAR_2 | VAR_3))
 VAR_6 = 1;
      if (VAR_4.types[VAR_5] & VAR_1)
 VAR_6 = 8;
    }
  return VAR_6;
}
