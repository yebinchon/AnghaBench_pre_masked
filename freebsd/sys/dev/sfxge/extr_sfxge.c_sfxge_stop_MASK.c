
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfxge_softc {scalar_t__ init_state; TYPE_1__* ifnet; int enp; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct sfxge_softc*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sfxge_softc*) ;
 int FUNC_3 (struct sfxge_softc*) ;
 int FUNC_4 (struct sfxge_softc*) ;
 int FUNC_5 (struct sfxge_softc*) ;
 int FUNC_6 (struct sfxge_softc*) ;

__attribute__((used)) static void
FUNC_7(struct sfxge_softc *VAR_3)
{
 FUNC_0(VAR_3);

 if (VAR_3->init_state != VAR_2)
  return;

 VAR_3->init_state = VAR_1;


 FUNC_6(VAR_3);


 FUNC_5(VAR_3);


 FUNC_4(VAR_3);


 FUNC_2(VAR_3);


 FUNC_3(VAR_3);

 FUNC_1(VAR_3->enp);

 VAR_3->ifnet->if_drv_flags &= ~VAR_0;
}
