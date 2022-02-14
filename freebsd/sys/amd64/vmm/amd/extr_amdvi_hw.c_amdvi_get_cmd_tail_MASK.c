
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct amdvi_softc {int * cmd; struct amdvi_ctrl* ctrl; } ;
struct amdvi_ctrl {int cmd_tail; } ;
struct amdvi_cmd {int dummy; } ;


 int FUNC_0 (struct amdvi_softc*,char*) ;

__attribute__((used)) static struct amdvi_cmd *
FUNC_1(struct amdvi_softc *VAR_0)
{
 struct amdvi_ctrl *VAR_1;
 struct amdvi_cmd *VAR_2;

 FUNC_0(VAR_0, ("softc is NULL"));
 FUNC_0(VAR_0->cmd != ((void*)0), ("cmd is NULL"));

 VAR_1 = VAR_0->ctrl;
 FUNC_0(VAR_1 != ((void*)0), ("ctrl is NULL"));

 VAR_2 = (struct amdvi_cmd *)((uint8_t *)VAR_0->cmd +
     VAR_1->cmd_tail);

 return (VAR_2);
}
