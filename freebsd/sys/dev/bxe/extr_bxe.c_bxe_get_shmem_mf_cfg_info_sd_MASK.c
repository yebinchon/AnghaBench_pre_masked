
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct bxe_mf_info {int multi_vnics_mode; int* mf_config; int vnics_per_port; int mf_protos_supported; scalar_t__ ext_id; } ;
struct TYPE_3__ {struct bxe_mf_info mf_info; } ;
struct bxe_softc {TYPE_1__ devinfo; } ;
struct TYPE_4__ {int e1hov_tag; } ;


 int FUNC_0 (struct bxe_softc*,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct bxe_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_3 (struct bxe_softc*) ;
 size_t FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static int
FUNC_6(struct bxe_softc *VAR_8)
{
    struct bxe_mf_info *VAR_9 = &VAR_8->devinfo.mf_info;
    uint32_t VAR_10;



    VAR_10 = FUNC_2(VAR_8, VAR_7[FUNC_3(VAR_8)].e1hov_tag);
    VAR_9->ext_id = (uint16_t)VAR_10;

    VAR_9->multi_vnics_mode = 1;

    if (!FUNC_5(VAR_9->ext_id)) {
        FUNC_0(VAR_8, "Invalid VLAN (%d)\n", VAR_9->ext_id);
        return (1);
    }


    if ((VAR_9->mf_config[FUNC_4(VAR_8)] & VAR_3) ==
        VAR_2) {
        VAR_9->mf_protos_supported |= VAR_6;
    } else if ((VAR_9->mf_config[FUNC_4(VAR_8)] & VAR_3) ==
               VAR_1) {
        VAR_9->mf_protos_supported |= VAR_5;
    } else {
        VAR_9->mf_protos_supported |= VAR_4;
    }

    VAR_9->vnics_per_port =
        (FUNC_1(VAR_8) == VAR_0) ? 2 : 4;

    return (0);
}
