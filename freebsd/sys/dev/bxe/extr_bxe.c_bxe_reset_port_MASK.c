
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (struct bxe_softc*,scalar_t__) ;
 int FUNC_4 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_7)
{
    int VAR_8 = FUNC_5(VAR_7);
    uint32_t VAR_9;

 FUNC_2(VAR_7, "bxe_reset_port called\n");

    FUNC_6(VAR_7);

    FUNC_4(VAR_7, VAR_6 + VAR_8*4, 0);


    FUNC_4(VAR_7, VAR_3 + VAR_8*4, 0x0);

    FUNC_4(VAR_7, (VAR_8 ? VAR_5 :
               VAR_4), 0x0);


    FUNC_4(VAR_7, VAR_2 + VAR_8*4, 0);

    FUNC_1(100000);


    VAR_9 = FUNC_3(VAR_7, VAR_0 + VAR_8*4);
    if (VAR_9) {
        FUNC_0(VAR_7, VAR_1,
              "BRB1 is not empty, %d blocks are occupied\n", VAR_9);
    }


}
