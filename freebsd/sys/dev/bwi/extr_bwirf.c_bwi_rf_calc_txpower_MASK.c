
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(int8_t *VAR_2, uint8_t VAR_3, const int16_t VAR_4[])
{
 int32_t VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_5 = FUNC_0(16 * VAR_4[0] + VAR_3 * VAR_4[1], 32);
 VAR_6 = FUNC_2(FUNC_0(32768 + VAR_3 * VAR_4[2], 256), 1);



 VAR_7 = 256;
 for (VAR_9 = 0; VAR_9 < 16; ++VAR_9) {
  int32_t VAR_10, VAR_11;

  VAR_10 = FUNC_0(
   VAR_7 * 4096 - FUNC_0(VAR_6 * VAR_7, 16) * VAR_7, 2048);
  VAR_11 = FUNC_1(VAR_10 - VAR_7);
  VAR_7 = VAR_10;

  if (VAR_11 < 2)
   break;
 }
 if (VAR_9 == 16)
  return VAR_0;



 VAR_8 = FUNC_0(VAR_5 * VAR_7, 8192);
 if (VAR_8 < -127)
  VAR_8 = -127;
 else if (VAR_8 > 128)
  VAR_8 = 128;

 *VAR_2 = VAR_8;
 return 0;
}
