
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 char* VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 () ;

int FUNC_6(int VAR_1, char *VAR_2[])
{
 VAR_0 = VAR_2[0];

 if (VAR_1 != 3)
  FUNC_5();
 if (!FUNC_4(VAR_2[1], "djb2"))
  FUNC_2("%d\n", FUNC_0(VAR_2[2]));
 else if (!FUNC_4(VAR_2[1], "r5"))
  FUNC_2("%d\n", FUNC_3(VAR_2[2]));
 else
  FUNC_5();
 FUNC_1(0);
}
