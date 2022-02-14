
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* elements; int pool_data; int (* free ) (void*,int ) ;scalar_t__ curr_nr; } ;
typedef TYPE_1__ mempool_t ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (void*,int ) ;

__attribute__((used)) static void FUNC_3(mempool_t *VAR_0)
{
 while (VAR_0->curr_nr) {
  void *VAR_1 = FUNC_1(VAR_0);
  VAR_0->free(VAR_1, VAR_0->pool_data);
 }
 FUNC_0(VAR_0->elements);
 FUNC_0(VAR_0);
}
