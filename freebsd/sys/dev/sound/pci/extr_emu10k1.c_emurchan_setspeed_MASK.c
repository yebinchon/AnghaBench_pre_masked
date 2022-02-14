
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_rchinfo {int num; int spd; TYPE_1__* parent; } ;
typedef int kobj_t ;
struct TYPE_2__ {scalar_t__ audigy; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static u_int32_t
FUNC_2(kobj_t VAR_2, void *VAR_3, u_int32_t VAR_4)
{
 struct sc_rchinfo *VAR_5 = VAR_3;

 if (VAR_5->num == 0) {
  if (VAR_5->parent->audigy)
   VAR_4 = VAR_1[FUNC_0(VAR_4)];
  else
   VAR_4 = VAR_0[FUNC_1(VAR_4)];
 }
 if (VAR_5->num == 1)
  VAR_4 = 48000;
 if (VAR_5->num == 2)
  VAR_4 = 8000;
 VAR_5->spd = VAR_4;
 return VAR_5->spd;
}
