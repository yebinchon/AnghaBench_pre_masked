
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;





 int VAR_0 ;
 int FUNC_0 (int) ;

 int FUNC_1 (unsigned int) ;

 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (unsigned int,int) ;
 int FUNC_4 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

bool
FUNC_5 (unsigned int VAR_9, enum machine_mode VAR_10)
{
  switch (FUNC_4 (VAR_9))
    {
    case 129:
      if (FUNC_3 (VAR_9, VAR_10))
 {
   if (VAR_10 == VAR_4 || VAR_10 == VAR_0)
     return 1;

   if (FUNC_0 (VAR_10) && FUNC_2 (VAR_10) != VAR_2)
     return 1;
 }
      break;
    case 131:
      if (FUNC_1 (VAR_9) && VAR_10 == VAR_3)
 return 1;


    case 128:
      if (FUNC_3 (VAR_9, VAR_10))
 {
   if (VAR_5
       || (VAR_10 != VAR_8 && VAR_10 != VAR_6 && VAR_10 != VAR_7))
     return 1;
 }
      break;
    case 130:
      if (FUNC_2 (VAR_10) == VAR_1)
 return 1;
      break;
    case 132:
      if (FUNC_3 (VAR_9, VAR_10))
 {
   if (VAR_10 == VAR_4 || VAR_10 == VAR_3)
     return 1;
 }
      break;
    default:
      return 0;
    }

  return 0;
}
