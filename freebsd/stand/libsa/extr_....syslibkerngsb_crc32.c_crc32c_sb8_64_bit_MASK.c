
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static uint32_t
FUNC_1(uint32_t VAR_8,
    const unsigned char *VAR_9,
    uint32_t VAR_10,
    uint32_t VAR_11)
{
 uint32_t VAR_12;
 uint32_t VAR_13, VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;

 VAR_15 = FUNC_0(VAR_10 - VAR_11, 8);
 VAR_16 = VAR_10 - VAR_11 - VAR_15;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  VAR_8 = VAR_0[(VAR_8 ^ *VAR_9++) & 0x000000FF] ^
      (VAR_8 >> 8);
 for (VAR_12 = 0; VAR_12 < VAR_15 / 8; VAR_12++) {

  VAR_8 ^= *VAR_9++;
  VAR_8 ^= (*VAR_9++) << 8;
  VAR_8 ^= (*VAR_9++) << 16;
  VAR_8 ^= (*VAR_9++) << 24;




  VAR_13 = VAR_7[VAR_8 & 0x000000FF] ^
      VAR_6[(VAR_8 >> 8) & 0x000000FF];
  VAR_14 = VAR_8 >> 16;
  VAR_8 = VAR_13 ^
      VAR_5[VAR_14 & 0x000000FF] ^
      VAR_4[(VAR_14 >> 8) & 0x000000FF];


  VAR_8 ^= VAR_3[*VAR_9++];
  VAR_8 ^= VAR_2[*VAR_9++];
  VAR_8 ^= VAR_1[*VAR_9++];
  VAR_8 ^= VAR_0[*VAR_9++];
 }
 for (VAR_12 = 0; VAR_12 < VAR_16; VAR_12++)
  VAR_8 = VAR_0[(VAR_8 ^ *VAR_9++) & 0x000000FF] ^
      (VAR_8 >> 8);
 return VAR_8;
}
