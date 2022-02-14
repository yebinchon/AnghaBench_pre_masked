
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bxe_softc*,int ,int ) ;
 int FUNC_2 (struct bxe_softc*) ;

__attribute__((used)) static uint32_t
FUNC_3(struct bxe_softc *VAR_2,
                    int VAR_3)
{
    uint32_t VAR_4 = 0;


    if (VAR_3 == VAR_1) {
        VAR_4 = VAR_0;
    } else {
        VAR_4 = VAR_0;
    }


    if (!FUNC_0(VAR_2)) {
        VAR_4 = FUNC_1(VAR_2, VAR_4, 0);
    } else {
        VAR_4 = FUNC_2(VAR_2);
    }

    return (VAR_4);
}
