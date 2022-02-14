
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

__attribute__((used)) static int
FUNC_0(const char *VAR_14, const char *VAR_15, int *VAR_16)
{
 const char *VAR_17 = VAR_14;

 while (VAR_17 < VAR_15) {
  switch (*VAR_17++) {
  case 'r':
   *VAR_16 |= VAR_6;
   break;
  case 'w':
   *VAR_16 |= VAR_11;
   break;
  case 'x':
   *VAR_16 |= VAR_3;
   break;
  case 'p':
   *VAR_16 |= VAR_0;
   break;
  case 'D':
   *VAR_16 |= VAR_2;
   break;
  case 'd':
   *VAR_16 |= VAR_1;
   break;
  case 'a':
   *VAR_16 |= VAR_5;
   break;
  case 'A':
   *VAR_16 |= VAR_10;
   break;
  case 'R':
   *VAR_16 |= VAR_7;
   break;
  case 'W':
   *VAR_16 |= VAR_12;
   break;
  case 'c':
   *VAR_16 |= VAR_4;
   break;
  case 'C':
   *VAR_16 |= VAR_9;
   break;
  case 'o':
   *VAR_16 |= VAR_13;
   break;
  case 's':
   *VAR_16 |= VAR_8;
   break;
  case '-':
   break;
  default:
   return(0);
  }
 }
 return (1);
}
