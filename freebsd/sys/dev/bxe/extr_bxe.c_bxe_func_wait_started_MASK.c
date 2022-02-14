
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_func_state_params {int cmd; int ramrod_flags; int * f_obj; int * member_0; } ;
struct TYPE_2__ {int pmf; } ;
struct bxe_softc {int func_obj; TYPE_1__ port; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct bxe_softc*,int *) ;
 int FUNC_4 (struct bxe_softc*,struct ecore_func_state_params*) ;

__attribute__((used)) static int
FUNC_5(struct bxe_softc *VAR_4)
{
    int VAR_5 = 50;

    if (!VAR_4->port.pmf) {
        return (0);
    }
    while (FUNC_3(VAR_4, &VAR_4->func_obj) !=
           VAR_2 && VAR_5--) {
        FUNC_1(20000);
    }

    if (FUNC_3(VAR_4, &VAR_4->func_obj) != VAR_2) {




        struct ecore_func_state_params VAR_6 = { ((void*)0) };

        FUNC_0(VAR_4, "Unexpected function state! "
                  "Forcing STARTED-->TX_STOPPED-->STARTED\n");

        VAR_6.f_obj = &VAR_4->func_obj;
        FUNC_2(VAR_3, &VAR_6.ramrod_flags);


        VAR_6.cmd = VAR_1;
        FUNC_4(VAR_4, &VAR_6);


        VAR_6.cmd = VAR_0;
        return (FUNC_4(VAR_4, &VAR_6));
    }

    return (0);
}
