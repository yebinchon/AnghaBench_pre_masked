
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ocs_t ;
struct TYPE_5__ {scalar_t__ send_ls_acc; TYPE_3__* ls_acc_io; int ls_acc_oxid; int display_name; int * ocs; } ;
typedef TYPE_1__ ocs_node_t ;
struct TYPE_6__ {int * hio; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,char*,int ,int ) ;

void
FUNC_3(ocs_node_t *VAR_1)
{
 ocs_t *VAR_2 = VAR_1->ocs;

 if (VAR_1->send_ls_acc != VAR_0) {
  FUNC_0(VAR_1->ls_acc_io);
  FUNC_2(VAR_2, "[%s] cleaning up LS_ACC oxid=0x%x\n",
   VAR_1->display_name, VAR_1->ls_acc_oxid);

  VAR_1->ls_acc_io->hio = ((void*)0);
  FUNC_1(VAR_1->ls_acc_io);
  VAR_1->send_ls_acc = VAR_0;
  VAR_1->ls_acc_io = ((void*)0);
 }
}
