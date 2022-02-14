
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int sp_err_timeout_task; } ;
struct bxe_fastpath {scalar_t__ watchdog_timer; int index; } ;


 int FUNC_0 (struct bxe_softc*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_fastpath*) ;
 int FUNC_2 (struct bxe_fastpath*) ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int *,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct bxe_softc *VAR_3,
             struct bxe_fastpath *VAR_4)
{
    FUNC_1(VAR_4);

    if ((VAR_4->watchdog_timer == 0) || (--VAR_4->watchdog_timer)) {
        FUNC_2(VAR_4);
        return (0);
    }

    FUNC_0(VAR_3, "TX watchdog timeout on fp[%02d], resetting!\n", VAR_4->index);

    FUNC_2(VAR_4);
    FUNC_3(VAR_3, VAR_0);
    FUNC_4(VAR_2,
        &VAR_3->sp_err_timeout_task, VAR_1/10);

    return (-1);
}
