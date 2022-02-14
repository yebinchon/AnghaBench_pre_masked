
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;



__attribute__((used)) static int
FUNC_0(uint32_t VAR_0, int VAR_1, int VAR_2)
{
 int32_t VAR_3;
 uint32_t VAR_4;

 VAR_4 = (1 << VAR_2) - 1;
 VAR_3 = ((VAR_0 >> VAR_1) & VAR_4) << (32 - VAR_2);
 VAR_3 >>= 32 - VAR_2;
 return ((int32_t)VAR_3);
}
