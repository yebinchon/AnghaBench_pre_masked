
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (int,int) ;

uint32_t
FUNC_3(struct bxe_softc *VAR_12,
                uint8_t VAR_13,
                uint8_t VAR_14,
                uint8_t VAR_15,
                uint8_t VAR_16)
{
    uint32_t VAR_17 = 0;

    VAR_17 |= ((VAR_13 << VAR_10) |
               (VAR_14 << VAR_1));

    VAR_17 |= (VAR_9 | VAR_0);

    VAR_17 |= (FUNC_0(VAR_12) ? VAR_8 : VAR_7);

    VAR_17 |= ((FUNC_1(VAR_12) << VAR_3) |
               (FUNC_1(VAR_12) << VAR_2));

    VAR_17 |= (VAR_11 << VAR_6);




    VAR_17 |= VAR_5;


    if (VAR_15) {
        VAR_17 = FUNC_2(VAR_17, VAR_16);
    }

    return (VAR_17);
}
