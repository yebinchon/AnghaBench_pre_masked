
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (int *,char*) ;

int
FUNC_6(int VAR_1, char *VAR_2[])
{
 char *VAR_3, *VAR_4;

 if (VAR_1 < 2)
  VAR_4 = FUNC_3("Password:");
 else
  VAR_4 = VAR_2[1];
 VAR_3 = FUNC_5(((void*)0), VAR_4);
 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_0, "out of memory");
 FUNC_4("%s\n", VAR_3);
 FUNC_2(VAR_3);
 FUNC_1(0);
}
