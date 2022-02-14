
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int device_t ;


 size_t* VAR_0 ;

__attribute__((used)) static uint8_t
FUNC_0(device_t VAR_1, device_t VAR_2, uint8_t *VAR_3, size_t VAR_4)
{
 uint8_t VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  VAR_5 = VAR_0[VAR_5 ^ VAR_3[VAR_6]];
 return VAR_5;
}
