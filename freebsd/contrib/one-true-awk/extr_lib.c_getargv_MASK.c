
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Cell ;
typedef int Array ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (char*,int *) ;
 int * FUNC_3 (char*,char*,double,int ,int *) ;
 int FUNC_4 (char*,char*,int) ;

char *FUNC_5(int VAR_1)
{
 Cell *VAR_2;
 char *VAR_3, VAR_4[50];
 extern Array *VAR_5;

 FUNC_4(VAR_4, "%d", VAR_1);
 if (FUNC_2(VAR_4, VAR_5) == ((void*)0))
  return ((void*)0);
 VAR_2 = FUNC_3(VAR_4, "", 0.0, VAR_0, VAR_5);
 VAR_3 = FUNC_1(VAR_2);
    FUNC_0( ("getargv(%d) returns |%s|\n", VAR_1, VAR_3) );
 return VAR_3;
}
