
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp_targ_softc {int sim; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_2)
{
 struct sbp_targ_softc *VAR_3;

 VAR_3 = (struct sbp_targ_softc *)VAR_2;
 VAR_3->flags &= ~VAR_0;
 FUNC_0(VAR_3->sim, VAR_1);
 return;
}
