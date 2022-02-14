
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(uint32_t *VAR_0)
{
 size_t VAR_1;

 if (VAR_0[0] == 0) {
  FUNC_0(" 00000000 (0, 0)");
  return;
 }
 for (VAR_1 = (VAR_0[0] + 31) >> 5; VAR_1 > 0; VAR_1 --) {
  FUNC_0(" %08lX", (unsigned long)VAR_0[VAR_1]);
 }
 FUNC_0(" (%u, %u)", (unsigned)(VAR_0[0] >> 5), (unsigned)(VAR_0[0] & 31));
}
