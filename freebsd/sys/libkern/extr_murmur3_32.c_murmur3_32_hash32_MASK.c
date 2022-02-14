
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int,int) ;

uint32_t
FUNC_2(const uint32_t *VAR_0, size_t VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3, VAR_4;
 size_t VAR_5;


 for (VAR_5 = VAR_1, VAR_3 = VAR_2; VAR_5 > 0; VAR_5--, VAR_0++) {
  VAR_4 = FUNC_0(*VAR_0);
  VAR_4 *= 0xcc9e2d51;
  VAR_4 = FUNC_1(VAR_4, 15);
  VAR_4 *= 0x1b873593;
  VAR_3 ^= VAR_4;
  VAR_3 = FUNC_1(VAR_3, 13);
  VAR_3 *= 5;
  VAR_3 += 0xe6546b64;
 }


 VAR_3 ^= (uint32_t)VAR_1;
 VAR_3 ^= VAR_3 >> 16;
 VAR_3 *= 0x85ebca6b;
 VAR_3 ^= VAR_3 >> 13;
 VAR_3 *= 0xc2b2ae35;
 VAR_3 ^= VAR_3 >> 16;
 return (VAR_3);
}
