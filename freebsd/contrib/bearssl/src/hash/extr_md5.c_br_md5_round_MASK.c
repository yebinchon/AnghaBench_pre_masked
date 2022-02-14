
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__* VAR_0 ;
 size_t* VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__*,int,unsigned char const*) ;

void
FUNC_6(const unsigned char *VAR_2, uint32_t *VAR_3)
{
 uint32_t VAR_4[16];
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_5 = VAR_3[0];
 VAR_6 = VAR_3[1];
 VAR_7 = VAR_3[2];
 VAR_8 = VAR_3[3];





 FUNC_5(VAR_4, 16, VAR_2);

 for (VAR_9 = 0; VAR_9 < 16; VAR_9 += 4) {
  VAR_5 = VAR_6 + FUNC_4(VAR_5 + FUNC_0(VAR_6, VAR_7, VAR_8) + VAR_4[VAR_9 + 0] + VAR_0[VAR_9 + 0], 7);
  VAR_8 = VAR_5 + FUNC_4(VAR_8 + FUNC_0(VAR_5, VAR_6, VAR_7) + VAR_4[VAR_9 + 1] + VAR_0[VAR_9 + 1], 12);
  VAR_7 = VAR_8 + FUNC_4(VAR_7 + FUNC_0(VAR_8, VAR_5, VAR_6) + VAR_4[VAR_9 + 2] + VAR_0[VAR_9 + 2], 17);
  VAR_6 = VAR_7 + FUNC_4(VAR_6 + FUNC_0(VAR_7, VAR_8, VAR_5) + VAR_4[VAR_9 + 3] + VAR_0[VAR_9 + 3], 22);
 }
 for (VAR_9 = 16; VAR_9 < 32; VAR_9 += 4) {
  VAR_5 = VAR_6 + FUNC_4(VAR_5 + FUNC_1(VAR_6, VAR_7, VAR_8) + VAR_4[VAR_1[VAR_9 - 16]] + VAR_0[VAR_9 + 0], 5);
  VAR_8 = VAR_5 + FUNC_4(VAR_8 + FUNC_1(VAR_5, VAR_6, VAR_7) + VAR_4[VAR_1[VAR_9 - 15]] + VAR_0[VAR_9 + 1], 9);
  VAR_7 = VAR_8 + FUNC_4(VAR_7 + FUNC_1(VAR_8, VAR_5, VAR_6) + VAR_4[VAR_1[VAR_9 - 14]] + VAR_0[VAR_9 + 2], 14);
  VAR_6 = VAR_7 + FUNC_4(VAR_6 + FUNC_1(VAR_7, VAR_8, VAR_5) + VAR_4[VAR_1[VAR_9 - 13]] + VAR_0[VAR_9 + 3], 20);
 }
 for (VAR_9 = 32; VAR_9 < 48; VAR_9 += 4) {
  VAR_5 = VAR_6 + FUNC_4(VAR_5 + FUNC_2(VAR_6, VAR_7, VAR_8) + VAR_4[VAR_1[VAR_9 - 16]] + VAR_0[VAR_9 + 0], 4);
  VAR_8 = VAR_5 + FUNC_4(VAR_8 + FUNC_2(VAR_5, VAR_6, VAR_7) + VAR_4[VAR_1[VAR_9 - 15]] + VAR_0[VAR_9 + 1], 11);
  VAR_7 = VAR_8 + FUNC_4(VAR_7 + FUNC_2(VAR_8, VAR_5, VAR_6) + VAR_4[VAR_1[VAR_9 - 14]] + VAR_0[VAR_9 + 2], 16);
  VAR_6 = VAR_7 + FUNC_4(VAR_6 + FUNC_2(VAR_7, VAR_8, VAR_5) + VAR_4[VAR_1[VAR_9 - 13]] + VAR_0[VAR_9 + 3], 23);
 }
 for (VAR_9 = 48; VAR_9 < 64; VAR_9 += 4) {
  VAR_5 = VAR_6 + FUNC_4(VAR_5 + FUNC_3(VAR_6, VAR_7, VAR_8) + VAR_4[VAR_1[VAR_9 - 16]] + VAR_0[VAR_9 + 0], 6);
  VAR_8 = VAR_5 + FUNC_4(VAR_8 + FUNC_3(VAR_5, VAR_6, VAR_7) + VAR_4[VAR_1[VAR_9 - 15]] + VAR_0[VAR_9 + 1], 10);
  VAR_7 = VAR_8 + FUNC_4(VAR_7 + FUNC_3(VAR_8, VAR_5, VAR_6) + VAR_4[VAR_1[VAR_9 - 14]] + VAR_0[VAR_9 + 2], 15);
  VAR_6 = VAR_7 + FUNC_4(VAR_6 + FUNC_3(VAR_7, VAR_8, VAR_5) + VAR_4[VAR_1[VAR_9 - 13]] + VAR_0[VAR_9 + 3], 21);
 }

 VAR_3[0] += VAR_5;
 VAR_3[1] += VAR_6;
 VAR_3[2] += VAR_7;
 VAR_3[3] += VAR_8;
}
