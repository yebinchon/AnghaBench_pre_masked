
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(u_int16_t VAR_0)
{
 int VAR_1, VAR_2;

 if (VAR_0 == 0) {
  FUNC_0("none");
  return;
 }
 VAR_2 = 1;
 for (VAR_1 = 0; VAR_1 < 16; VAR_1++, VAR_0 >>= 1)
  if (VAR_0 & 1) {
   if (!VAR_2)
    FUNC_0(" ");
   else
    VAR_2 = 0;
   FUNC_0("%d", VAR_1);
  }
}
