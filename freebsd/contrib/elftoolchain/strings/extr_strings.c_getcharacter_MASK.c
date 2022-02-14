
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

int
FUNC_1(FILE *VAR_3, long *VAR_4)
{
 int VAR_5, VAR_6;
 char VAR_7[4];

 for(VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = FUNC_0(VAR_3);
  if (VAR_6 == VAR_0)
   return (-1);
  VAR_7[VAR_5] = VAR_6;
 }

 switch (VAR_1) {
 case 129:
 case 128:
  *VAR_4 = VAR_7[0];
  break;
 case 133:
  *VAR_4 = (VAR_7[0] << 8) | VAR_7[1];
  break;
 case 132:
  *VAR_4 = VAR_7[0] | (VAR_7[1] << 8);
  break;
 case 131:
  *VAR_4 = ((long) VAR_7[0] << 24) | ((long) VAR_7[1] << 16) |
      ((long) VAR_7[2] << 8) | VAR_7[3];
  break;
 case 130:
  *VAR_4 = VAR_7[0] | ((long) VAR_7[1] << 8) | ((long) VAR_7[2] << 16) |
      ((long) VAR_7[3] << 24);
  break;
 default:
  return (-1);
 }

 return (0);
}
