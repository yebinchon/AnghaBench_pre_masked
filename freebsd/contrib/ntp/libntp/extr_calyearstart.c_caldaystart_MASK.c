
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vint64 ;
typedef scalar_t__ u_int32 ;
typedef int time_t ;
struct TYPE_3__ {scalar_t__ lo; } ;
typedef TYPE_1__ ntpcal_split ;


 TYPE_1__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int const*) ;

u_int32
FUNC_2(u_int32 VAR_0, const time_t *VAR_1)
{
 vint64 VAR_2;
 ntpcal_split VAR_3;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 VAR_3 = FUNC_0(&VAR_2);

 return VAR_0 - VAR_3.lo;
}
