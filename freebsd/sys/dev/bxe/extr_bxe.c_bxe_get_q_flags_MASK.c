
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bxe_softc {int ifp; } ;
struct bxe_fastpath {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int VAR_7 ;
 unsigned long FUNC_1 (struct bxe_softc*,struct bxe_fastpath*,int ) ;
 int FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static unsigned long
FUNC_4(struct bxe_softc *VAR_8,
                struct bxe_fastpath *VAR_9,
                uint8_t VAR_10)
{
    unsigned long VAR_11 = 0;

    if (FUNC_0(VAR_8)) {
        FUNC_2(VAR_2, &VAR_11);
    }

    if (FUNC_3(VAR_8->ifp) & VAR_6) {
        FUNC_2(VAR_3, &VAR_11);



    }

    if (VAR_10) {
        FUNC_2(VAR_0, &VAR_11);
        FUNC_2(VAR_1, &VAR_11);
    }

    FUNC_2(VAR_5, &VAR_11);


    return (VAR_11 | FUNC_1(VAR_8, VAR_9, VAR_7));
}
