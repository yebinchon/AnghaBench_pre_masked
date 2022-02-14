
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,int) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int *,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(int VAR_0, char **VAR_1)
{
 FILE *VAR_2, *VAR_3;

 if (FUNC_0(VAR_0, 3) == 1)
  return;

 if ((VAR_2 = FUNC_1(VAR_1[1], "rw")) == ((void*)0)) {
  FUNC_3(1);
  FUNC_4("BAD FILE_ARGUMENT");
  return;
 }


 if ((VAR_3 = FUNC_1(VAR_1[2], "rw")) == ((void*)0)) {
  FUNC_3(1);
  FUNC_4("BAD FILE_ARGUMENT");
  return;
 }

 FUNC_3(1);
 FUNC_5(FUNC_2(VAR_1[0], VAR_3, VAR_2));
}
