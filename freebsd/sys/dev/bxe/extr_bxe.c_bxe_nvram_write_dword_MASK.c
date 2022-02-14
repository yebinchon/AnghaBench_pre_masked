
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
 int VAR_7 ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int FUNC_4 (struct bxe_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct bxe_softc *VAR_8,
                      uint32_t VAR_9,
                      uint32_t VAR_10,
                      uint32_t VAR_11)
{
    int VAR_12, VAR_13, VAR_14;


    VAR_11 |= (VAR_1 | VAR_3);


    FUNC_4(VAR_8, VAR_5, VAR_2);


    FUNC_4(VAR_8, VAR_6, VAR_10);


    FUNC_4(VAR_8, VAR_4,
           (VAR_9 & VAR_0));


    FUNC_4(VAR_8, VAR_5, VAR_11);


    VAR_12 = VAR_7;
    if (FUNC_1(VAR_8)) {
        VAR_12 *= 100;
    }


    VAR_14 = -1;
    for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
        FUNC_2(5);
        VAR_10 = FUNC_3(VAR_8, VAR_5);
        if (VAR_10 & VAR_2) {
            VAR_14 = 0;
            break;
        }
    }

    if (VAR_14 == -1) {
        FUNC_0(VAR_8, "nvram write timeout expired "
            "(offset 0x%x cmd_flags 0x%x val 0x%x)\n",
            VAR_9, VAR_11, VAR_10);
    }

    return (VAR_14);
}
