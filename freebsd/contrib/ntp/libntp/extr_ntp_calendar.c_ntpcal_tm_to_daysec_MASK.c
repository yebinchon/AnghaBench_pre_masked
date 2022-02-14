
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_sec; int tm_min; int tm_hour; } ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ) ;

int32_t
FUNC_1(
 const struct tm *VAR_0
 )
{
 return FUNC_0(VAR_0->tm_hour, VAR_0->tm_min,
           VAR_0->tm_sec);
}
