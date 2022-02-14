
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(uint16_t *VAR_0, uint32_t VAR_1)
{
 u_int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1 / 2; VAR_2++) {
  if ((VAR_2 % 8) == 0)
   FUNC_0(" %3d: ", VAR_2);
  FUNC_0("%04hx ", VAR_0[VAR_2]);
  if ((VAR_2 % 8) == 7)
   FUNC_0("\n");
 }
 if ((VAR_2 % 8) != 7)
  FUNC_0("\n");
}
