
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline uint16_t
FUNC_1(struct bxe_softc *VAR_3,
                    uint32_t VAR_4)
{
    uint16_t VAR_5 = ((VAR_4 & VAR_1) >>
                        VAR_2);

    if (!VAR_5) {
        FUNC_0(VAR_3, VAR_0, "Max BW configured to 0 - using 100 instead\n");
        VAR_5 = 100;
    }

    return (VAR_5);
}
