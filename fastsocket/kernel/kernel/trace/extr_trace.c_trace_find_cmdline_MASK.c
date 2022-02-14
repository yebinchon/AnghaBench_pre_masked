
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int* VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 char** VAR_3 ;
 int FUNC_4 (char*,char*) ;
 int VAR_4 ;

void FUNC_5(int VAR_5, char VAR_6[])
{
 unsigned VAR_7;

 if (!VAR_5) {
  FUNC_4(VAR_6, "<idle>");
  return;
 }

 if (VAR_5 > VAR_1) {
  FUNC_4(VAR_6, "<...>");
  return;
 }

 FUNC_2();
 FUNC_0(&VAR_4);
 VAR_7 = VAR_2[VAR_5];
 if (VAR_7 != VAR_0)
  FUNC_4(VAR_6, VAR_3[VAR_7]);
 else
  FUNC_4(VAR_6, "<...>");

 FUNC_1(&VAR_4);
 FUNC_3();
}
