
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (int,char**) ;
 scalar_t__ FUNC_2 (int*,char***,char const*) ;
 int FUNC_3 (char*,...) ;

int
FUNC_4(const char *VAR_3)
{
 int VAR_4;
 char **VAR_5;

 if (FUNC_2(&VAR_4, &VAR_5, VAR_3)) {
  FUNC_3("parse error\n");
  return VAR_0;
 }

 if (FUNC_1(VAR_4, VAR_5)) {
  FUNC_3("%s: %s\n", VAR_5[0], VAR_2);
  FUNC_0(VAR_5);
  return VAR_0;
 }
 FUNC_0(VAR_5);
 return VAR_1;
}
