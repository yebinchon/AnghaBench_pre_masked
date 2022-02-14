
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;





 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;





 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int,int *,int *) ;

rtx
FUNC_2 (enum machine_mode VAR_3)
{
  if (VAR_2)
    {
      switch (VAR_3)
 {
 case 133:
 case 135:
 case 136:
 case 138:
 case 130:
 case 134:
 case 137:
 case 131:
   return FUNC_0 (VAR_3, VAR_1);
 case 128:
 case 129:
   return FUNC_0 (VAR_3, VAR_0);
 case 132:
   return ((void*)0);
 default:
   return FUNC_0 (VAR_3, 0);
 }
    }
  else
    return FUNC_0 (VAR_3, FUNC_1 (VAR_3, ((void*)0), ((void*)0)));
}
