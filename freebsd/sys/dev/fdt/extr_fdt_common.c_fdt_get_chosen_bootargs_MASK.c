
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*,size_t) ;

int
FUNC_2(char *VAR_1, size_t VAR_2)
{
 phandle_t VAR_3;

 VAR_3 = FUNC_0("/chosen");
 if (VAR_3 == -1)
  return (VAR_0);
 if (FUNC_1(VAR_3, "bootargs", VAR_1, VAR_2) == -1)
  return (VAR_0);
 return (0);
}
