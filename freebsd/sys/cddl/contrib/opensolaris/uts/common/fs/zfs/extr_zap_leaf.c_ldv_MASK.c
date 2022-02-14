
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint64_t
FUNC_1(int VAR_0, const void *VAR_1)
{
 switch (VAR_0) {
 case 1:
  return (*(uint8_t *)VAR_1);
 case 2:
  return (*(uint16_t *)VAR_1);
 case 4:
  return (*(uint32_t *)VAR_1);
 case 8:
  return (*(uint64_t *)VAR_1);
 }
 FUNC_0(!"bad int len");
 return (0xFEEDFACEDEADBEEFULL);
}
