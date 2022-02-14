
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bxe_softc {int sp_err_timeout_task; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 scalar_t__* FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_4 (int ,int *,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct bxe_softc *VAR_5)
{
    uint32_t *VAR_6 = FUNC_2(VAR_5, VAR_6);
    int VAR_7 = 10;

    while (*VAR_6 != VAR_1) {
        if (!VAR_7) {
            FUNC_0(VAR_5, "Timeout waiting for stats finished\n");
     FUNC_1(VAR_5, VAR_0);
            FUNC_4(VAR_4,
                &VAR_5->sp_err_timeout_task, VAR_2/10);
            break;

        }

        VAR_7--;
        FUNC_3(1000);
    }

    return (1);
}
