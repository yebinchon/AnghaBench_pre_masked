
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdvi_softc {struct amdvi_ctrl* ctrl; } ;
struct TYPE_2__ {int base; int size; } ;
struct amdvi_ctrl {TYPE_1__ dte; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct amdvi_softc *VAR_2)
{
 struct amdvi_ctrl *VAR_3;

 VAR_3 = VAR_2->ctrl;
 VAR_3->dte.base = FUNC_0(VAR_1) / VAR_0;
 VAR_3->dte.size = 0x1FF;

 return (0);
}
