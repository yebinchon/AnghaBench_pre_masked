
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ flash_size; } ;
struct bxe_softc {TYPE_1__ devinfo; } ;


 int FUNC_0 (struct bxe_softc*,char*,scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_7 (struct bxe_softc*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct bxe_softc*) ;

__attribute__((used)) static int
FUNC_9(struct bxe_softc *VAR_2,
                 uint32_t VAR_3,
                 uint8_t *VAR_4,
                 int VAR_5)
{
    uint32_t VAR_6;
    uint32_t VAR_7;
    uint32_t VAR_8;
    int VAR_9;

    if ((VAR_3 + VAR_5) > VAR_2->devinfo.flash_size) {
        FUNC_0(VAR_2, "Invalid parameter, "
                  "offset 0x%x + buf_size 0x%x > flash_size 0x%x\n",
              VAR_3, VAR_5, VAR_2->devinfo.flash_size);
        return (-1);
    }


    VAR_9 = FUNC_3(VAR_2);
    if (VAR_9) {
        return (VAR_9);
    }


    FUNC_5(VAR_2);

    VAR_6 = (VAR_0 | VAR_1);
    VAR_7 = (VAR_3 & ~0x03);
    VAR_9 = FUNC_6(VAR_2, VAR_7, &VAR_8, VAR_6);

    if (VAR_9 == 0) {
        VAR_8 &= ~(0xff << FUNC_1(VAR_3));
        VAR_8 |= (*VAR_4 << FUNC_1(VAR_3));




        VAR_8 = FUNC_2(VAR_8);

        VAR_9 = FUNC_7(VAR_2, VAR_7, VAR_8, VAR_6);
    }


    FUNC_4(VAR_2);
    FUNC_8(VAR_2);

    return (VAR_9);
}
