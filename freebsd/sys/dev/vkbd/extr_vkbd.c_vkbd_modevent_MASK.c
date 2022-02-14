
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;
typedef int * eventhandler_tag ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int ,int ,int) ;


 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6(module_t VAR_6, int VAR_7, void *VAR_8)
{
 static eventhandler_tag VAR_9;

 switch (VAR_7) {
 case 129:
  FUNC_3(&VAR_4);
  VAR_9 = FUNC_1(VAR_2, VAR_3, 0, 1000);
  if (VAR_9 == ((void*)0)) {
   FUNC_2(&VAR_4);
   return (VAR_0);
  }
  FUNC_4(&VAR_5);
  break;

 case 128:
  FUNC_5(&VAR_5);
  FUNC_0(VAR_2, VAR_9);
  FUNC_2(&VAR_4);
  break;

 default:
  return (VAR_1);
 }

 return (0);
}
