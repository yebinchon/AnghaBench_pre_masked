
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int bitoffs; int bitlen; } ;
typedef TYPE_1__ ib_field_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, int VAR_1, const ib_field_t * VAR_2,
         uint32_t VAR_3)
{
 int VAR_4 = (8 - (VAR_2->bitoffs & 7)) & 7;
 int VAR_5 = (VAR_2->bitoffs + VAR_2->bitlen) & 7;
 int VAR_6 = VAR_2->bitlen / 8;
 unsigned VAR_7 = VAR_1 + VAR_2->bitoffs / 8;
 char *VAR_8 = (char *)VAR_0;

 if (!VAR_6 && (VAR_2->bitoffs & 7) + VAR_2->bitlen < 8) {
  VAR_8[3 ^ VAR_7] &= ~((((1 << VAR_2->bitlen) - 1)) << (VAR_2->bitoffs & 7));
  VAR_8[3 ^ VAR_7] |=
      (VAR_3 & ((1 << VAR_2->bitlen) - 1)) << (VAR_2->bitoffs & 7);
  return;
 }

 if (VAR_4) {
  VAR_8[3 ^ VAR_7] &= (1 << (8 - VAR_4)) - 1;
  VAR_8[3 ^ VAR_7++] |= (VAR_3 & ((1 << VAR_4) - 1)) << (8 - VAR_4);
  VAR_3 >>= VAR_4;
 }


 for (; VAR_6--; VAR_3 >>= 8)
  VAR_8[3 ^ VAR_7++] = VAR_3 & 0xff;

 if (VAR_5) {
  VAR_8[3 ^ VAR_7] &= ~((1 << VAR_5) - 1);
  VAR_8[3 ^ VAR_7] |= VAR_3;
 }
}
