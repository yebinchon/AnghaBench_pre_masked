
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_func_state_params {int ramrod_flags; int cmd; int * f_obj; int * member_0; } ;
struct bxe_softc {int func_obj; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_func_state_params*) ;

__attribute__((used)) static int
FUNC_3(struct bxe_softc *VAR_3)
{
    struct ecore_func_state_params VAR_4 = { ((void*)0) };
    int VAR_5;


    FUNC_1(VAR_1, &VAR_4.ramrod_flags);
    VAR_4.f_obj = &VAR_3->func_obj;
    VAR_4.cmd = VAR_0;







    VAR_5 = FUNC_2(VAR_3, &VAR_4);
    if (VAR_5) {
        FUNC_0(VAR_3, "FUNC_STOP ramrod failed. "
                  "Running a dry transaction (%d)\n", VAR_5);
        FUNC_1(VAR_2, &VAR_4.ramrod_flags);
        return (FUNC_2(VAR_3, &VAR_4));
    }

    return (0);
}
