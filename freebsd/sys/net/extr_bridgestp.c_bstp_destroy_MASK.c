
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstp_port {scalar_t__ bp_active; TYPE_1__* bp_bs; int bp_mediatask; int bp_rtagetask; int bp_statetask; } ;
struct TYPE_2__ {struct bstp_port* bs_root_port; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;

void
FUNC_3(struct bstp_port *VAR_1)
{
 FUNC_0(VAR_1->bp_active == 0, ("port is still attached"));
 FUNC_2(VAR_0, &VAR_1->bp_statetask);
 FUNC_2(VAR_0, &VAR_1->bp_rtagetask);
 FUNC_2(VAR_0, &VAR_1->bp_mediatask);

 if (VAR_1->bp_bs->bs_root_port == VAR_1)
  FUNC_1(VAR_1->bp_bs);
}
