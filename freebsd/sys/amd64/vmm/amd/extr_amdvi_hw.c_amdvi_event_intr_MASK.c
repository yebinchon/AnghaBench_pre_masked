
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdvi_softc {int total_cmd; int event_intr_cnt; int dev; struct amdvi_ctrl* ctrl; } ;
struct amdvi_ctrl {int status; int cmd_head; int cmd_tail; int evt_tail; int evt_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdvi_softc*) ;
 int FUNC_1 (int ,char*,int ,int,int ,int ) ;
 int FUNC_2 (char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 struct amdvi_softc *VAR_3;
 struct amdvi_ctrl *VAR_4;

 VAR_3 = (struct amdvi_softc *)VAR_2;
 VAR_4 = VAR_3->ctrl;
 FUNC_1(VAR_3->dev, "EVT INTR %ld Status:0x%x"
     " EVT Head:0x%x Tail:0x%x]\n", VAR_3->event_intr_cnt++,
     VAR_4->status, VAR_4->evt_head, VAR_4->evt_tail);
 FUNC_2("  [CMD Total 0x%lx] Tail:0x%x, Head:0x%x.\n",
     VAR_3->total_cmd, VAR_4->cmd_tail, VAR_4->cmd_head);

 FUNC_0(VAR_3);
 VAR_4->status &= VAR_1 | VAR_0;
}
