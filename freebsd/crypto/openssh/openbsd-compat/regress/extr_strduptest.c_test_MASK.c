
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*) ;

void
FUNC_3(const char *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == 0) {
  VAR_0 = 1;
  return;
 }
 if (FUNC_1(VAR_1, VAR_2) != 0)
  VAR_0 = 1;
 FUNC_0(VAR_2);
}
