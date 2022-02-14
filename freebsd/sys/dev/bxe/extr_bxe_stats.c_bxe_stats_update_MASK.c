
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ pmf; } ;
struct bxe_softc {int sp_err_timeout_task; int ifp; int stats_pending; TYPE_1__ port; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 scalar_t__* FUNC_2 (struct bxe_softc*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct bxe_softc*) ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 scalar_t__ FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*) ;
 int FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 (struct bxe_softc*) ;
 int FUNC_10 (struct bxe_softc*) ;
 scalar_t__ FUNC_11 (struct bxe_softc*) ;
 int VAR_3 ;
 int FUNC_12 (int ) ;
 scalar_t__* VAR_4 ;
 int FUNC_13 (int ,int *,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_14(struct bxe_softc *VAR_6)
{
    uint32_t *VAR_7 = FUNC_2(VAR_6, VAR_7);

    if (FUNC_6(VAR_6)) {
        return;
    }

    if (FUNC_3(VAR_6)) {
        if (*VAR_7 != VAR_1) {
            return;
        }

        if (VAR_6->port.pmf) {
            FUNC_8(VAR_6);
        }

        if (FUNC_11(VAR_6)) {
            if (VAR_6->stats_pending++ == 3) {
  if (FUNC_12(VAR_6->ifp) & VAR_2) {
      FUNC_0(VAR_6, "Storm stats not updated for 3 times, resetting\n");
      FUNC_1(VAR_6, VAR_0);
      FUNC_13(VAR_5,
                            &VAR_6->sp_err_timeout_task, VAR_3/10);
  }
            }
            return;
        }
    } else {




        FUNC_11(VAR_6);
    }

    FUNC_9(VAR_6);
    FUNC_5(VAR_6);


    if (FUNC_4(VAR_6)) {
        return;
    }

    FUNC_7(VAR_6);
    FUNC_10(VAR_6);
}
