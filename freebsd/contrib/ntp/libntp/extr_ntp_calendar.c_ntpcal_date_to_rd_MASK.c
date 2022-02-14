
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct calendar {scalar_t__ monthday; scalar_t__ month; scalar_t__ year; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

int32_t
FUNC_1(
 const struct calendar *VAR_0
 )
{
 return FUNC_0((int32_t)VAR_0->year - 1,
           (int32_t)VAR_0->month - 1,
           (int32_t)VAR_0->monthday - 1) + 1;
}
