
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int*,int ,size_t) ;

__attribute__((used)) static void
FUNC_1(uint32_t *VAR_0, const uint32_t *VAR_1)
{
 size_t VAR_2;

 VAR_2 = (VAR_1[0] + 63) >> 5;
 FUNC_0(VAR_0, 0, VAR_2 * sizeof *VAR_0);
 VAR_0[0] = VAR_1[0];
 VAR_0[1] = 0x00000001;
}
