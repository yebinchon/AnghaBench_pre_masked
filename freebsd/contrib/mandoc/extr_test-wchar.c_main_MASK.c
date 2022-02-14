
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wint_t ;
typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (int ,char*) ;
 int VAR_5 ;
 int FUNC_5 (int) ;

int
FUNC_6(void)
{
 wchar_t VAR_6;
 int VAR_7;

 if (FUNC_4(VAR_0, "") == ((void*)0)) {
  FUNC_2("setlocale(LC_ALL, \"\") failed\n", VAR_5);
  return 1;
 }

 if (FUNC_4(VAR_1, VAR_4) == ((void*)0)) {
  FUNC_1(VAR_5, "setlocale(LC_CTYPE, \"%s\") failed\n",
      VAR_4);
  return 1;
 }

 if (sizeof(wchar_t) < 4) {
  FUNC_1(VAR_5, "wchar_t is only %zu bytes\n",
      sizeof(wchar_t));
  return 1;
 }

 if ((VAR_7 = FUNC_5(L' ')) != 1) {
  FUNC_1(VAR_5, "wcwidth(L' ') returned %d\n", VAR_7);
  return 1;
 }

 FUNC_0(VAR_2, VAR_3);
 VAR_6 = L'*';
 if (FUNC_3(VAR_6) != (wint_t)VAR_6) {
  FUNC_2("bad putwchar return value\n", VAR_5);
  return 1;
 }

 return 0;
}
