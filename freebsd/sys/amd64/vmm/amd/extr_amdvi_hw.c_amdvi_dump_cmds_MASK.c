
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct amdvi_softc {int cmd_max; scalar_t__ cmd; int dev; struct amdvi_ctrl* ctrl; } ;
struct amdvi_ctrl {int cmd_tail; int cmd_head; } ;
struct amdvi_cmd {int opcode; int word0; int word1; int addr; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,int,int,int,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct amdvi_softc *VAR_0)
{
 struct amdvi_ctrl *VAR_1;
 struct amdvi_cmd *VAR_2;
 int VAR_3, VAR_4;

 VAR_1 = VAR_0->ctrl;
 FUNC_1(VAR_0->dev, "Dump all the commands:\n");




 VAR_3 = FUNC_0(VAR_1->cmd_head, sizeof(struct amdvi_cmd),
     VAR_0->cmd_max);
 for (VAR_4 = 0; VAR_3 != VAR_1->cmd_tail &&
     VAR_4 < VAR_0->cmd_max; VAR_4++) {
  VAR_2 = (struct amdvi_cmd *)((uint8_t *)VAR_0->cmd + VAR_3);
  FUNC_2("  [CMD%d, off:0x%x] opcode= 0x%x 0x%x"
      " 0x%x 0x%lx\n", VAR_4, VAR_3, VAR_2->opcode,
      VAR_2->word0, VAR_2->word1, VAR_2->addr);
  VAR_3 = (VAR_3 + sizeof(struct amdvi_cmd)) %
      (VAR_0->cmd_max * sizeof(struct amdvi_cmd));
 }
}
