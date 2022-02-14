
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {scalar_t__ state; } ;
typedef int device_t ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bxe_softc*,int ,int ) ;
 int FUNC_4 (struct bxe_softc*) ;
 struct bxe_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
    struct bxe_softc *VAR_5;

    VAR_5 = FUNC_5(VAR_4);

    FUNC_0(VAR_5, VAR_1, "Starting shutdown...\n");


    FUNC_4(VAR_5);

    if (VAR_5->state != VAR_0) {
     FUNC_1(VAR_5);
     FUNC_3(VAR_5, VAR_3, VAR_2);
     FUNC_2(VAR_5);
    }

    return (0);
}
