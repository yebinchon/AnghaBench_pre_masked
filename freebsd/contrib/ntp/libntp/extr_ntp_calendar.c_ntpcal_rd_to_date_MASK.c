
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
typedef void* uint16_t ;
typedef int u_int ;
struct calendar {int weekday; void* monthday; void* month; void* yearday; void* year; } ;
struct TYPE_4__ {int hi; scalar_t__ lo; } ;
typedef TYPE_1__ ntpcal_split ;
typedef int int32_t ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int,int*) ;
 TYPE_1__ FUNC_1 (scalar_t__,int) ;

int
FUNC_2(
 struct calendar *VAR_1,
 int32_t VAR_2
 )
{
 ntpcal_split VAR_3;
 int VAR_4;
 u_int VAR_5;
 VAR_1->weekday = VAR_2 % VAR_0;
 if (VAR_1->weekday >= VAR_0)
  VAR_1->weekday += VAR_0;

 VAR_3 = FUNC_0(VAR_2 - 1, &VAR_4);






 VAR_3.hi += 1;
 VAR_5 = 0u - ((VAR_3.hi >> 16) == 0);
 VAR_1->year = (uint16_t)(VAR_3.hi & VAR_5);
 VAR_1->yearday = (uint16_t)VAR_3.lo + 1;


 VAR_3 = FUNC_1(VAR_3.lo, VAR_4);
 VAR_1->month = (uint8_t)VAR_3.hi + 1;
 VAR_1->monthday = (uint8_t)VAR_3.lo + 1;

 return VAR_5 ? VAR_4 : -1;
}
