
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bxe_softc*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct bxe_softc*,char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (struct bxe_softc*,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_3(struct bxe_softc *VAR_8,
                         uint32_t VAR_9)
{
    uint32_t VAR_10, VAR_11;


    if ((VAR_9 != VAR_6) &&
        (VAR_9 != VAR_5)) {

        VAR_10 = (VAR_1 +
                 (VAR_2 << 8 ) +
                 (VAR_3 << 16) +
                 (VAR_0 << 24));


        VAR_11 = FUNC_2(VAR_8, VAR_7);
        FUNC_0(VAR_8, VAR_4, "loaded FW 0x%08x / my FW 0x%08x\n",
              VAR_11, VAR_10);


        if (VAR_10 != VAR_11) {
            FUNC_1(VAR_8, "FW 0x%08x already loaded (mine is 0x%08x)",
                  VAR_11, VAR_10);
            return (-1);
        }
    }

    return (0);
}
