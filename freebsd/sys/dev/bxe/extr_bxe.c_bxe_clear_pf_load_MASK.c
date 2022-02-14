
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 int FUNC_2 (struct bxe_softc*,int ,int) ;
 int FUNC_3 (struct bxe_softc*) ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*,int ) ;
 int FUNC_6 (struct bxe_softc*,int ) ;

__attribute__((used)) static uint8_t
FUNC_7(struct bxe_softc *VAR_7)
{
    uint32_t VAR_8, VAR_9;
    uint32_t VAR_10 = FUNC_4(VAR_7) ? VAR_2 :
                                  VAR_0;
    uint32_t VAR_11 = FUNC_4(VAR_7) ? VAR_3 :
                                   VAR_1;

    FUNC_5(VAR_7, VAR_6);
    VAR_9 = FUNC_1(VAR_7, VAR_4);
    FUNC_0(VAR_7, VAR_5, "Old GEN_REG_VAL=0x%08x\n", VAR_9);


    VAR_8 = (VAR_9 & VAR_10) >> VAR_11;


    VAR_8 &= ~(1 << FUNC_3(VAR_7));


    VAR_9 &= ~VAR_10;


    VAR_9 |= ((VAR_8 << VAR_11) & VAR_10);

    FUNC_2(VAR_7, VAR_4, VAR_9);
    FUNC_6(VAR_7, VAR_6);
    return (VAR_8 != 0);
}
