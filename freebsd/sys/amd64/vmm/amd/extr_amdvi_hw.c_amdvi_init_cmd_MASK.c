
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdvi_softc {int cmd_max; scalar_t__ cmd; struct amdvi_ctrl* ctrl; } ;
struct TYPE_2__ {int len; int base; } ;
struct amdvi_ctrl {scalar_t__ cmd_head; scalar_t__ cmd_tail; TYPE_1__ cmd; } ;
struct amdvi_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct amdvi_softc *VAR_5)
{
 struct amdvi_ctrl *VAR_6 = VAR_5->ctrl;

 VAR_6->cmd.len = 8;
 VAR_5->cmd_max = 1 << VAR_6->cmd.len;

 VAR_5->cmd = FUNC_0(sizeof(struct amdvi_cmd) *
     VAR_5->cmd_max, VAR_0, VAR_1 | VAR_2);

 if ((uintptr_t)VAR_5->cmd & VAR_3)
  FUNC_1("AMDVi: Command buffer not aligned on page boundary.");

 VAR_6->cmd.base = FUNC_2(VAR_5->cmd) / VAR_4;




 VAR_6->cmd_tail = 0;
 VAR_6->cmd_head = 0;

 return (0);
}
