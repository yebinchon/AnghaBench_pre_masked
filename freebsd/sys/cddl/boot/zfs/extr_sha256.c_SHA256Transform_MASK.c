
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;
 int* VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(uint32_t *VAR_1, const uint8_t *VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14[64];


 for (VAR_11 = 0; VAR_11 < 16; VAR_11++, VAR_2 += sizeof (uint32_t))
  VAR_14[VAR_11] = (VAR_2[0] << 24) | (VAR_2[1] << 16) | (VAR_2[2] << 8) | VAR_2[3];


 for (VAR_11 = 16; VAR_11 < 64; VAR_11++)
  VAR_14[VAR_11] = FUNC_5(VAR_14[VAR_11 - 2]) + VAR_14[VAR_11 - 7] +
      FUNC_4(VAR_14[VAR_11 - 15]) + VAR_14[VAR_11 - 16];


 VAR_3 = VAR_1[0]; VAR_4 = VAR_1[1]; VAR_5 = VAR_1[2]; VAR_6 = VAR_1[3];
 VAR_7 = VAR_1[4]; VAR_8 = VAR_1[5]; VAR_9 = VAR_1[6]; VAR_10 = VAR_1[7];


 for (VAR_11 = 0; VAR_11 < 64; VAR_11++) {
  VAR_12 = VAR_10 + FUNC_1(VAR_7) + FUNC_2(VAR_7, VAR_8, VAR_9) + VAR_0[VAR_11] + VAR_14[VAR_11];
  VAR_13 = FUNC_0(VAR_3) + FUNC_3(VAR_3, VAR_4, VAR_5);
  VAR_10 = VAR_9; VAR_9 = VAR_8; VAR_8 = VAR_7; VAR_7 = VAR_6 + VAR_12;
  VAR_6 = VAR_5; VAR_5 = VAR_4; VAR_4 = VAR_3; VAR_3 = VAR_12 + VAR_13;
 }


 VAR_1[0] += VAR_3; VAR_1[1] += VAR_4; VAR_1[2] += VAR_5; VAR_1[3] += VAR_6;
 VAR_1[4] += VAR_7; VAR_1[5] += VAR_8; VAR_1[6] += VAR_9; VAR_1[7] += VAR_10;
}
