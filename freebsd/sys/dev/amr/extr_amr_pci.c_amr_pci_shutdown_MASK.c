
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amr_softc {TYPE_1__* amr_drive; int amr_dev; int amr_state; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ al_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct amr_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct amr_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
    struct amr_softc *VAR_3 = FUNC_3(VAR_2);
    int VAR_4,VAR_5;

    FUNC_1(1);


    VAR_3->amr_state |= VAR_1;



    FUNC_4(VAR_3->amr_dev, "flushing cache...");
    FUNC_5("%s\n", FUNC_0(VAR_3) ? "failed" : "done");

    VAR_5 = 0;


    for(VAR_4 = 0 ; VAR_4 < VAR_0; VAR_4++) {
 if( VAR_3->amr_drive[VAR_4].al_disk != 0) {
     if((VAR_5 = FUNC_2(VAR_3->amr_dev,VAR_3->amr_drive[VAR_4].al_disk)) != 0)
  goto shutdown_out;
     VAR_3->amr_drive[VAR_4].al_disk = 0;
 }
    }



shutdown_out:
    return(VAR_5);
}
