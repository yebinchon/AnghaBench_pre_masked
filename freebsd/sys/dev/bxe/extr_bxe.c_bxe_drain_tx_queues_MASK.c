
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int num_queues; struct bxe_fastpath* fp; } ;
struct bxe_fastpath {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int FUNC_1 (struct bxe_fastpath*) ;
 int FUNC_2 (struct bxe_fastpath*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct bxe_fastpath*) ;
 int FUNC_5 (struct bxe_softc*,char*) ;
 int FUNC_6 (struct bxe_softc*,struct bxe_fastpath*) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(struct bxe_softc *VAR_0)
{
    struct bxe_fastpath *VAR_1;
    int VAR_2, VAR_3;


    for (VAR_2 = 0; VAR_2 < VAR_0->num_queues; VAR_2++) {
        VAR_1 = &VAR_0->fp[VAR_2];

        VAR_3 = 1000;

        while (FUNC_4(VAR_1)) {

            FUNC_1(VAR_1);
            FUNC_6(VAR_0, VAR_1);
            FUNC_2(VAR_1);

            if (VAR_3 == 0) {
                FUNC_0(VAR_0, "Timeout waiting for fp[%d] "
                          "transmits to complete!\n", VAR_2);
                FUNC_5(VAR_0, ("tx drain failure\n"));
                return;
            }

            VAR_3--;
            FUNC_3(1000);
            FUNC_7();
        }
    }

    return;
}
