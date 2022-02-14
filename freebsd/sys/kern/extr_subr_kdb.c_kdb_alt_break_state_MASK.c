
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

__attribute__((used)) static int
FUNC_0(int VAR_8, int *VAR_9)
{
 int VAR_10;


 if (VAR_8 == VAR_3) {
  *VAR_9 = 130;
  return (0);
 }

 VAR_10 = 0;
 switch (*VAR_9) {
 case 130:
  *VAR_9 = 128;
  if (VAR_8 == VAR_7)
   *VAR_9 = 129;
  break;
 case 129:
  *VAR_9 = 128;
  if (VAR_8 == VAR_4)
   VAR_10 = VAR_0;
  else if (VAR_8 == VAR_5)
   VAR_10 = VAR_1;
  else if (VAR_8 == VAR_6)
   VAR_10 = VAR_2;
  break;
 case 128:
 default:
  *VAR_9 = 128;
  break;
 }
 return (VAR_10);
}
