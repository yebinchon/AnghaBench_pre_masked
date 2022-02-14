
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_dev; int amr_state; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct amr_softc*) ;
 int FUNC_1 (int) ;
 struct amr_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
    struct amr_softc *VAR_2 = FUNC_2(VAR_1);

    FUNC_1(1);

    VAR_2->amr_state |= VAR_0;


    FUNC_3(VAR_2->amr_dev, "flushing cache...");
    FUNC_4("%s\n", FUNC_0(VAR_2) ? "failed" : "done");



    return(0);
}
