
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_short ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int ** VAR_3 ;
 void* FUNC_1 () ;

__attribute__((used)) static u_short
FUNC_2(void **VAR_4)
{
 u_short VAR_5;

 FUNC_0();




 for (VAR_5 = 1; VAR_5 <= VAR_1; VAR_5++) {
  if (VAR_3[VAR_5] == ((void*)0))
   break;
 }


 if (VAR_5 >= VAR_2) {
  *VAR_4 = FUNC_1();
  return (VAR_0);
 }
 if (VAR_5 > VAR_1)
  VAR_1 = VAR_5;
 return (VAR_5);
}
