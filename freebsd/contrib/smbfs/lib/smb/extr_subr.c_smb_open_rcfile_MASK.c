
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (char*,char*,int **) ;
 int * VAR_2 ;
 int FUNC_6 (char*,char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;

int
FUNC_8(void)
{
 char *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1("HOME");
 if (VAR_3) {
  VAR_4 = FUNC_2(FUNC_7(VAR_3) + 20);
  FUNC_6(VAR_4, "%s/.nsmbrc", VAR_3);
  VAR_5 = FUNC_5(VAR_4, "r", &VAR_2);
  FUNC_0(VAR_4);
 }
 VAR_5 = FUNC_4(VAR_1, &VAR_2);
 if (VAR_2 == ((void*)0)) {
  FUNC_3("Warning: no cfg file(s) found.\n");
  return VAR_0;
 }
 return 0;
}
