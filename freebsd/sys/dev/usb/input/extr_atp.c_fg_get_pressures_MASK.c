
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(int *VAR_1, const int *VAR_2, const int *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_1[VAR_5] = VAR_2[VAR_5] - VAR_3[VAR_5];
  if (VAR_1[VAR_5] > 127)
   VAR_1[VAR_5] -= 256;
  if (VAR_1[VAR_5] < -127)
   VAR_1[VAR_5] += 256;
  if (VAR_1[VAR_5] < 0)
   VAR_1[VAR_5] = 0;






  if ((u_int)VAR_1[VAR_5] <= VAR_0)
   VAR_1[VAR_5] = 0;
  else
   VAR_1[VAR_5] -= VAR_0;
 }
}
