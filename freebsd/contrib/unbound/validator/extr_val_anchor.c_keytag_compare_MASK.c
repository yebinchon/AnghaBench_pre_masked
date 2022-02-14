
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;



__attribute__((used)) static int
FUNC_0(const void* VAR_0, const void* VAR_1)
{
 if(*(uint16_t*)VAR_0 == *(uint16_t*)VAR_1)
  return 0;
 if(*(uint16_t*)VAR_0 > *(uint16_t*)VAR_1)
  return 1;
 return -1;
}
