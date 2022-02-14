
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef void* uint64_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;



__attribute__((used)) static void
FUNC_0(int VAR_0, void *VAR_1, uint64_t VAR_2)
{
 switch (VAR_0) {
 case 1:
  *(uint8_t *)VAR_1 = VAR_2;
  return;
 case 2:
  *(uint16_t *)VAR_1 = VAR_2;
  return;
 case 4:
  *(uint32_t *)VAR_1 = VAR_2;
  return;
 case 8:
  *(uint64_t *)VAR_1 = VAR_2;
  return;
 }
}
