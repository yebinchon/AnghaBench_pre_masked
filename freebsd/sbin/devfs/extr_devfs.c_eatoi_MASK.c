
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 long FUNC_1 (char const*,char**,int) ;

int
FUNC_2(const char *VAR_1)
{
 char *VAR_2;
 long VAR_3;

 VAR_3 = FUNC_1(VAR_1, &VAR_2, 10);
 if (VAR_3 > VAR_0 || *VAR_2 != '\0')
  FUNC_0(1, "error converting to integer: %s", VAR_1);
 return ((int)VAR_3);
}
