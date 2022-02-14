
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int num_elem; int elem_size; } ;
struct TYPE_8__ {int num_elem; int elem_size; } ;
struct TYPE_10__ {TYPE_3__ admin_ib_queue; TYPE_2__ admin_ob_queue; TYPE_1__* pqi_reg; } ;
typedef TYPE_4__ pqisrc_softstate_t ;
struct TYPE_7__ {int pqi_dev_adminq_cap; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int *,int ) ;
 int VAR_0 ;

void FUNC_3(pqisrc_softstate_t *VAR_1)
{
 uint64_t VAR_2 = 0;


 VAR_2 = FUNC_1(FUNC_2(VAR_1, &VAR_1->pqi_reg->pqi_dev_adminq_cap, VAR_0));


 VAR_1->admin_ib_queue.num_elem = VAR_2 & 0xFF;
 VAR_1->admin_ob_queue.num_elem = (VAR_2 & 0xFF00) >> 8;

 VAR_1->admin_ib_queue.elem_size = ((VAR_2 & 0xFF0000) >> 16) * 16;
 VAR_1->admin_ob_queue.elem_size = ((VAR_2 & 0xFF000000) >> 24) * 16;

 FUNC_0(" softs->admin_ib_queue.num_elem : %d\n",
   VAR_1->admin_ib_queue.num_elem);
 FUNC_0(" softs->admin_ib_queue.elem_size : %d\n",
   VAR_1->admin_ib_queue.elem_size);
}
