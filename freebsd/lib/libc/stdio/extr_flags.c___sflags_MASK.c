
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int VAR_12 ;
 int VAR_13 ;

int
FUNC_0(const char *VAR_14, int *VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19;

 switch (*VAR_14++) {

 case 'r':
  VAR_16 = VAR_10;
  VAR_17 = VAR_5;
  VAR_18 = 0;
  break;

 case 'w':
  VAR_16 = VAR_12;
  VAR_17 = VAR_9;
  VAR_18 = VAR_3 | VAR_7;
  break;

 case 'a':
  VAR_16 = VAR_12;
  VAR_17 = VAR_9;
  VAR_18 = VAR_3 | VAR_1;
  break;

 default:
  VAR_13 = VAR_0;
  return (0);
 }

 do {
  VAR_19 = 1;
  switch (*VAR_14++) {
  case 'b':

   break;
  case '+':

   VAR_16 = VAR_11;
   VAR_17 = VAR_6;
   break;
  case 'x':

   VAR_18 |= VAR_4;
   break;
  case 'e':

   VAR_18 |= VAR_2;
   break;
  case 'v':

   VAR_18 |= VAR_8;
   break;
  default:
   VAR_19 = 0;
   break;
  }
 } while (VAR_19);

 if ((VAR_18 & VAR_4) != 0 && VAR_17 == VAR_5) {
  VAR_13 = VAR_0;
  return (0);
 }

 *VAR_15 = VAR_17 | VAR_18;
 return (VAR_16);
}
