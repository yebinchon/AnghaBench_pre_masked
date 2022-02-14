
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfxge_softc {scalar_t__ init_state; int dev; int enp; TYPE_1__* ifnet; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sfxge_softc*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sfxge_softc*) ;
 int FUNC_5 (struct sfxge_softc*) ;
 int FUNC_6 (struct sfxge_softc*) ;
 int FUNC_7 (struct sfxge_softc*) ;
 int FUNC_8 (struct sfxge_softc*) ;
 int FUNC_9 (struct sfxge_softc*) ;
 int FUNC_10 (struct sfxge_softc*) ;
 int FUNC_11 (struct sfxge_softc*) ;
 int FUNC_12 (struct sfxge_softc*) ;
 int FUNC_13 (struct sfxge_softc*) ;

__attribute__((used)) static int
FUNC_14(struct sfxge_softc *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_5);

 if (VAR_5->init_state == VAR_4)
  return (0);

 if (VAR_5->init_state != VAR_3) {
  VAR_6 = VAR_0;
  goto fail;
 }


 if ((VAR_6 = FUNC_12(VAR_5)) != 0)
  goto fail;

 if ((VAR_6 = FUNC_3(VAR_5->enp)) != 0)
  goto fail;


 if ((VAR_6 = FUNC_6(VAR_5)) != 0)
  goto fail2;


 if ((VAR_6 = FUNC_4(VAR_5)) != 0)
  goto fail3;


 if ((VAR_6 = FUNC_8(VAR_5)) != 0)
  goto fail4;


 if ((VAR_6 = FUNC_10(VAR_5)) != 0)
  goto fail5;


 if ((VAR_6 = FUNC_13(VAR_5)) != 0)
  goto fail6;

 VAR_5->init_state = VAR_4;


 VAR_5->ifnet->if_drv_flags |= VAR_2;
 VAR_5->ifnet->if_drv_flags &= ~VAR_1;

 return (0);

fail6:
 FUNC_11(VAR_5);

fail5:
 FUNC_9(VAR_5);

fail4:
 FUNC_5(VAR_5);

fail3:
 FUNC_7(VAR_5);

fail2:
 FUNC_2(VAR_5->enp);

fail:
 FUNC_1(VAR_5->dev, "sfxge_start: %d\n", VAR_6);

 return (VAR_6);
}
