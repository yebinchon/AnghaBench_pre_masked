
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,char*) ;
 int FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int FUNC_4 (struct bxe_softc*,int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(struct bxe_softc *VAR_9,
                  uint8_t VAR_10)
{
    uint32_t VAR_11;


    if (!FUNC_1(VAR_9)) {

        FUNC_4(VAR_9, VAR_7, !!VAR_10);

        FUNC_4(VAR_9, VAR_8, !!VAR_10);
    }


    if (FUNC_2(VAR_9)) {

        VAR_11 = FUNC_3(VAR_9, VAR_4);
        FUNC_4(VAR_9, VAR_4,
               (!VAR_10) ? (VAR_11 | VAR_2) :
               (VAR_11 & ~(uint32_t)VAR_2));

        VAR_11 = FUNC_3(VAR_9, VAR_3);
        FUNC_4(VAR_9, VAR_3,
               (!VAR_10) ? (VAR_11 | VAR_1) :
               (VAR_11 & ~(uint32_t)VAR_1));
    } else {

        VAR_11 = FUNC_3(VAR_9, VAR_6);

        FUNC_4(VAR_9, VAR_6,
               (!VAR_10) ?
               (VAR_11 | VAR_5) :
               (VAR_11 & ~(uint32_t)VAR_5));
    }

    FUNC_0(VAR_9, VAR_0, "%s gates #2, #3 and #4\n",
          VAR_10 ? "closing" : "opening");

    FUNC_5();
}
