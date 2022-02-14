
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index; int* tid; } ;
struct TYPE_5__ {TYPE_1__ tid_pool; } ;
typedef TYPE_2__ pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

int FUNC_1(pqisrc_softstate_t *VAR_1)
{
 if(VAR_1->tid_pool.index <= -1) {
  FUNC_0("Target ID exhausted\n");
  return VAR_0;
 }

 return VAR_1->tid_pool.tid[VAR_1->tid_pool.index--];
}
