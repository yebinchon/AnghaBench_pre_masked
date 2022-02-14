
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int operatorT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;
 scalar_t__* VAR_13 ;
 int * VAR_14 ;

__attribute__((used)) static inline operatorT
FUNC_0 (int *VAR_15)
{
  int VAR_16;
  operatorT VAR_17;

  VAR_16 = *VAR_12 & 0xff;
  *VAR_15 = 1;

  if (VAR_13[VAR_16])
    return VAR_4;

  switch (VAR_16)
    {
    default:
      return VAR_14[VAR_16];

    case '+':
    case '-':
      return VAR_14[VAR_16];

    case '<':
      switch (VAR_12[1])
 {
 default:
   return VAR_14[VAR_16];
 case '<':
   VAR_17 = VAR_6;
   break;
 case '>':
   VAR_17 = VAR_9;
   break;
 case '=':
   VAR_17 = VAR_5;
   break;
 }
      *VAR_15 = 2;
      return VAR_17;

    case '=':
      if (VAR_12[1] != '=')
 return VAR_14[VAR_16];

      *VAR_15 = 2;
      return VAR_2;

    case '>':
      switch (VAR_12[1])
 {
 default:
   return VAR_14[VAR_16];
 case '>':
   VAR_17 = VAR_10;
   break;
 case '=':
   VAR_17 = VAR_3;
   break;
 }
      *VAR_15 = 2;
      return VAR_17;

    case '!':
      switch (VAR_12[1])
 {
 case '!':

   *VAR_15 = 2;
   return VAR_0;
 case '=':

   *VAR_15 = 2;
   return VAR_9;
 default:
   if (VAR_11)
     return VAR_1;
   return VAR_14[VAR_16];
 }

    case '|':
      if (VAR_12[1] != '|')
 return VAR_14[VAR_16];

      *VAR_15 = 2;
      return VAR_8;

    case '&':
      if (VAR_12[1] != '&')
 return VAR_14[VAR_16];

      *VAR_15 = 2;
      return VAR_7;
    }


}
