
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdt_softc {int sc_bus_cnt; int sc_state; int sc_lock; int * sims; int * paths; int sc_devnode; } ;
struct cam_devq {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct gdt_softc*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,char*,struct gdt_softc*,int ,int *,int,int ,struct cam_devq*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 struct cam_devq* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_11 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,int) ;
 scalar_t__ FUNC_11 (int *,int *,int ,int ,int ) ;

void
FUNC_12(struct gdt_softc *VAR_12)
{
    struct cam_devq *VAR_13;
    int VAR_14;

    FUNC_1(VAR_4, ("iir_attach()\n"));





    VAR_13 = FUNC_5(32);
    if (VAR_13 == ((void*)0))
        return;

    for (VAR_14 = 0; VAR_14 < VAR_12->sc_bus_cnt; VAR_14++) {



        VAR_12->sims[VAR_14] = FUNC_2(VAR_8, VAR_9, "iir",
     VAR_12, FUNC_6(VAR_12->sc_devnode), &VAR_12->sc_lock,
                 1, VAR_5, VAR_13);
 FUNC_7(&VAR_12->sc_lock);
        if (FUNC_10(VAR_12->sims[VAR_14], VAR_12->sc_devnode, VAR_14) != VAR_2) {
            FUNC_3(VAR_12->sims[VAR_14], VAR_14 == 0);
     FUNC_8(&VAR_12->sc_lock);
            break;
        }

        if (FUNC_11(&VAR_12->paths[VAR_14], ((void*)0),
                            FUNC_4(VAR_12->sims[VAR_14]),
                            VAR_3,
                            VAR_0) != VAR_1) {
            FUNC_9(FUNC_4(VAR_12->sims[VAR_14]));
            FUNC_3(VAR_12->sims[VAR_14], VAR_14 == 0);
     FUNC_8(&VAR_12->sc_lock);
            break;
        }
 FUNC_8(&VAR_12->sc_lock);
    }
    if (VAR_14 > 0)
        FUNC_0(VAR_11, VAR_10,
                              VAR_12, VAR_7);

    VAR_12->sc_state = VAR_6;
}
