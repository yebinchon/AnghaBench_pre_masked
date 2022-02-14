
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int u_char ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

void
FUNC_1(const char *VAR_1, const u_char *VAR_2, size_t VAR_3)
{
 u_int VAR_4;

 FUNC_0(VAR_0, "%s %zu: ", VAR_1, VAR_3);
 for(VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_4 % 4 == 0 && VAR_4 != 0)
   FUNC_0(VAR_0, " ");
  FUNC_0(VAR_0, "%02x", *VAR_2++);
 }
 FUNC_0(VAR_0, "\n");
}
