
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int rawsum_t ;


 scalar_t__ FUNC_0 (int ) ;

rawsum_t
FUNC_1(uint8_t *VAR_0, size_t VAR_1, rawsum_t VAR_2)
{

 uint16_t *VAR_3 = (uint16_t *)VAR_0;
 int VAR_4 = VAR_1 / 2;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_2 += FUNC_0(VAR_3[VAR_5]);

 if (VAR_1 & 1)
  VAR_2 += (VAR_0[VAR_1-1] << 8);

 return VAR_2;
}
