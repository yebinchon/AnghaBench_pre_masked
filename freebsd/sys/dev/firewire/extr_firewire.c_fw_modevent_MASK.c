
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;
typedef int * eventhandler_tag ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int ,int ,int) ;



 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(module_t VAR_3, int VAR_4, void *VAR_5)
{
 int VAR_6 = 0;
 static eventhandler_tag VAR_7 = ((void*)0);

 switch (VAR_4) {
 case 130:
  VAR_7 = FUNC_1(VAR_1,
      VAR_2, 0, 1000);
  break;
 case 128:
  if (VAR_7 != ((void*)0))
   FUNC_0(VAR_1, VAR_7);
  break;
 case 129:
  break;
 default:
  return (VAR_0);
 }
 return (VAR_6);
}
