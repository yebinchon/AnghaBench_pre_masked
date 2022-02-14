
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int int16_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, uint32_t VAR_2, int *VAR_3)
{
 uint16_t VAR_4[2];
 uint16_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_0, VAR_4);

 if (VAR_6 < 0)
  return (-1);

 VAR_5 = *((int16_t*)VAR_4);




 *VAR_3 = (((int16_t)(VAR_5 & 0xffc0)) >> 6) * 25 / 10;
 return (0);
}
