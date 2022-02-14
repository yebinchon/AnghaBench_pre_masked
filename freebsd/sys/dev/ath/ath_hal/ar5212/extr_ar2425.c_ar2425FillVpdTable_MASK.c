
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int int16_t ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int const*,int,int*,int*) ;

__attribute__((used)) static HAL_BOOL
FUNC_1(uint32_t VAR_2, int16_t VAR_3, int16_t VAR_4,
     const int16_t *VAR_5, const uint16_t *VAR_6,
     uint16_t VAR_7,
     uint16_t VAR_8[][64])
{
 uint16_t VAR_9, VAR_10, VAR_11;
 int16_t VAR_12 = (int16_t)(2*VAR_3);

 uint32_t VAR_13, VAR_14;

 VAR_9 = 0;
 VAR_10 = 0;

 if (VAR_7 < 2)
  return VAR_0;

 while (VAR_9 <= (uint16_t)(VAR_4 - VAR_3)) {
  FUNC_0(VAR_12, (const uint16_t *) VAR_5,
       VAR_7, &(VAR_13), &(VAR_14));
  if (VAR_14 < 1)
   VAR_14 = 1;
  if (VAR_13 == (uint32_t)(VAR_7 - 1))
   VAR_13 = VAR_7 - 2;
  if (VAR_5[VAR_13] == VAR_5[VAR_14])
   VAR_11 = VAR_6[VAR_13];
  else
   VAR_11 = (uint16_t)
    (((VAR_12 - VAR_5[VAR_13])*VAR_6[VAR_14]+
      (VAR_5[VAR_14] - VAR_12)*VAR_6[VAR_13])/
     (VAR_5[VAR_14] - VAR_5[VAR_13]));
  VAR_8[VAR_2][VAR_9] = VAR_11;
  VAR_9++;
  VAR_12 += 2;
 }

 return VAR_1;
}
