
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int hi; int lo; } ;
typedef TYPE_1__ ntpcal_split ;
typedef scalar_t__ int32_t ;


 scalar_t__** VAR_0 ;

ntpcal_split
FUNC_0(
 int32_t VAR_1,
 int VAR_2
 )
{
 ntpcal_split VAR_3;
 const uint16_t *VAR_4;


 VAR_4 = VAR_0[(VAR_2 != 0)];
 if (0 <= VAR_1 && VAR_1 < VAR_4[12]) {

  VAR_3.hi = VAR_1 >> 5;
  if (VAR_4[VAR_3.hi + 1] <= VAR_1)
   VAR_3.hi += 1;
  VAR_3.lo = VAR_1 - VAR_4[VAR_3.hi];
 } else {
  VAR_3.lo = VAR_3.hi = -1;
 }

 return VAR_3;
}
