
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lo; } ;
struct TYPE_5__ {TYPE_1__ d_s; } ;
typedef TYPE_2__ vint64 ;
typedef int uint32_t ;
struct calendar {int month; int monthday; int yearday; int hour; scalar_t__ minute; scalar_t__ second; int year; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct calendar const*) ;
 TYPE_2__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

uint32_t
FUNC_5(
 const struct calendar *VAR_3
 )
{
 int32_t VAR_4;
 vint64 VAR_5;

 FUNC_0(VAR_3 != ((void*)0));

 FUNC_0(VAR_3->month <= 13);
 FUNC_0(VAR_3->monthday <= 32);
 FUNC_0(VAR_3->yearday <= 366);
 FUNC_0(VAR_3->hour <= 24);
 FUNC_0(VAR_3->minute <= VAR_1);
 FUNC_0(VAR_3->second <= VAR_2);







 if (VAR_3->yearday)
  VAR_4 = FUNC_4(VAR_3->year)
         + VAR_3->yearday - 1;
 else
  VAR_4 = FUNC_1(VAR_3);

 VAR_5 = FUNC_2(VAR_4 - VAR_0,
     FUNC_3(VAR_3->hour, VAR_3->minute,
        VAR_3->second));
 return VAR_5.d_s.lo;
}
