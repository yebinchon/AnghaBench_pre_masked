
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONGEST ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static LONGEST
FUNC_1 (char *VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4 = 0;
  LONGEST VAR_5 = 0;
  int VAR_6;
  int VAR_7 = 0;

  if (0 >= VAR_2)
    return VAR_0;
  switch (VAR_1[0])
    {
    case '-':
    case '+':
      VAR_7 = VAR_1[0];
      if (++VAR_4 == VAR_2)
 return VAR_0;
    }
  do
    {
      switch (VAR_6 = VAR_1[VAR_4++])
 {
 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
   VAR_6 = VAR_6 - '0';
   goto accumulate;
 case 'A':
 case 'B':
 case 'C':
 case 'D':
 case 'E':
 case 'F':
   VAR_6 = VAR_6 - 'A' + 10;
   goto accumulate;
 case 'a':
 case 'b':
 case 'c':
 case 'd':
 case 'e':
 case 'f':
   VAR_6 = VAR_6 - 'a' + 10;
 accumulate:
   if (VAR_6 >= VAR_3)
     return VAR_0;
   VAR_5 *= VAR_3;
   VAR_5 += VAR_6;
   break;
 default:
   return VAR_0;
 }
    }
  while (VAR_4 < VAR_2);
  if (VAR_7 == '-')
    VAR_5 = -VAR_5;
  return FUNC_0 (VAR_5);
}
