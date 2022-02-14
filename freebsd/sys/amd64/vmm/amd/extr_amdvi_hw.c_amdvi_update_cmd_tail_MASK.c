
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdvi_softc {int dev; int total_cmd; int cmd_max; struct amdvi_ctrl* ctrl; int * cmd; } ;
struct amdvi_ctrl {int cmd_head; int cmd_tail; } ;
struct amdvi_cmd {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct amdvi_softc *VAR_0)
{
 struct amdvi_ctrl *VAR_1;
 int VAR_2;

 VAR_2 = sizeof(struct amdvi_cmd);
 FUNC_0(VAR_0->cmd != ((void*)0), ("cmd is NULL"));

 VAR_1 = VAR_0->ctrl;
 FUNC_0(VAR_1 != ((void*)0), ("ctrl is NULL"));

 VAR_1->cmd_tail = FUNC_1(VAR_1->cmd_tail, VAR_2, VAR_0->cmd_max);
 VAR_0->total_cmd++;







}
