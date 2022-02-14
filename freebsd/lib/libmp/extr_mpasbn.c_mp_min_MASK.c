
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MINT ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,int *,int *) ;
 char* FUNC_4 (int ,size_t*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t) ;
 int FUNC_7 (char*,char*,size_t) ;
 int VAR_0 ;

void
FUNC_8(MINT *VAR_1)
{
 MINT *VAR_2;
 char *VAR_3, *VAR_4;
 size_t VAR_5;

 VAR_3 = FUNC_4(VAR_0, &VAR_5);
 if (VAR_3 == ((void*)0))
  FUNC_0(("min"));
 VAR_4 = FUNC_6(VAR_5 + 1);
 if (VAR_4 == ((void*)0))
  FUNC_0(("min"));
 FUNC_7(VAR_4, VAR_3, VAR_5);
 VAR_4[VAR_5] = '\0';
 VAR_2 = FUNC_1("min", VAR_4);
 FUNC_3("min", VAR_2, VAR_1);
 FUNC_2("min", VAR_2);
 FUNC_5(VAR_4);
}
