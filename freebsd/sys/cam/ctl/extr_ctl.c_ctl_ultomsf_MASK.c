
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(uint32_t VAR_0, uint8_t *VAR_1)
{

 VAR_0 += 150;
 VAR_1[0] = 0;
 VAR_1[1] = FUNC_0((VAR_0 / 75) / 60);
 VAR_1[2] = FUNC_0((VAR_0 / 75) % 60);
 VAR_1[3] = FUNC_0(VAR_0 % 75);
}
