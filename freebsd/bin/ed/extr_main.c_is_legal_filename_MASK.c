
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*) ;

int
FUNC_2(char *VAR_2)
{
 if (VAR_1 && (*VAR_2 == '!' || !FUNC_1(VAR_2, "..") || FUNC_0(VAR_2, '/'))) {
  VAR_0 = "shell access restricted";
  return 0;
 }
 return 1;
}
