
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tm {int tm_wday; scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_yday; scalar_t__ tm_year; } ;
struct TYPE_4__ {scalar_t__ lo; scalar_t__ hi; } ;
typedef TYPE_1__ ntpcal_split ;
typedef int int32_t ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int,int*) ;
 TYPE_1__ FUNC_1 (scalar_t__,int) ;

int
FUNC_2(
 struct tm *VAR_1,
 int32_t VAR_2
 )
{
 ntpcal_split VAR_3;
 int VAR_4;


 VAR_1->tm_wday = VAR_2 % VAR_0;
 if (VAR_1->tm_wday < 0)
  VAR_1->tm_wday += VAR_0;


 VAR_3 = FUNC_0(VAR_2 - 1, &VAR_4);
 VAR_1->tm_year = VAR_3.hi - 1899;
 VAR_1->tm_yday = VAR_3.lo;


 VAR_3 = FUNC_1(VAR_3.lo, VAR_4);
 VAR_1->tm_mon = VAR_3.hi;
 VAR_1->tm_mday = VAR_3.lo + 1;

 return VAR_4;
}
