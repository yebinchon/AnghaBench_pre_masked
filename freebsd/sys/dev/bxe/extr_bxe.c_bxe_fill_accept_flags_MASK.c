
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (int ,unsigned long*) ;

__attribute__((used)) static int
FUNC_3(struct bxe_softc *VAR_7,
                      uint32_t VAR_8,
                      unsigned long *VAR_9,
                      unsigned long *VAR_10)
{

    *VAR_9 = 0;
    *VAR_10 = 0;

    switch (VAR_8) {
    case 130:




        break;

    case 129:
        FUNC_2(VAR_5, VAR_9);
        FUNC_2(VAR_4, VAR_9);
        FUNC_2(VAR_3, VAR_9);


        FUNC_2(VAR_5, VAR_10);
        FUNC_2(VAR_4, VAR_10);
        FUNC_2(VAR_3, VAR_10);

        break;

    case 131:
        FUNC_2(VAR_5, VAR_9);
        FUNC_2(VAR_0, VAR_9);
        FUNC_2(VAR_3, VAR_9);


        FUNC_2(VAR_5, VAR_10);
        FUNC_2(VAR_0, VAR_10);
        FUNC_2(VAR_3, VAR_10);

        break;

    case 128:





        FUNC_2(VAR_6, VAR_9);
        FUNC_2(VAR_5, VAR_9);
        FUNC_2(VAR_0, VAR_9);
        FUNC_2(VAR_3, VAR_9);


        FUNC_2(VAR_0, VAR_10);
        FUNC_2(VAR_3, VAR_10);

        if (FUNC_1(VAR_7)) {
            FUNC_2(VAR_1, VAR_10);
        } else {
            FUNC_2(VAR_5, VAR_10);
        }

        break;

    default:
        FUNC_0(VAR_7, "Unknown rx_mode (0x%x)\n", VAR_8);
        return (-1);
    }


    if (VAR_8 != 130) {
        FUNC_2(VAR_2, VAR_9);
        FUNC_2(VAR_2, VAR_10);
    }

    return (0);
}
