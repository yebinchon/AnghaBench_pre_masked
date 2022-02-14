
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct bxe_mf_info {int multi_vnics_mode; int vnics_per_port; int mf_protos_supported; } ;
struct TYPE_3__ {struct bxe_mf_info mf_info; } ;
struct bxe_softc {TYPE_1__ devinfo; } ;
struct TYPE_4__ {int func_cfg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 size_t FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct bxe_softc *VAR_3)
{
    struct bxe_mf_info *VAR_4 = &VAR_3->devinfo.mf_info;
    uint32_t VAR_5;






    VAR_5 = FUNC_1(VAR_3, VAR_2[FUNC_2(VAR_3)].func_cfg);

    VAR_4->multi_vnics_mode = ((VAR_5 & VAR_1) != 0);

    VAR_4->mf_protos_supported = FUNC_3(VAR_3);

    VAR_4->vnics_per_port =
        (FUNC_0(VAR_3) == VAR_0) ? 2 : 4;

    return (0);
}
