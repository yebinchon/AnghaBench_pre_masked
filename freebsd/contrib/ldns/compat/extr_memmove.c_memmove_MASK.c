
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (void*,void const*,size_t) ;

void *FUNC_1(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 uint8_t* VAR_3 = (uint8_t*) VAR_1;
 uint8_t* VAR_4 = (uint8_t*) VAR_0;

 if (VAR_3 == VAR_4 || VAR_2 == 0)
  return VAR_0;
 if (VAR_4 > VAR_3 && VAR_4-VAR_3 < (int)VAR_2) {




  int VAR_5;
  for(VAR_5=VAR_2-1; VAR_5>=0; VAR_5--)
   VAR_4[VAR_5] = VAR_3[VAR_5];
  return VAR_0;
 }
 if (VAR_3 > VAR_4 && VAR_3-VAR_4 < (int)VAR_2) {




  size_t VAR_6;
  for(VAR_6=0; VAR_6<VAR_2; VAR_6++)
   VAR_4[VAR_6] = VAR_3[VAR_6];
  return VAR_0;
 }
 FUNC_0(VAR_0, VAR_1, VAR_2);
 return VAR_0;
}
