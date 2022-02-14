
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bxe_softc*,int ) ;

__attribute__((used)) static uint8_t
FUNC_2(struct bxe_softc *VAR_6,
                    int VAR_7)
{
    uint32_t VAR_8 = VAR_7 ? VAR_2 :
                             VAR_0;
    uint32_t VAR_9 = VAR_7 ? VAR_3 :
                              VAR_1;
    uint32_t VAR_10 = FUNC_1(VAR_6, VAR_4);

    FUNC_0(VAR_6, VAR_5, "Old value for GLOB_REG=0x%08x\n", VAR_10);

    VAR_10 = ((VAR_10 & VAR_8) >> VAR_9);

    FUNC_0(VAR_6, VAR_5, "Load mask engine %d = 0x%08x\n", VAR_7, VAR_10);

    return (VAR_10 != 0);
}
