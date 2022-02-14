
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int16_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__ const*,int) ;

int16_t
FUNC_1(const int16_t VAR_1[VAR_0])
{
 int16_t VAR_2[VAR_0];
 int VAR_3, VAR_4;

 FUNC_0(VAR_2, VAR_1, VAR_0*sizeof(int16_t));
 for (VAR_3 = 0; VAR_3 < VAR_0-1; VAR_3 ++) {
  for (VAR_4 = 1; VAR_4 < VAR_0-VAR_3; VAR_4 ++) {
   if (VAR_2[VAR_4] > VAR_2[VAR_4-1]) {
    int16_t VAR_5 = VAR_2[VAR_4];
    VAR_2[VAR_4] = VAR_2[VAR_4-1];
    VAR_2[VAR_4-1] = VAR_5;
   }
  }
 }
 return VAR_2[(VAR_0-1)>>1];
}
