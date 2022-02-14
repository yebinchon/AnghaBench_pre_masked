
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bxe_softc {int sp_state; } ;


 int FUNC_0 (struct bxe_softc*,char*,unsigned long,unsigned long) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static inline uint8_t
FUNC_4(struct bxe_softc *VAR_2,
                 unsigned long VAR_3)
{
    unsigned long VAR_4;
    int VAR_5 = 5000;

    while (VAR_5--) {
        FUNC_3();
        if (!(FUNC_2(&VAR_2->sp_state) & VAR_3)) {
            return (VAR_1);
        }

        FUNC_1(1000);
    }

    FUNC_3();

    VAR_4 = FUNC_2(&VAR_2->sp_state);
    if (VAR_4 & VAR_3) {
        FUNC_0(VAR_2, "Filtering completion timed out: "
                  "sp_state 0x%lx, mask 0x%lx\n",
              VAR_4, VAR_3);
        return (VAR_0);
    }

    return (VAR_0);
}
