
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* num_elem; } ;
struct TYPE_5__ {void* num_elem; } ;
struct TYPE_7__ {TYPE_2__ admin_ob_queue; TYPE_1__ admin_ib_queue; } ;
typedef TYPE_3__ pqisrc_softstate_t ;


 void* FUNC_0 (void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(pqisrc_softstate_t *VAR_2)
{

 VAR_2->admin_ib_queue.num_elem = FUNC_0(VAR_2->admin_ib_queue.num_elem,
     VAR_0);


 VAR_2->admin_ob_queue.num_elem = FUNC_0(VAR_2->admin_ob_queue.num_elem,
     VAR_1);
}
