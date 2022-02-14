
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int ifp; int chip_tq_flags; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;

 int VAR_0 ;
 int VAR_1 ;
 long FUNC_3 (int *) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2,
                   int VAR_3)
{
    struct bxe_softc *VAR_4 = (struct bxe_softc *)VAR_2;
    long VAR_5 = FUNC_3(&VAR_4->chip_tq_flags);

    switch (VAR_5)
    {

    case 128:
        if (FUNC_7(VAR_4->ifp) & VAR_1) {

            FUNC_0(VAR_4, VAR_0, "Restarting the interface...\n");
            FUNC_5(VAR_4);
            FUNC_1(VAR_4);
            FUNC_6(VAR_4);
            FUNC_4(VAR_4);
            FUNC_2(VAR_4);
        }
        break;

    default:
        break;
    }
}
