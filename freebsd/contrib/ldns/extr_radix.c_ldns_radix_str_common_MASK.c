
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ radix_strlen_t ;



__attribute__((used)) static radix_strlen_t
FUNC_0(uint8_t* VAR_0, radix_strlen_t VAR_1,
 uint8_t* VAR_2, radix_strlen_t VAR_3)
{
 radix_strlen_t VAR_4, VAR_5 = (VAR_1<VAR_3)?VAR_1:VAR_3;
 for (VAR_4=0; VAR_4<VAR_5; VAR_4++) {
  if (VAR_0[VAR_4] != VAR_2[VAR_4]) {
   return VAR_4;
  }
 }
 return VAR_5;
}
