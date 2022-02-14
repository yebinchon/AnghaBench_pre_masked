
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ int_block; } ;
struct TYPE_4__ {int pmf; } ;
struct bxe_softc {TYPE_1__ devinfo; TYPE_2__ port; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 int FUNC_1 (struct bxe_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*) ;
 int VAR_6 ;
 int FUNC_5 (struct bxe_softc*,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_7)
{
    int VAR_8 = FUNC_3(VAR_7);
    uint32_t VAR_9;

    VAR_7->port.pmf = 1;
    FUNC_0(VAR_7, VAR_0, "pmf %d\n", VAR_7->port.pmf);





    FUNC_6();







    VAR_9 = (0xff0f | (1 << (FUNC_4(VAR_7) + 4)));
    if (VAR_7->devinfo.int_block == VAR_5) {
        FUNC_2(VAR_7, VAR_2 + VAR_8*8, VAR_9);
        FUNC_2(VAR_7, VAR_1 + VAR_8*8, VAR_9);
    } else if (!FUNC_1(VAR_7)) {
        FUNC_2(VAR_7, VAR_4, VAR_9);
        FUNC_2(VAR_7, VAR_3, VAR_9);
    }

    FUNC_5(VAR_7, VAR_6);
}
