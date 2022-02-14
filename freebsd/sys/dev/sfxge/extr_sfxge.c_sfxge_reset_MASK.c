
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {scalar_t__ init_state; int dev; int enp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sfxge_softc*) ;
 int FUNC_2 (struct sfxge_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 unsigned int VAR_1 ;
 int FUNC_5 (struct sfxge_softc*) ;
 int FUNC_6 (struct sfxge_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2, int VAR_3)
{
 struct sfxge_softc *VAR_4;
 int VAR_5;
 unsigned VAR_6;

 (void)VAR_3;

 VAR_4 = (struct sfxge_softc *)VAR_2;

 FUNC_1(VAR_4);

 if (VAR_4->init_state != VAR_0)
  goto done;

 FUNC_6(VAR_4);
 FUNC_4(VAR_4->enp);
 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  if ((VAR_5 = FUNC_5(VAR_4)) == 0)
   goto done;

  FUNC_3(VAR_4->dev, "start on reset failed (%d)\n", VAR_5);
  FUNC_0(100000);
 }

 FUNC_3(VAR_4->dev, "reset failed; interface is now stopped\n");

done:
 FUNC_2(VAR_4);
}
