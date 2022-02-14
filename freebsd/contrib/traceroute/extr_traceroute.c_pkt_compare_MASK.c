
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(const u_char *VAR_0, int VAR_1, const u_char *VAR_2, int VAR_3) {
 int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_0("%02x", (unsigned int)VAR_0[VAR_5]);
 FUNC_0("\n");
 VAR_4 = (VAR_1 <= VAR_3) ? VAR_1 : VAR_3;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  if (VAR_0[VAR_5] == VAR_2[VAR_5])
   FUNC_0("__");
  else
   FUNC_0("%02x", (unsigned int)VAR_2[VAR_5]);
 for (; VAR_5 < VAR_3; VAR_5++)
  FUNC_0("%02x", (unsigned int)VAR_2[VAR_5]);
 FUNC_0("\n");
}
