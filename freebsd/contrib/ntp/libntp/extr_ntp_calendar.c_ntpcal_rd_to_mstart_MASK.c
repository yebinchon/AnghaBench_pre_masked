
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lo; } ;
typedef TYPE_1__ ntpcal_split ;
typedef scalar_t__ int32_t ;


 TYPE_1__ FUNC_0 (scalar_t__,int*) ;
 TYPE_1__ FUNC_1 (scalar_t__,int) ;

int32_t
FUNC_2(
 int32_t VAR_0
 )
{
 ntpcal_split VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0 - 1, &VAR_2);
 VAR_1 = FUNC_1(VAR_1.lo, VAR_2);

 return VAR_0 - VAR_1.lo;
}
