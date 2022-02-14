
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int iro_array; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;

__attribute__((used)) static int
FUNC_7(struct bxe_softc *VAR_3)
{
    if (FUNC_1(VAR_3)) {
        FUNC_4(VAR_3);
        VAR_3->iro_array = VAR_0;
    } else if (FUNC_2(VAR_3)) {
        FUNC_5(VAR_3);
        VAR_3->iro_array = VAR_1;
    } else if (!FUNC_3(VAR_3)) {
        FUNC_6(VAR_3);
        VAR_3->iro_array = VAR_2;
    } else {
        FUNC_0(VAR_3, "Unsupported chip revision\n");
        return (-1);
    }

    return (0);
}
