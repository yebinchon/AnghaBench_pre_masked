
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdvi_softc {scalar_t__ control; struct amdvi_softc* ctrl; } ;
struct amdvi_ctrl {scalar_t__ control; struct amdvi_ctrl* ctrl; } ;


 int FUNC_0 (struct amdvi_softc*,char*) ;
 struct amdvi_softc* FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct amdvi_ctrl *VAR_2;
 struct amdvi_softc *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = FUNC_1(VAR_1[VAR_4]);
  FUNC_0(VAR_3, ("softc is NULL\n"));
  VAR_2 = VAR_3->ctrl;
  FUNC_0(VAR_2, ("ctrl is NULL\n"));

  VAR_2->control = 0;
 }
}
