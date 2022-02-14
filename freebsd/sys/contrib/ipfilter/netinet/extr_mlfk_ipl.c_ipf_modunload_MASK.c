
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 scalar_t__* VAR_0 ;
 int ** VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 char* VAR_2 ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6()
{
 int VAR_3, VAR_4;

 FUNC_1();

 FUNC_2();

 VAR_3 = FUNC_3();
 if (VAR_3 != 0)
  return VAR_3;

 for (VAR_4 = 0; VAR_0[VAR_4]; VAR_4++) {
  if (VAR_1[VAR_4] != ((void*)0))
   FUNC_0(VAR_1[VAR_4]);
 }

 FUNC_4();

 FUNC_5("%s unloaded\n", VAR_2);

 return (0);
}
