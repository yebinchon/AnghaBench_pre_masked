
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
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*,int,int*,int) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (int *,int*,int) ;

__attribute__((used)) static int
FUNC_7(struct bxe_softc *VAR_2,
               uint32_t VAR_3,
               uint8_t *VAR_4,
               int VAR_5)
{
    uint32_t VAR_6;
    uint32_t VAR_7;
    int VAR_8;

    if ((VAR_3 & 0x03) || (VAR_5 & 0x03) || (VAR_5 == 0)) {
        FUNC_0(VAR_2, "Invalid parameter, offset 0x%x buf_size 0x%x\n",
              VAR_3, VAR_5);
        return (-1);
    }

    if ((VAR_3 + VAR_5) > VAR_2->devinfo.flash_size) {
        FUNC_0(VAR_2, "Invalid parameter, "
                  "offset 0x%x + buf_size 0x%x > flash_size 0x%x\n",
              VAR_3, VAR_5, VAR_2->devinfo.flash_size);
        return (-1);
    }


    VAR_8 = FUNC_1(VAR_2);
    if (VAR_8) {
        return (VAR_8);
    }


    FUNC_3(VAR_2);


    VAR_6 = VAR_0;
    while ((VAR_5 > sizeof(uint32_t)) && (VAR_8 == 0)) {
        VAR_8 = FUNC_4(VAR_2, VAR_3, &VAR_7, VAR_6);
        FUNC_6(VAR_4, &VAR_7, 4);


        VAR_3 += sizeof(uint32_t);
        VAR_4 += sizeof(uint32_t);
        VAR_5 -= sizeof(uint32_t);
        VAR_6 = 0;
    }

    if (VAR_8 == 0) {
        VAR_6 |= VAR_1;
        VAR_8 = FUNC_4(VAR_2, VAR_3, &VAR_7, VAR_6);
        FUNC_6(VAR_4, &VAR_7, 4);
    }


    FUNC_2(VAR_2);
    FUNC_5(VAR_2);

    return (VAR_8);
}
