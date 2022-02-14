
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;

int
FUNC_3(void)
{
 phandle_t VAR_1;
 char VAR_2[2048];
 int VAR_3;

 VAR_1 = FUNC_0("/chosen");
 if (VAR_1 == -1)
  return (VAR_1);

 if ((VAR_3 = FUNC_1(VAR_1, "bootargs", VAR_2, sizeof(VAR_2))) != -1) {
  VAR_0 |= FUNC_2(VAR_2);
  return (0);
 }

 return (VAR_3);
}
