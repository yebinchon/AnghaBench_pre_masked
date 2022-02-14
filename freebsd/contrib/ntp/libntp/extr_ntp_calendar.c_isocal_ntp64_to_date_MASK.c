
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vint64 ;
typedef void* uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct isodate {void* week; scalar_t__ year; void* weekday; void* second; void* minute; void* hour; } ;
struct TYPE_4__ {int hi; int lo; } ;
typedef TYPE_1__ ntpcal_split ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__ FUNC_2 (int) ;
 TYPE_1__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (int) ;

int
FUNC_6(
 struct isodate *VAR_2,
 const vint64 *VAR_3
 )
{
 ntpcal_split VAR_4;
 int32_t VAR_5[3];
 uint32_t VAR_6, VAR_7, VAR_8;





 VAR_4 = FUNC_3(VAR_3);


 VAR_4.hi += FUNC_4(VAR_5, VAR_4.lo);
 VAR_2->hour = (uint8_t)VAR_5[0];
 VAR_2->minute = (uint8_t)VAR_5[1];
 VAR_2->second = (uint8_t)VAR_5[2];


 VAR_4.hi += VAR_1 - 1;
 VAR_8 = FUNC_0(VAR_4.hi);
 VAR_7 = FUNC_1(VAR_4.hi);
 VAR_6 = VAR_8 ^ ((VAR_8 ^ VAR_7) / VAR_0);
 VAR_7 -= VAR_6 * VAR_0;
 VAR_4.hi = FUNC_5(VAR_6);
 VAR_4.lo = VAR_7;

 VAR_2->weekday = (uint8_t)VAR_4.lo + 1;


 VAR_4 = FUNC_2(VAR_4.hi);
 VAR_2->year = (uint16_t)VAR_4.hi + 1;
 VAR_2->week = (uint8_t )VAR_4.lo + 1;

 return (VAR_4.hi >= 0 && VAR_4.hi < 0x0000FFFF);
}
