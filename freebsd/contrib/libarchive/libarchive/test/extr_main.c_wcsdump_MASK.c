
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, const wchar_t *VAR_1)
{
 FUNC_0("      %s = ", VAR_0);
 if (VAR_1 == ((void*)0)) {
  FUNC_0("(null)");
  return;
 }
 FUNC_0("\"");
 while (*VAR_1 != L'\0') {
  unsigned int VAR_2 = *VAR_1++;
  if (VAR_2 >= 32 && VAR_2 < 127)
   FUNC_0("%c", VAR_2);
  else if (VAR_2 < 256)
   FUNC_0("\\x%02X", VAR_2);
  else if (VAR_2 < 0x10000)
   FUNC_0("\\u%04X", VAR_2);
  else
   FUNC_0("\\U%08X", VAR_2);
 }
 FUNC_0("\"\n");
}
