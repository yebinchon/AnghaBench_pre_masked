
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int flash_size; } ;
struct bxe_softc {TYPE_1__ devinfo; } ;


 int FUNC_0 (struct bxe_softc*,char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*,int,int *,int) ;
 int FUNC_5 (struct bxe_softc*,int,int,int) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (int*,int *,int) ;

__attribute__((used)) static int
FUNC_8(struct bxe_softc *VAR_3,
                uint32_t VAR_4,
                uint8_t *VAR_5,
                int VAR_6)
{
    uint32_t VAR_7;
    uint32_t VAR_8;
    uint32_t VAR_9;
    int VAR_10;

    if (VAR_6 == 1) {
        return (FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6));
    }

    if ((VAR_4 & 0x03) || (VAR_6 & 0x03) ) {
        FUNC_0(VAR_3, "Invalid parameter, offset 0x%x buf_size 0x%x\n",
              VAR_4, VAR_6);
        return (-1);
    }

    if (VAR_6 == 0) {
        return (0);
    }

    if ((VAR_4 + VAR_6) > VAR_3->devinfo.flash_size) {
        FUNC_0(VAR_3, "Invalid parameter, "
                  "offset 0x%x + buf_size 0x%x > flash_size 0x%x\n",
              VAR_4, VAR_6, VAR_3->devinfo.flash_size);
        return (-1);
    }


    VAR_10 = FUNC_1(VAR_3);
    if (VAR_10) {
        return (VAR_10);
    }


    FUNC_3(VAR_3);

    VAR_9 = 0;
    VAR_7 = VAR_0;
    while ((VAR_9 < VAR_6) && (VAR_10 == 0)) {
        if (VAR_9 == (VAR_6 - sizeof(uint32_t))) {
            VAR_7 |= VAR_1;
        } else if (((VAR_4 + 4) % VAR_2) == 0) {
            VAR_7 |= VAR_1;
        } else if ((VAR_4 % VAR_2) == 0) {
            VAR_7 |= VAR_0;
        }

        FUNC_7(&VAR_8, VAR_5, 4);

        VAR_10 = FUNC_5(VAR_3, VAR_4, VAR_8, VAR_7);


        VAR_4 += sizeof(uint32_t);
        VAR_5 += sizeof(uint32_t);
        VAR_9 += sizeof(uint32_t);
        VAR_7 = 0;
    }


    FUNC_2(VAR_3);
    FUNC_6(VAR_3);

    return (VAR_10);
}
