
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lo; scalar_t__ hi; } ;
typedef TYPE_1__ ntpcal_split ;
typedef scalar_t__ int32_t ;


 TYPE_1__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int32_t
FUNC_2(
 int32_t VAR_0,
 int32_t VAR_1,
 int32_t VAR_2
 )
{
 ntpcal_split VAR_3;
 int32_t VAR_4;

 if (VAR_1) {
  VAR_3 = FUNC_0(VAR_1);
  VAR_4 = FUNC_1(VAR_0 + VAR_3.hi) + VAR_3.lo;
 } else
  VAR_4 = FUNC_1(VAR_0);
 VAR_4 += VAR_2;

 return VAR_4;
}
