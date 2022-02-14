
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
typedef size_t uchar_t ;


 size_t VAR_0 ;
 size_t*** VAR_1 ;
 size_t*** VAR_2 ;
 size_t*** VAR_3 ;
 size_t** VAR_4 ;

__attribute__((used)) static uchar_t
FUNC_0(size_t VAR_5, uchar_t *VAR_6, size_t VAR_7)
{
 uint16_t VAR_8 = 0;
 uint16_t VAR_9 = 0;
 uint16_t VAR_10 = 0;
 uint16_t VAR_11 = 0;

 if (VAR_7 == 1 || VAR_7 > 4)
  return (0);

 if (VAR_7 == 2) {
  VAR_10 = VAR_6[0];
  VAR_11 = VAR_6[1];
 } else if (VAR_7 == 3) {
  VAR_9 = VAR_6[0];
  VAR_10 = VAR_6[1];
  VAR_11 = VAR_6[2];
 } else if (VAR_7 == 4) {
  VAR_8 = VAR_6[0];
  VAR_9 = VAR_6[1];
  VAR_10 = VAR_6[2];
  VAR_11 = VAR_6[3];
 }

 VAR_8 = VAR_4[VAR_5][VAR_8];
 if (VAR_8 == VAR_0)
  return (0);

 VAR_9 = VAR_1[VAR_5][VAR_8][VAR_9];
 if (VAR_9 == VAR_0)
  return (0);

 VAR_10 = VAR_2[VAR_5][VAR_9][VAR_10];
 if (VAR_10 == VAR_0)
  return (0);

 return (VAR_3[VAR_5][VAR_10][VAR_11]);
}
