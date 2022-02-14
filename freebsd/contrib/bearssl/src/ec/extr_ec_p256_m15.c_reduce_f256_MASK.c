
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static void
FUNC_1(uint32_t *VAR_0)
{
 uint32_t VAR_1;

 VAR_1 = VAR_0[19] >> 9;
 VAR_0[19] &= 0x01FF;
 VAR_0[17] += VAR_1 << 3;
 VAR_0[14] -= VAR_1 << 10;
 VAR_0[7] -= VAR_1 << 5;
 VAR_0[0] += VAR_1;
 FUNC_0(VAR_0, VAR_0, 20);
}
