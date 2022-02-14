
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static
unsigned char *
FUNC_0 (unsigned char *VAR_0, unsigned char *VAR_1, unsigned int VAR_2)

{
 unsigned int VAR_3;
 unsigned int VAR_4 = VAR_2 / 2;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  *VAR_1++ = VAR_0[VAR_3] & 0x7f;
  *VAR_1++ = VAR_0[VAR_3] >> 7;
 }
 return VAR_1;
}
