
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(uint8_t* VAR_0, uint8_t VAR_1, uint8_t* VAR_2, uint8_t VAR_3)
{
 uint8_t VAR_4 = (VAR_1<VAR_3)?VAR_1:VAR_3;
 int VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_4);
 if(VAR_5 != 0)
  return VAR_5;

 if(VAR_1 < VAR_3)
  return -1;
 if(VAR_1 > VAR_3)
  return 1;
 return 0;
}
