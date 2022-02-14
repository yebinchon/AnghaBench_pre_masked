
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 scalar_t__ FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*) ;

__attribute__((used)) static int
FUNC_5(struct bxe_softc *VAR_3)
{
    int VAR_4;

    FUNC_0(VAR_3, VAR_1, "Uncommon unload Flow\n");


    if (FUNC_3(VAR_3)) {
        return (FUNC_4(VAR_3));
    }

    FUNC_0(VAR_3, VAR_1, "Path is unmarked\n");






    VAR_4 = FUNC_2(VAR_3, VAR_2);
    if (!VAR_4) {

        FUNC_0(VAR_3, VAR_1, "FW version matches our own, attempting FLR\n");
        VAR_4 = FUNC_1(VAR_3);
    }

    if (!VAR_4) {

        FUNC_0(VAR_3, VAR_1, "FLR successful\n");
        return (0);
    }

    FUNC_0(VAR_3, VAR_1, "Could not FLR\n");


    VAR_4 = FUNC_4(VAR_3);
    if (!VAR_4) {
        VAR_4 = VAR_0;
    }

    return (VAR_4);
}
