
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdev {scalar_t__ si_drv1; } ;
struct amr_softc {TYPE_1__* amr_drive; int amr_dev; int amr_state; scalar_t__ amr_busyslots; } ;
struct TYPE_2__ {scalar_t__ al_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amr_softc*) ;
 scalar_t__ FUNC_1 (struct amr_softc*) ;
 int FUNC_2 (struct amr_softc*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(struct cdev *VAR_3)
{
    struct amr_softc *VAR_4 = (struct amr_softc *)VAR_3->si_drv1;
    int VAR_5, VAR_6 = 0;

    VAR_4->amr_state |= VAR_1;
    while (VAR_4->amr_busyslots) {
 FUNC_4(VAR_4->amr_dev, "idle controller\n");
 FUNC_0(VAR_4);
    }


    VAR_4->amr_state |= VAR_2;


    FUNC_4(VAR_4->amr_dev, "flushing cache...");
    FUNC_5("%s\n", FUNC_1(VAR_4) ? "failed" : "done");


    for(VAR_5 = 0 ; VAR_5 < VAR_0; VAR_5++) {
 if(VAR_4->amr_drive[VAR_5].al_disk != 0) {
     if((VAR_6 = FUNC_3(VAR_4->amr_dev,
  VAR_4->amr_drive[VAR_5].al_disk)) != 0)
  goto shutdown_out;

      VAR_4->amr_drive[VAR_5].al_disk = 0;
 }
    }

shutdown_out:
    FUNC_2(VAR_4);
}
