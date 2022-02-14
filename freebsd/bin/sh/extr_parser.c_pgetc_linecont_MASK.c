
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(void)
{
 int VAR_2;

 while ((VAR_2 = FUNC_1()) == '\\') {
  VAR_2 = FUNC_0();
  if (VAR_2 == '\n') {
   VAR_1++;
   if (VAR_0)
    FUNC_4(2);
   else
    FUNC_4(0);
  } else {
   FUNC_2();

   FUNC_3("\\", 1, ((void*)0));
   return (FUNC_0());
  }
 }
 return (VAR_2);
}
