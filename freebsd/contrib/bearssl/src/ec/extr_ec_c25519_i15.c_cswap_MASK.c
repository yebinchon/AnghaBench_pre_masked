
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



__attribute__((used)) static void
FUNC_0(uint16_t *VAR_0, uint16_t *VAR_1, uint32_t VAR_2)
{
 int VAR_3;

 VAR_2 = -VAR_2;
 for (VAR_3 = 0; VAR_3 < 18; VAR_3 ++) {
  uint32_t VAR_4, VAR_5, VAR_6;

  VAR_4 = VAR_0[VAR_3];
  VAR_5 = VAR_1[VAR_3];
  VAR_6 = VAR_2 & (VAR_4 ^ VAR_5);
  VAR_0[VAR_3] = VAR_4 ^ VAR_6;
  VAR_1[VAR_3] = VAR_5 ^ VAR_6;
 }
}
