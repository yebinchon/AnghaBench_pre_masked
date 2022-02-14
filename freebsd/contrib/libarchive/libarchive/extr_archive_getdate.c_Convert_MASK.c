
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
typedef enum DSTMODE { ____Placeholder_DSTMODE } DSTMODE ;
struct TYPE_2__ {scalar_t__ tm_isdst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int*) ;

__attribute__((used)) static time_t
FUNC_1(time_t VAR_6, time_t VAR_7, time_t VAR_8,
 time_t VAR_9, time_t VAR_10, time_t VAR_11,
 time_t VAR_12, enum DSTMODE VAR_13)
{
 signed char VAR_14[12] = {
  31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
 };
 time_t VAR_15;
 int VAR_16;

 if (VAR_8 < 69)
  VAR_8 += 2000;
 else if (VAR_8 < 100)
  VAR_8 += 1900;
 VAR_14[1] = VAR_8 % 4 == 0 && (VAR_8 % 100 != 0 || VAR_8 % 400 == 0)
     ? 29 : 28;


 if (VAR_8 < VAR_3 || VAR_8 > 2038
     || VAR_6 < 1 || VAR_6 > 12

     || VAR_7 < 1 || VAR_7 > VAR_14[(int)--VAR_6]
     || VAR_9 < 0 || VAR_9 > 23
     || VAR_10 < 0 || VAR_10 > 59
     || VAR_11 < 0 || VAR_11 > 59)
  return -1;

 VAR_15 = VAR_7 - 1;
 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++)
  VAR_15 += VAR_14[VAR_16];
 for (VAR_16 = VAR_3; VAR_16 < VAR_8; VAR_16++)
  VAR_15 += 365 + (VAR_16 % 4 == 0);
 VAR_15 *= VAR_0;
 VAR_15 += VAR_12;
 VAR_15 += VAR_9 * VAR_4 + VAR_10 * VAR_5 + VAR_11;
 if (VAR_13 == VAR_2
     || (VAR_13 == VAR_1 && FUNC_0(&VAR_15)->tm_isdst))
  VAR_15 -= VAR_4;
 return VAR_15;
}
