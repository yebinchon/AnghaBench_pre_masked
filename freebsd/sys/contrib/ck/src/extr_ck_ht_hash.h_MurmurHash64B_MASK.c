
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



__attribute__((used)) static inline uint64_t FUNC_0 ( const void * VAR_0, int VAR_1, uint64_t VAR_2 )
{
  const uint32_t VAR_3 = 0x5bd1e995;
  const int VAR_4 = 24;

  uint32_t VAR_5 = (uint32_t)(VAR_2) ^ VAR_1;
  uint32_t VAR_6 = (uint32_t)(VAR_2 >> 32);

  const uint32_t * VAR_7 = (const uint32_t *)VAR_0;

  while(VAR_1 >= 8)
  {
    uint32_t VAR_8 = *VAR_7++;
    VAR_8 *= VAR_3; VAR_8 ^= VAR_8 >> VAR_4; VAR_8 *= VAR_3;
    VAR_5 *= VAR_3; VAR_5 ^= VAR_8;
    VAR_1 -= 4;

    uint32_t VAR_9 = *VAR_7++;
    VAR_9 *= VAR_3; VAR_9 ^= VAR_9 >> VAR_4; VAR_9 *= VAR_3;
    VAR_6 *= VAR_3; VAR_6 ^= VAR_9;
    VAR_1 -= 4;
  }

  if(VAR_1 >= 4)
  {
    uint32_t VAR_10 = *VAR_7++;
    VAR_10 *= VAR_3; VAR_10 ^= VAR_10 >> VAR_4; VAR_10 *= VAR_3;
    VAR_5 *= VAR_3; VAR_5 ^= VAR_10;
    VAR_1 -= 4;
  }

  switch(VAR_1)
  {
  case 3: VAR_6 ^= ((const unsigned char*)VAR_7)[2] << 16;

  case 2: VAR_6 ^= ((const unsigned char*)VAR_7)[1] << 8;

  case 1: VAR_6 ^= ((const unsigned char*)VAR_7)[0];
      VAR_6 *= VAR_3;
  };

  VAR_5 ^= VAR_6 >> 18; VAR_5 *= VAR_3;
  VAR_6 ^= VAR_5 >> 22; VAR_6 *= VAR_3;
  VAR_5 ^= VAR_6 >> 17; VAR_5 *= VAR_3;
  VAR_6 ^= VAR_5 >> 19; VAR_6 *= VAR_3;

  uint64_t VAR_11 = VAR_5;

  VAR_11 = (VAR_11 << 32) | VAR_6;

  return VAR_11;
}
