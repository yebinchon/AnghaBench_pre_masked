
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_12__ {TYPE_1__* ocs; } ;
typedef TYPE_2__ ocs_node_t ;
struct TYPE_13__ {int payload; int header; } ;
typedef TYPE_3__ ocs_node_cb_t ;
struct TYPE_14__ {int payload; int header; } ;
typedef TYPE_4__ ocs_hw_sequence_t ;
typedef int int32_t ;
typedef int cbdata ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,TYPE_3__*) ;

int32_t
FUNC_3(ocs_node_t *VAR_1, ocs_hw_sequence_t *VAR_2)
{
 ocs_node_cb_t VAR_3;
 ocs_t *VAR_4 = VAR_1->ocs;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.header = VAR_2->header;
 VAR_3.payload = VAR_2->payload;
 FUNC_2(VAR_1, VAR_0, &VAR_3);
 FUNC_0(&VAR_4->hw, VAR_2);
 return 0;
}
