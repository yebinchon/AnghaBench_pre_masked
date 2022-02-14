
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int FUNC_1 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (struct bxe_softc*,int ,int) ;
 int FUNC_4 (struct bxe_softc*) ;

__attribute__((used)) static void
FUNC_5(struct bxe_softc *VAR_4)
{
    uint32_t VAR_5;

    if (!FUNC_1(VAR_4)) {
        VAR_5 = FUNC_2(VAR_4, VAR_2);
        if (VAR_5 & VAR_1) {
            FUNC_0(VAR_4, VAR_0,
                  "Clearing 'was-error' bit that was set in pglueb");
            FUNC_3(VAR_4, VAR_3, 1 << FUNC_4(VAR_4));
        }
    }
}
