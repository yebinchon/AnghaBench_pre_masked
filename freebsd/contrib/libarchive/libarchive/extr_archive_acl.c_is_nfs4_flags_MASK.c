
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

__attribute__((used)) static int
FUNC_0(const char *VAR_7, const char *VAR_8, int *VAR_9)
{
 const char *VAR_10 = VAR_7;

 while (VAR_10 < VAR_8) {
  switch(*VAR_10++) {
  case 'f':
   *VAR_9 |= VAR_2;
   break;
  case 'd':
   *VAR_9 |= VAR_0;
   break;
  case 'i':
   *VAR_9 |= VAR_4;
   break;
  case 'n':
   *VAR_9 |=
       VAR_5;
   break;
  case 'S':
   *VAR_9 |= VAR_6;
   break;
  case 'F':
   *VAR_9 |= VAR_1;
   break;
  case 'I':
   *VAR_9 |= VAR_3;
   break;
  case '-':
   break;
  default:
   return (0);
  }
 }
 return (1);
}
