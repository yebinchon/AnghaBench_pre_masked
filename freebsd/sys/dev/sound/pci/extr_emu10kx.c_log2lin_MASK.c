
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int
FUNC_0(int VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;

 if (VAR_3 <= 0) {
  VAR_4 = 0x00000000;
  return (VAR_4);
 }

 if (VAR_3 >= 100) {
  VAR_4 = 0x7fffffff;
  return (VAR_4);
 }

 VAR_5 = (VAR_0 - 1) - VAR_3 / (VAR_0);
 VAR_6 = VAR_3 % (VAR_0);
 VAR_4 = VAR_1[VAR_5] * VAR_6 + VAR_2[VAR_5];
 return (VAR_4);
}
