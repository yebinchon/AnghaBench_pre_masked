
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfiscsi_session {int cs_ctl_initid; TYPE_1__* cs_target; } ;
struct TYPE_2__ {int ct_port; } ;


 int FUNC_0 (struct cfiscsi_session*,char*,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(struct cfiscsi_session *VAR_0)
{
 int VAR_1;

 if (VAR_0->cs_ctl_initid == -1)
  return;

 VAR_1 = FUNC_1(&VAR_0->cs_target->ct_port, VAR_0->cs_ctl_initid);
 if (VAR_1 != 0) {
  FUNC_0(VAR_0, "ctl_remove_initiator failed with error %d",
      VAR_1);
 }
 VAR_0->cs_ctl_initid = -1;
}
