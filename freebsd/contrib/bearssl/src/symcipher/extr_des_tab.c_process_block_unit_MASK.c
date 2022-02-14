
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int const,int const) ;

__attribute__((used)) static void
FUNC_1(uint32_t *VAR_0, uint32_t *VAR_1, const uint32_t *VAR_2)
{
 int VAR_3;
 uint32_t VAR_4, VAR_5;

 VAR_4 = *VAR_0;
 VAR_5 = *VAR_1;
 for (VAR_3 = 0; VAR_3 < 16; VAR_3 ++) {
  uint32_t VAR_6;

  VAR_6 = VAR_4 ^ FUNC_0(VAR_5, VAR_2[(VAR_3 << 1) + 0], VAR_2[(VAR_3 << 1) + 1]);
  VAR_4 = VAR_5;
  VAR_5 = VAR_6;
 }
 *VAR_0 = VAR_5;
 *VAR_1 = VAR_4;
}
