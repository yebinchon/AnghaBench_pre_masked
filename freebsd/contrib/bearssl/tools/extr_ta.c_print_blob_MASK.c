
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 FUNC_0("\nstatic const unsigned char %s[] = {", VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 ++) {
  if (VAR_3 != 0) {
   FUNC_0(",");
  }
  if (VAR_3 % 12 == 0) {
   FUNC_0("\n\t");
  } else {
   FUNC_0(" ");
  }
  FUNC_0("0x%02X", VAR_1[VAR_3]);
 }
 FUNC_0("\n};\n");
}
