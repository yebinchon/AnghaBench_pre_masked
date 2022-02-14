
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int bitoffs; int bitlen; } ;
typedef TYPE_1__ ib_field_t ;



__attribute__((used)) static uint32_t FUNC_0(void *VAR_0, int VAR_1, const ib_field_t * VAR_2)
{
 int VAR_3 = (8 - (VAR_2->bitoffs & 7)) & 7;
 int VAR_4 = (VAR_2->bitoffs + VAR_2->bitlen) & 7;
 int VAR_5 = VAR_2->bitlen / 8;
 unsigned VAR_6 = VAR_1 + VAR_2->bitoffs / 8;
 uint8_t *VAR_7 = (uint8_t *) VAR_0;
 uint32_t VAR_8 = 0, VAR_9 = 0, VAR_10;

 if (!VAR_5 && (VAR_2->bitoffs & 7) + VAR_2->bitlen < 8)
  return (VAR_7[3 ^ VAR_6] >> (VAR_2->bitoffs & 7)) & ((1 << VAR_2->bitlen) -
          1);

 if (VAR_3)
  VAR_9 = VAR_7[3 ^ VAR_6++] >> (8 - VAR_3);

 if (VAR_4) {
  VAR_10 = VAR_1 + (VAR_2->bitoffs + VAR_2->bitlen) / 8;
  VAR_8 = (VAR_7[3 ^ VAR_10] & ((1 << VAR_4) - 1));
 }


 for (VAR_6 += VAR_5 - 1; VAR_5--; VAR_6--)
  VAR_8 = (VAR_8 << 8) | VAR_7[3 ^ VAR_6];

 return (VAR_8 << VAR_3) | VAR_9;
}
