
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_1 (scalar_t__*,size_t,char*,size_t) ;

size_t FUNC_2(uint8_t* VAR_0, size_t VAR_1, uint8_t* VAR_2,
 size_t VAR_3, uint8_t* VAR_4, size_t VAR_5)
{

 int VAR_6;
 if(VAR_5 < VAR_1*2+1)
  return 0;
 VAR_6 = FUNC_1(VAR_0, VAR_1, (char*)VAR_4+1, VAR_5-1);
 if(VAR_6 < 1)
  return 0;
 VAR_4[0] = (uint8_t)VAR_6;
 VAR_6++;
 if(VAR_5 - VAR_6 < VAR_3)
  return 0;
 FUNC_0(VAR_4+VAR_6, VAR_2, VAR_3);
 return VAR_3+(size_t)VAR_6;
}
