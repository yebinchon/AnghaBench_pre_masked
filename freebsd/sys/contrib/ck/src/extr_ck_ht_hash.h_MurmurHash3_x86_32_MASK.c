
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const*,int) ;

__attribute__((used)) static inline void FUNC_3 ( const void * VAR_0, int VAR_1,
                          uint32_t VAR_2, uint32_t * VAR_3 )
{
  const uint8_t * VAR_4 = (const uint8_t*)VAR_0;
  const int VAR_5 = VAR_1 / 4;
  int VAR_6;

  uint32_t VAR_7 = VAR_2;

  uint32_t VAR_8 = 0xcc9e2d51;
  uint32_t VAR_9 = 0x1b873593;




  const uint32_t * VAR_10 = (const uint32_t *)(const void *)(VAR_4 + VAR_5*4);

  for(VAR_6 = -VAR_5; VAR_6; VAR_6++)
  {
    uint32_t VAR_11 = FUNC_2(VAR_10,VAR_6);

    VAR_11 *= VAR_8;
    VAR_11 = FUNC_0(VAR_11,15);
    VAR_11 *= VAR_9;

    VAR_7 ^= VAR_11;
    VAR_7 = FUNC_0(VAR_7,13);
    VAR_7 = VAR_7*5+0xe6546b64;
  }




  const uint8_t * VAR_12 = (const uint8_t*)(VAR_4 + VAR_5*4);

  uint32_t VAR_13 = 0;

  switch(VAR_1 & 3)
  {
  case 3: VAR_13 ^= VAR_12[2] << 16;

  case 2: VAR_13 ^= VAR_12[1] << 8;

  case 1: VAR_13 ^= VAR_12[0];
          VAR_13 *= VAR_8; VAR_13 = FUNC_0(VAR_13,15); VAR_13 *= VAR_9; VAR_7 ^= VAR_13;
  };




  VAR_7 ^= VAR_1;

  VAR_7 = FUNC_1(VAR_7);

  *(uint32_t *)VAR_3 = VAR_7;
}
