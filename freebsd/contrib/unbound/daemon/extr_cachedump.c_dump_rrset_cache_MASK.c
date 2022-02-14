
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * now; struct rrset_cache* rrset_cache; } ;
struct worker {TYPE_1__ env; } ;
struct TYPE_5__ {size_t size; TYPE_3__** array; } ;
struct rrset_cache {TYPE_2__ table; } ;
struct TYPE_6__ {int lock; } ;
typedef int RES ;


 int FUNC_0 (int *,TYPE_3__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int
FUNC_4(RES* VAR_0, struct worker* VAR_1)
{
 struct rrset_cache* VAR_2 = VAR_1->env.rrset_cache;
 size_t VAR_3;
 if(!FUNC_3(VAR_0, "START_RRSET_CACHE\n")) return 0;
 for(VAR_3=0; VAR_3<VAR_2->table.size; VAR_3++) {
  FUNC_1(&VAR_2->table.array[VAR_3]->lock);
  if(!FUNC_0(VAR_0, VAR_2->table.array[VAR_3],
   *VAR_1->env.now)) {
   FUNC_2(&VAR_2->table.array[VAR_3]->lock);
   return 0;
  }
  FUNC_2(&VAR_2->table.array[VAR_3]->lock);
 }
 return FUNC_3(VAR_0, "END_RRSET_CACHE\n");
}
