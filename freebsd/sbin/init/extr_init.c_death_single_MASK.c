
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int state_func_t ;
typedef int pid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,int const) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int,int*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static state_func_t
FUNC_6(void)
{
 int VAR_7;
 pid_t VAR_8;
 static const int VAR_9[2] = { 128, 129 };

 FUNC_3(VAR_3);

 for (VAR_7 = 0; VAR_7 < 2; ++VAR_7) {
  if (FUNC_2(-1, VAR_9[VAR_7]) == -1 && VAR_5 == VAR_2)
   return (state_func_t) VAR_6;

  VAR_4 = 0;
  FUNC_0(VAR_0);
  do
   if ((VAR_8 = FUNC_4(-1, (int *)0, 0)) != -1)
    FUNC_1(VAR_8);
  while (VAR_4 == 0 && VAR_5 != VAR_1);

  if (VAR_5 == VAR_1)
   return (state_func_t) VAR_6;
 }

 FUNC_5("some processes would not die; ps axl advised");

 return (state_func_t) VAR_6;
}
