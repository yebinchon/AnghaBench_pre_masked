
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
typedef int cpp_reader ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1 (cpp_reader *VAR_3)
{
  int VAR_4 = 1;
  for (;;)
    {
      enum cpp_ttype VAR_5 = FUNC_0 (VAR_3)->type;

      if (VAR_5 == VAR_1)
 break;
      if (VAR_5 == VAR_2)
 VAR_4++;
      if (VAR_5 == VAR_0 && --VAR_4 == 0)
 break;
    }
}
