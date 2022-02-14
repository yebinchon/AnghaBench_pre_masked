
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int wq_reqtag_pool; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_7__ {int * arg; int * callback; scalar_t__ instance_index; } ;
typedef TYPE_2__ hw_wq_callback_t ;


 int * FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,TYPE_2__*) ;

void
FUNC_3(ocs_hw_t *VAR_0)
{
 hw_wq_callback_t *VAR_1;
 uint32_t VAR_2;


 while(FUNC_0(VAR_0->wq_reqtag_pool) != ((void*)0)) {
  ;
 }


 for (VAR_2 = 0; ((VAR_1 = FUNC_1(VAR_0->wq_reqtag_pool, VAR_2)) != ((void*)0)); VAR_2++) {
  VAR_1->instance_index = VAR_2;
  VAR_1->callback = ((void*)0);
  VAR_1->arg = ((void*)0);
  FUNC_2(VAR_0->wq_reqtag_pool, VAR_1);
 }
}
