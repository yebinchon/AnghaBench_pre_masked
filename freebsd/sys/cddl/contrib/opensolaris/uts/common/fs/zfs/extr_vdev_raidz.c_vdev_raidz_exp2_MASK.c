
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef int uint8_t ;


 int FUNC_0 (int) ;
 scalar_t__* VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static uint8_t
FUNC_1(uint_t VAR_2, int VAR_3)
{
 if (VAR_2 == 0)
  return (0);

 FUNC_0(VAR_3 >= 0);
 FUNC_0(VAR_0[VAR_2] > 0 || VAR_2 == 1);

 VAR_3 += VAR_0[VAR_2];
 if (VAR_3 > 255)
  VAR_3 -= 255;

 return (VAR_1[VAR_3]);
}
