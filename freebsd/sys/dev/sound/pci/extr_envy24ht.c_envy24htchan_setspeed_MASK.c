
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_chinfo {int speed; TYPE_1__* parent; } ;
typedef int kobj_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int* VAR_0 ;

__attribute__((used)) static u_int32_t
FUNC_2(kobj_t VAR_1, void *VAR_2, u_int32_t VAR_3)
{
 struct sc_chinfo *VAR_4 = VAR_2;
 u_int32_t VAR_5, VAR_6;
 int VAR_7;




 VAR_6 = 0x7fffffff;
 for (VAR_7 = 0; (VAR_5 = VAR_0[VAR_7]) != 0; VAR_7++) {
  if (FUNC_0(VAR_5 - VAR_3) < FUNC_0(VAR_6 - VAR_3))
   VAR_6 = VAR_5;
  else
   break;
 }
 VAR_4->speed = VAR_6;




 return VAR_4->speed;
}
