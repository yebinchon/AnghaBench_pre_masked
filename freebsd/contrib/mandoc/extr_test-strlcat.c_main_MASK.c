
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,char*,int) ;

int
FUNC_1(void)
{
 char VAR_0[3] = "a";
 return ! (FUNC_0(VAR_0, "b", sizeof(VAR_0)) == 2 &&
     VAR_0[0] == 'a' && VAR_0[1] == 'b' && VAR_0[2] == '\0');
}
