
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, uint32_t VAR_1)
{
 uint32_t *VAR_2;
 uint32_t VAR_3, VAR_4;

 VAR_2 = (uint32_t *)VAR_0;
 VAR_1 /= sizeof(uint32_t);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3+=8) {
  FUNC_0("%03x: ", VAR_3*4);
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
   FUNC_0("%08x ", VAR_2[VAR_3+VAR_4]);
  FUNC_0("\n");
 }

 FUNC_0("\n");
}
