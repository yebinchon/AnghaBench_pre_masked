
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static uintptr_t FUNC_0(const uint8_t **VAR_0) {
  uintptr_t VAR_1 = 0;
  uintptr_t VAR_2 = 0;
  unsigned char VAR_3;
  const uint8_t *VAR_4 = *VAR_0;
  do {
    VAR_3 = *VAR_4++;
    VAR_1 |= (VAR_3 & 0x7f) << VAR_2;
    VAR_2 += 7;
  } while (VAR_3 & 0x80);
  *VAR_0 = VAR_4;
  return VAR_1;
}
