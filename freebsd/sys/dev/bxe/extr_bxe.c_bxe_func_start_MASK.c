
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ecore_func_start_params {int network_cos_mode; int sd_vlan_tag; int mf_mode; } ;
struct TYPE_6__ {struct ecore_func_start_params start; } ;
struct ecore_func_state_params {int cmd; int * f_obj; int ramrod_flags; TYPE_3__ params; int * member_0; } ;
struct TYPE_4__ {int mf_mode; } ;
struct TYPE_5__ {TYPE_1__ mf_info; } ;
struct bxe_softc {TYPE_2__ devinfo; int func_obj; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct bxe_softc*,struct ecore_func_state_params*) ;

__attribute__((used)) static inline int
FUNC_5(struct bxe_softc *VAR_4)
{
    struct ecore_func_state_params VAR_5 = { ((void*)0) };
    struct ecore_func_start_params *VAR_6 = &VAR_5.params.start;


    FUNC_3(&VAR_5.ramrod_flags, VAR_2);

    VAR_5.f_obj = &VAR_4->func_obj;
    VAR_5.cmd = VAR_0;


    VAR_6->mf_mode = VAR_4->devinfo.mf_info.mf_mode;
    VAR_6->sd_vlan_tag = FUNC_2(VAR_4);

    if (FUNC_0(VAR_4) || FUNC_1(VAR_4)) {
        VAR_6->network_cos_mode = VAR_3;
    } else {
        VAR_6->network_cos_mode = VAR_1;
    }




    return (FUNC_4(VAR_4, &VAR_5));
}
