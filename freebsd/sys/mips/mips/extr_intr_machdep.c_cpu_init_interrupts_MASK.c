
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,int) ;

void
FUNC_2()
{
 int VAR_4;
 char VAR_5[VAR_0 + 1];





 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_1(VAR_5, VAR_0 + 1, "sint%d:", VAR_4);
  VAR_3[VAR_4] = FUNC_0(VAR_5);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_1(VAR_5, VAR_0 + 1, "int%d:", VAR_4);
  VAR_3[VAR_2 + VAR_4] = FUNC_0(VAR_5);
 }
}
