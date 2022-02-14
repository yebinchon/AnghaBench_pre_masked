
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int minor_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

minor_t
FUNC_3(void)
{
 static minor_t VAR_3;
 minor_t VAR_4;

 FUNC_0(FUNC_1(&VAR_1));

 for (VAR_4 = VAR_3 + 1; VAR_4 != VAR_3; VAR_4++) {
  if (VAR_4 > VAR_0)
   VAR_4 = 1;
  if (FUNC_2(VAR_2, VAR_4) == ((void*)0)) {
   VAR_3 = VAR_4;
   return (VAR_4);
  }
 }

 return (0);
}
