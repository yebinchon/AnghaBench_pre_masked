
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int,char*,int) ;

int FUNC_3(char *VAR_3, int VAR_4, unsigned VAR_5, unsigned VAR_6,
       uint16_t VAR_7[16][VAR_0])
{
 uint16_t VAR_8;
 unsigned VAR_9, VAR_10, VAR_11, VAR_12 = 0;

 if (VAR_1) {
  int VAR_13 = 0;
  unsigned VAR_14 = FUNC_0(VAR_6 + 1, 16) / 16;
  for (VAR_9 = 0; VAR_9 < VAR_14; VAR_9++) {
   VAR_8 = FUNC_1(VAR_7[VAR_9][VAR_5 % VAR_0]);
   if (VAR_8)
    VAR_12++;
   VAR_13 += FUNC_2(VAR_3 + VAR_13, VAR_4 - VAR_13, "%04hx", VAR_8);
   if (VAR_13 >= VAR_4) {
    VAR_13 = VAR_4;
    break;
   }
  }
  if (!VAR_12 && !VAR_2) {
   VAR_3[0] = 0;
   return 0;
  }
  return VAR_13;
 }
 for (VAR_9 = 0; VAR_9 <= VAR_6; VAR_9++) {
  VAR_10 = VAR_9 / 16;
  VAR_11 = VAR_9 % 16;

  VAR_8 = FUNC_1(VAR_7[VAR_10][VAR_5 % VAR_0]);
  if (VAR_8)
   VAR_12++;
  VAR_3[VAR_9 * 2] = (VAR_8 & (1 << VAR_11)) ? 'x' : ' ';
  VAR_3[VAR_9 * 2 + 1] = ' ';
 }
 if (!VAR_12 && !VAR_2) {
  VAR_3[0] = 0;
  return 0;
 }
 VAR_3[VAR_9 * 2] = 0;
 return VAR_9 * 2;
}
