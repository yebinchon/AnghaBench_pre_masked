
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int load_phase; } ;
struct TYPE_4__ {TYPE_1__ hw_init; } ;
struct ecore_func_state_params {TYPE_2__ params; int cmd; int * f_obj; int ramrod_flags; int * member_0; } ;
struct bxe_softc {int func_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct bxe_softc*,struct ecore_func_state_params*) ;

__attribute__((used)) static int
FUNC_2(struct bxe_softc *VAR_2,
             uint32_t VAR_3)
{
    struct ecore_func_state_params VAR_4 = { ((void*)0) };


    FUNC_0(VAR_1, &VAR_4.ramrod_flags);

    VAR_4.f_obj = &VAR_2->func_obj;
    VAR_4.cmd = VAR_0;

    VAR_4.params.hw_init.load_phase = VAR_3;

    return (FUNC_1(VAR_2, &VAR_4));
}
