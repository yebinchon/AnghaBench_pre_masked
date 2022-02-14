
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int,int,int) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int FUNC_4 (struct bxe_softc*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct bxe_softc *VAR_7,
                     uint32_t VAR_8,
                     uint32_t *VAR_9,
                     uint32_t VAR_10)
{
    int VAR_11, VAR_12, VAR_13;
    uint32_t VAR_14;


    VAR_10 |= VAR_1;


    FUNC_4(VAR_7, VAR_4, VAR_2);


    FUNC_4(VAR_7, VAR_3,
           (VAR_8 & VAR_0));


    FUNC_4(VAR_7, VAR_4, VAR_10);


    VAR_11 = VAR_6;
    if (FUNC_1(VAR_7)) {
        VAR_11 *= 100;
    }


    *VAR_9 = 0;
    VAR_13 = -1;
    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
        FUNC_2(5);
        VAR_14 = FUNC_3(VAR_7, VAR_4);

        if (VAR_14 & VAR_2) {
            VAR_14 = FUNC_3(VAR_7, VAR_5);




            *VAR_9 = FUNC_5(VAR_14);
            VAR_13 = 0;
            break;
        }
    }

    if (VAR_13 == -1) {
        FUNC_0(VAR_7, "nvram read timeout expired "
            "(offset 0x%x cmd_flags 0x%x val 0x%x)\n",
            VAR_8, VAR_10, VAR_14);
    }

    return (VAR_13);
}
