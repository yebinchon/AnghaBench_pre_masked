
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int
FUNC_6(int VAR_3, char *VAR_4[])
{
 FUNC_0("Platform-independent login recording test driver\n");

 VAR_0 = FUNC_2(VAR_4[0]);
 if (VAR_3 == 2) {
  if (FUNC_3(VAR_4[1], "-i", 3) == 0)
   VAR_2 = 1;
  else if (FUNC_3(VAR_4[1], "-v", 3) == 0)
   VAR_1=1;
 }

 if (!VAR_2) {
  if (VAR_1 && !FUNC_5())
   return 1;

  if (!FUNC_4())
   return 1;
 }

 FUNC_1();

 return 0;
}
