
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct calendar {int second; int minute; int hour; } ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ) ;

int32_t
FUNC_1(
 const struct calendar *VAR_0
 )
{
 return FUNC_0(VAR_0->hour, VAR_0->minute,
           VAR_0->second);
}
