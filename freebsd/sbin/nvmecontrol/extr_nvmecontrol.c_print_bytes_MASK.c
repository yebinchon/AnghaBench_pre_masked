
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2, VAR_3;
 uint8_t *VAR_4, *VAR_5;

 VAR_5 = (uint8_t *)VAR_0 + VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_4 = (uint8_t *)VAR_0 + (VAR_2*16);
  FUNC_0("%03x: ", VAR_2*16);
  for (VAR_3 = 0; VAR_3 < 16 && VAR_4 < VAR_5; VAR_3++)
   FUNC_0("%02x ", *VAR_4++);
  if (VAR_4 >= VAR_5)
   break;
  FUNC_0("\n");
 }
 FUNC_0("\n");
}
