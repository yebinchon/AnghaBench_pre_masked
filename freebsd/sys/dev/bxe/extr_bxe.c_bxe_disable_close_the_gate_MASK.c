
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bxe_softc*,int) ;
 int FUNC_3 (struct bxe_softc*,int,int) ;
 int FUNC_4 (struct bxe_softc*) ;

__attribute__((used)) static void
FUNC_5(struct bxe_softc *VAR_6)
{
    uint32_t VAR_7;
    int VAR_8 = FUNC_4(VAR_6);

    FUNC_0(VAR_6, VAR_0,
          "Disabling 'close the gates'\n");

    if (FUNC_1(VAR_6)) {
        uint32_t VAR_9 = VAR_8 ? VAR_5 :
                               VAR_4;
        VAR_7 = FUNC_2(VAR_6, VAR_9);
        VAR_7 &= ~(0x300);
        FUNC_3(VAR_6, VAR_9, VAR_7);
    } else {
        VAR_7 = FUNC_2(VAR_6, VAR_3);
        VAR_7 &= ~(VAR_2 |
                 VAR_1);
        FUNC_3(VAR_6, VAR_3, VAR_7);
    }
}
