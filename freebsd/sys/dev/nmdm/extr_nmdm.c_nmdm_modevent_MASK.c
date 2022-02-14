
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;
typedef int * eventhandler_tag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int ,int ,int) ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(module_t VAR_6, int VAR_7, void *VAR_8)
{
 static eventhandler_tag VAR_9;

        switch(VAR_7) {
        case 130:
  VAR_9 = FUNC_1(VAR_3, VAR_4, 0, 1000);
  if (VAR_9 == ((void*)0))
   return (VAR_1);
  break;

 case 129:
  break;

 case 128:
  if (VAR_5 != 0)
   return (VAR_0);
  FUNC_0(VAR_3, VAR_9);
  break;

 default:
  return (VAR_2);
 }

 return (0);
}
