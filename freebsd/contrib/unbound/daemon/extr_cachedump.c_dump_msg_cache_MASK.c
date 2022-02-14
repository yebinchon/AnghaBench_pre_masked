
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct slabhash* msg_cache; } ;
struct worker {TYPE_1__ env; } ;
struct slabhash {size_t size; TYPE_2__** array; } ;
struct TYPE_4__ {int lock; } ;
typedef int RES ;


 int FUNC_0 (int *,struct worker*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int
FUNC_4(RES* VAR_0, struct worker* VAR_1)
{
 struct slabhash* VAR_2 = VAR_1->env.msg_cache;
 size_t VAR_3;
 if(!FUNC_3(VAR_0, "START_MSG_CACHE\n")) return 0;
 for(VAR_3=0; VAR_3<VAR_2->size; VAR_3++) {
  FUNC_1(&VAR_2->array[VAR_3]->lock);
  if(!FUNC_0(VAR_0, VAR_1, VAR_2->array[VAR_3])) {
   FUNC_2(&VAR_2->array[VAR_3]->lock);
   return 0;
  }
  FUNC_2(&VAR_2->array[VAR_3]->lock);
 }
 return FUNC_3(VAR_0, "END_MSG_CACHE\n");
}
