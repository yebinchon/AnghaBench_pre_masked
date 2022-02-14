
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {scalar_t__ tm_mday; int tm_mon; scalar_t__ tm_year; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__) ;

int32_t
FUNC_1(
 const struct tm *VAR_0
 )
{
 return FUNC_0(VAR_0->tm_year + 1899,
           VAR_0->tm_mon,
           VAR_0->tm_mday - 1) + 1;
}
