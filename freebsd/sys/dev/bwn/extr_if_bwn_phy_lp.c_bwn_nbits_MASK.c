
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static uint8_t
FUNC_1(int32_t VAR_0)
{
 uint32_t VAR_1;
 uint8_t VAR_2 = 0;

 for (VAR_1 = FUNC_0(VAR_0); VAR_1 != 0; VAR_1 >>= 1)
  VAR_2++;
 return (VAR_2);
}
