
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int
FUNC_1 (int VAR_6, unsigned int VAR_7)
{
  if (VAR_7 == VAR_3)
    {
      if (VAR_6 % 2)
        {
          VAR_5.error = FUNC_0("address offset must be half word alignment");
          return (int) VAR_0;
        }
    }
  else if ((VAR_7 == VAR_4) || (VAR_7 == VAR_2))
    {
      if (VAR_6 % 4)
        {
          VAR_5.error = FUNC_0("address offset must be word alignment");
          return (int) VAR_0;
        }
    }

  return VAR_1;
}
