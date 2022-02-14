
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_2__ {scalar_t__ dev; scalar_t__ subdev; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_0(u_int32_t VAR_1, u_int32_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3].dev; VAR_3++) {
  if (VAR_0[VAR_3].dev == VAR_1 &&
      (VAR_0[VAR_3].subdev == VAR_2 || VAR_0[VAR_3].subdev == 0))
   return VAR_3;
 }
 return -1;
}
