
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int) ;

void
FUNC_6(const char *VAR_1, int VAR_2, const char *VAR_3, const char *VAR_4)
{
 char *VAR_5;
 const char *VAR_6 = (VAR_3 == ((void*)0)) ? VAR_1 : VAR_3;

 VAR_5 = FUNC_3(VAR_1);
 FUNC_5(VAR_5, VAR_2 < 0 ? (int)FUNC_4(VAR_5) : VAR_2);
 VAR_0++;
 if (FUNC_2(VAR_5, VAR_6) != 0) {
  FUNC_1("not ok %d - %s\n", VAR_0, VAR_4);
  FUNC_1("# %s -> %s (expected %s)\n", VAR_1, VAR_5, VAR_6);
 } else
  FUNC_1("ok %d - %s\n", VAR_0, VAR_4);
 FUNC_0(VAR_5);
 return;
}
