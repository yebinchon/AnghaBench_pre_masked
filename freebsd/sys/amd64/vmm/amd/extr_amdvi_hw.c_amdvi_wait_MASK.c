
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdvi_softc {int dev; struct amdvi_ctrl* ctrl; } ;
struct amdvi_ctrl {int control; int cmd_head; int cmd_tail; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdvi_softc*,char*) ;
 scalar_t__ FUNC_1 (struct amdvi_softc*) ;
 int FUNC_2 (struct amdvi_softc*) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct amdvi_softc *VAR_1)
{
 struct amdvi_ctrl *VAR_2;
 int VAR_3;

 FUNC_0(VAR_1, ("softc is NULL"));

 VAR_2 = VAR_1->ctrl;
 FUNC_0(VAR_2 != ((void*)0), ("ctrl is NULL"));

 if ((VAR_2->control & VAR_0) == 0)
  return;

 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  if (FUNC_1(VAR_1))
   return;
 }

 FUNC_3(VAR_1->dev, "Error: completion failed"
        " tail:0x%x, head:0x%x.\n",
        VAR_2->cmd_tail, VAR_2->cmd_head);
 FUNC_2(VAR_1);
}
