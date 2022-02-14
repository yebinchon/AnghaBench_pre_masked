
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int) ;

uint32_t
FUNC_2(const void *VAR_0, size_t VAR_1, uint32_t VAR_2)
{
 const uint8_t *VAR_3;
 uint32_t VAR_4, VAR_5;
 size_t VAR_6;


 VAR_3 = VAR_0;
 VAR_6 = VAR_1;
 VAR_4 = VAR_2;


 while (VAR_6 >= 4) {

  VAR_5 = FUNC_0(VAR_3);
  VAR_3 += 4;
  VAR_6 -= 4;
  VAR_5 *= 0xcc9e2d51;
  VAR_5 = FUNC_1(VAR_5, 15);
  VAR_5 *= 0x1b873593;
  VAR_4 ^= VAR_5;
  VAR_4 = FUNC_1(VAR_4, 13);
  VAR_4 *= 5;
  VAR_4 += 0xe6546b64;
 }



 if (VAR_6 > 0) {
  VAR_5 = 0;
  switch (VAR_6) {
  case 3:
   VAR_5 |= VAR_3[2] << 16;
  case 2:
   VAR_5 |= VAR_3[1] << 8;
  case 1:
   VAR_5 |= VAR_3[0];
   VAR_5 *= 0xcc9e2d51;
   VAR_5 = FUNC_1(VAR_5, 15);
   VAR_5 *= 0x1b873593;
   VAR_4 ^= VAR_5;
   break;
  }
 }


 VAR_4 ^= (uint32_t)VAR_1;
 VAR_4 ^= VAR_4 >> 16;
 VAR_4 *= 0x85ebca6b;
 VAR_4 ^= VAR_4 >> 13;
 VAR_4 *= 0xc2b2ae35;
 VAR_4 ^= VAR_4 >> 16;
 return (VAR_4);
}
