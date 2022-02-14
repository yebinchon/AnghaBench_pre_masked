
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bxe_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(struct bxe_softc *VAR_5,
              int VAR_6,
              uint8_t VAR_7)
{

    int VAR_8 = ((FUNC_1(VAR_5, VAR_3) &&
                      FUNC_1(VAR_5, VAR_4)) ^ VAR_7);
    int VAR_9 = (VAR_6 +
                      (VAR_8 ? VAR_1 : 0));
    uint32_t VAR_10 = (1 << VAR_9);
    uint32_t VAR_11;

    if (VAR_6 > VAR_0) {
        FUNC_0(VAR_5, "Invalid GPIO %d port 0x%x gpio_port %d gpio_shift %d"
            " gpio_mask 0x%x\n", VAR_6, VAR_7, VAR_8, VAR_9,
            VAR_10);
        return (-1);
    }


    VAR_11 = FUNC_1(VAR_5, VAR_2);


    return ((VAR_11 & VAR_10) == VAR_10) ? 1 : 0;
}
