
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_rchinfo {TYPE_1__* slot; struct sc_info* parent; } ;
struct sc_info {size_t currbank; } ;
typedef int kobj_t ;
struct TYPE_2__ {int PgStart; } ;



__attribute__((used)) static u_int32_t
FUNC_0(kobj_t VAR_0, void *VAR_1)
{
 struct sc_rchinfo *VAR_2 = VAR_1;
 struct sc_info *VAR_3 = VAR_2->parent;

 return VAR_2->slot[VAR_3->currbank].PgStart;
}
