
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ send_ls_acc; int ls_acc_did; TYPE_2__* ls_acc_io; int ls_acc_oxid; } ;
typedef TYPE_1__ ocs_node_t ;
typedef scalar_t__ ocs_node_send_ls_acc_e ;
struct TYPE_7__ {TYPE_1__* node; } ;
typedef TYPE_2__ ocs_io_t ;
struct TYPE_8__ {int d_id; int ox_id; } ;
typedef TYPE_3__ fc_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

void
FUNC_3(ocs_io_t *VAR_1, fc_header_t *VAR_2, ocs_node_send_ls_acc_e VAR_3)
{
 ocs_node_t *VAR_4 = VAR_1->node;
 uint16_t VAR_5 = FUNC_2(VAR_2->ox_id);

 FUNC_1(VAR_4->send_ls_acc == VAR_0);

 VAR_4->ls_acc_oxid = VAR_5;
 VAR_4->send_ls_acc = VAR_3;
 VAR_4->ls_acc_io = VAR_1;
 VAR_4->ls_acc_did = FUNC_0(VAR_2->d_id);
}
