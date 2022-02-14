
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;



__attribute__((used)) static void
FUNC_0(const uint8_t *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4,
    uint8_t *VAR_5, uint8_t *VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = VAR_2 / 8;





 if (VAR_6 != ((void*)0)) {
  *VAR_6 = (0xff
      >> (8 - VAR_3))
      << (8 - VAR_3 - VAR_4);
 }

 if (VAR_7 == (VAR_2 + VAR_3 - 1) / 8) {

  *VAR_5 = VAR_0[VAR_7];
  if (VAR_4 >= VAR_2)
   *VAR_5 >>= (VAR_4 - VAR_2 % 8);
  else
   *VAR_5 <<= (VAR_2 % 8 - VAR_4);
 } else {

  if (VAR_4 >= VAR_2 % 8) {
   *VAR_5 =
       VAR_0[VAR_7] << (8 - VAR_4 - VAR_2 % 8) |
       VAR_0[VAR_7 + 1] >> (VAR_4 - VAR_2 % 8);
  } else {
   *VAR_5 =
       VAR_0[VAR_7] << (VAR_2 % 8 - VAR_4) |
       VAR_0[VAR_7 + 1] >> (8 - VAR_2 % 8 - VAR_4);
  }
 }
}
