
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,int,int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct bxe_softc*,int) ;
 int FUNC_4 (struct bxe_softc*,int,int) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_8)
{
    int VAR_9 = FUNC_5(VAR_8);
    uint32_t VAR_10 = (VAR_9) ? VAR_6 : VAR_5;
    uint32_t VAR_11 = FUNC_3(VAR_8, VAR_10);






    if (FUNC_2(VAR_8)) {




        FUNC_4(VAR_8, (VAR_7 + VAR_9*4), 0);

        VAR_11 &= ~(VAR_4 |
                 VAR_2 |
                 VAR_1);
    } else {
        VAR_11 &= ~(VAR_4 |
                 VAR_3 |
                 VAR_2 |
                 VAR_1);
    }

    FUNC_0(VAR_8, VAR_0, "write %x to HC %d (addr 0x%x)\n", VAR_11, VAR_9, VAR_10);


    FUNC_6();

    FUNC_4(VAR_8, VAR_10, VAR_11);
    if (FUNC_3(VAR_8, VAR_10) != VAR_11) {
        FUNC_1(VAR_8, "proper val not read from HC IGU!\n");
    }
}
