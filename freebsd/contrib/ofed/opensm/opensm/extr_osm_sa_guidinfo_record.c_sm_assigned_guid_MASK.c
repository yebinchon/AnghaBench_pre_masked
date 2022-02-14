
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int ib_net64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static ib_net64_t FUNC_1(uint8_t VAR_1)
{
 static uint32_t VAR_2;

 if (++VAR_2 == 0) {
  VAR_2--;
  return 0;
 }
 return FUNC_0(((uint64_t) VAR_2) |
    (((uint64_t) VAR_1) << 32) |
    (((uint64_t) VAR_0) << 40));
}
