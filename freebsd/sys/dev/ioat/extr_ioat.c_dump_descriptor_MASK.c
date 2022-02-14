
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
  for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
   FUNC_0("%08x ", ((uint32_t *)VAR_0)[VAR_1 * 8 + VAR_2]);
  FUNC_0("\n");
 }
}
