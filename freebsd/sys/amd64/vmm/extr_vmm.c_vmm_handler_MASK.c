
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(module_t VAR_4, int VAR_5, void *VAR_6)
{
 int VAR_7;

 switch (VAR_5) {
 case 129:
  FUNC_5();
  VAR_7 = FUNC_3();
  if (VAR_7 == 0)
   VAR_1 = 1;
  break;
 case 128:
  VAR_7 = FUNC_4();
  if (VAR_7 == 0) {
   VAR_3 = ((void*)0);
   FUNC_1();
   if (VAR_2 != VAR_0)
    FUNC_2(VAR_2);
   VAR_7 = FUNC_0();




   if (VAR_7)
    VAR_1 = 0;
  }
  break;
 default:
  VAR_7 = 0;
  break;
 }
 return (VAR_7);
}
