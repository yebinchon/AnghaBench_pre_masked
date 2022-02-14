
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct calendar {void* second; void* minute; void* hour; } ;
typedef int int32_t ;


 int FUNC_0 (int*,int ) ;

int32_t
FUNC_1(
 struct calendar *VAR_0,
 int32_t VAR_1
 )
{
 int32_t VAR_2;
 int VAR_3[3];

 VAR_2 = FUNC_0(VAR_3, VAR_1);
 VAR_0->hour = (uint8_t)VAR_3[0];
 VAR_0->minute = (uint8_t)VAR_3[1];
 VAR_0->second = (uint8_t)VAR_3[2];

 return VAR_2;
}
