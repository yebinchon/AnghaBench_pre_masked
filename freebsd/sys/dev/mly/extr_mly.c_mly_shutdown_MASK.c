
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_softc {int mly_state; int mly_timeout; int mly_periodic; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct mly_softc*) ;
 int FUNC_1 (struct mly_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct mly_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 struct mly_softc* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct mly_softc*) ;
 int FUNC_7 (struct mly_softc*,char*) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
    struct mly_softc *VAR_3 = FUNC_5(VAR_2);

    FUNC_4(1);

    FUNC_0(VAR_3);
    if (VAR_3->mly_state & VAR_1) {
 FUNC_2(VAR_3);
 return(VAR_0);
    }


    FUNC_3(&VAR_3->mly_periodic);





    FUNC_7(VAR_3, "flushing cache...");
    FUNC_8("%s\n", FUNC_6(VAR_3) ? "failed" : "done");

    FUNC_1(VAR_3);
    FUNC_2(VAR_3);

    return(0);
}
