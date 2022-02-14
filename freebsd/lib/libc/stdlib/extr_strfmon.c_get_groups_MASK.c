
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;

__attribute__((used)) static int
FUNC_0(int VAR_1, char *VAR_2) {

 int VAR_3 = 0;

 if (*VAR_2 == VAR_0 || *VAR_2 <= 0)
  return (0);

 while (VAR_1 > (int)*VAR_2) {
  VAR_3++;
  VAR_1 -= (int)*VAR_2++;

  if (*VAR_2 == VAR_0)
   break;

  if (*VAR_2 == 0) {
   VAR_3 += (VAR_1 - 1) / *(VAR_2 - 1);
   break;
  }
 }
 return (VAR_3);
}
