
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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char**,char*) ;

__attribute__((used)) static int
FUNC_2(char **VAR_11, int VAR_12, int *VAR_13)
{
 extern int VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;

 VAR_15 = VAR_17 = 1;
 VAR_14 = 0;

 *VAR_13 = VAR_1;
 while ((VAR_18 = FUNC_1(VAR_12, VAR_11, "1Safhlnrt")) != -1) {
  switch (VAR_18) {
  case '1':
   *VAR_13 &= ~VAR_10;
   *VAR_13 |= VAR_4;
   break;
  case 'S':
   *VAR_13 &= ~VAR_9;
   *VAR_13 |= VAR_6;
   break;
  case 'a':
   *VAR_13 |= VAR_5;
   break;
  case 'f':
   *VAR_13 &= ~VAR_9;
   break;
  case 'h':
   *VAR_13 |= VAR_7;
   break;
  case 'l':
   *VAR_13 &= ~VAR_4;
   *VAR_13 |= VAR_0;
   break;
  case 'n':
   *VAR_13 &= ~VAR_4;
   *VAR_13 |= VAR_2|VAR_0;
   break;
  case 'r':
   *VAR_13 |= VAR_3;
   break;
  case 't':
   *VAR_13 &= ~VAR_9;
   *VAR_13 |= VAR_8;
   break;
  default:
   FUNC_0("ls: Invalid flag -%c", VAR_16);
   return -1;
  }
 }

 return VAR_15;
}
