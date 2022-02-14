
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hi; scalar_t__ lo; } ;
typedef TYPE_1__ ntpcal_split ;
typedef int int32_t ;


 size_t FUNC_0 (int) ;
 TYPE_1__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__** VAR_0 ;

int32_t
FUNC_3(
 int32_t VAR_1,
 int32_t VAR_2,
 int32_t VAR_3
 )
{
 ntpcal_split VAR_4;

 if (0 <= VAR_2 && VAR_2 < 12) {
  VAR_1 += 1;
  VAR_3 += VAR_0[FUNC_0(VAR_1)][VAR_2];
 } else {
  VAR_4 = FUNC_1(VAR_2);
  VAR_3 += VAR_4.lo
         + FUNC_2(VAR_1 + VAR_4.hi)
         - FUNC_2(VAR_1);
 }

 return VAR_3;
}
