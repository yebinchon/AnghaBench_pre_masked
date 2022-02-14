
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int) ;

int
FUNC_1(void)
{
 char *VAR_0;

 VAR_0 = FUNC_0("123", 2);
 return VAR_0[0] != '1' ? 1 : VAR_0[1] != '2' ? 2 : VAR_0[2] != '\0' ? 3 : 0;
}
