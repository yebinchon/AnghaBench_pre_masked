
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int mac; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct TYPE_6__ {int cmd; int vlan_mac_flags; TYPE_2__ u; } ;
struct ecore_vlan_mac_ramrod_params {unsigned long ramrod_flags; TYPE_3__ user_req; struct ecore_vlan_mac_obj* vlan_mac_obj; } ;
struct ecore_vlan_mac_obj {int dummy; } ;
struct bxe_softc {int dummy; } ;
typedef int ramrod_param ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,unsigned long*) ;
 int FUNC_4 (struct bxe_softc*,struct ecore_vlan_mac_ramrod_params*) ;
 int FUNC_5 (int ,scalar_t__*,int ) ;
 int FUNC_6 (struct ecore_vlan_mac_ramrod_params*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct bxe_softc *VAR_6,
                uint8_t *VAR_7,
                struct ecore_vlan_mac_obj *VAR_8,
                uint8_t VAR_9,
                int VAR_10,
                unsigned long *VAR_11)
{
    struct ecore_vlan_mac_ramrod_params VAR_12;
    int VAR_13;

    FUNC_6(&VAR_12, 0, sizeof(VAR_12));


    VAR_12.vlan_mac_obj = VAR_8;
    VAR_12.ramrod_flags = *VAR_11;


    if (!FUNC_3(VAR_5, VAR_11)) {
        FUNC_5(VAR_12.user_req.u.mac.mac, VAR_7, VAR_4);

        FUNC_2(VAR_10, &VAR_12.user_req.vlan_mac_flags);


        VAR_12.user_req.cmd = (VAR_9) ? VAR_2 :
                                            VAR_3;
    }

    VAR_13 = FUNC_4(VAR_6, &VAR_12);

    if (VAR_13 == VAR_1) {
        FUNC_0(VAR_6, VAR_0, "Failed to schedule ADD operations (EEXIST)\n");

        VAR_13 = 0;
    } else if (VAR_13 < 0) {
        FUNC_1(VAR_6, "%s MAC failed (%d)\n", (VAR_9 ? "Set" : "Delete"), VAR_13);
    }

    return (VAR_13);
}
