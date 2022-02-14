
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_vlan_mac_obj {int (* delete_all ) (struct bxe_softc*,struct ecore_vlan_mac_obj*,unsigned long*,unsigned long*) ;} ;
struct ecore_mcast_ramrod_params {unsigned long ramrod_flags; int * mcast_obj; int * member_0; } ;
struct bxe_softc {int mcast_obj; TYPE_1__* sp_objs; } ;
struct TYPE_2__ {struct ecore_vlan_mac_obj mac_obj; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int ) ;
 int FUNC_3 (struct bxe_softc*,struct ecore_vlan_mac_obj*,unsigned long*,unsigned long*) ;
 int FUNC_4 (struct bxe_softc*,struct ecore_vlan_mac_obj*,unsigned long*,unsigned long*) ;

__attribute__((used)) static void
FUNC_5(struct bxe_softc *VAR_6)
{
    unsigned long VAR_7 = 0, VAR_8 = 0;
    struct ecore_mcast_ramrod_params VAR_9 = { ((void*)0) };
    struct ecore_vlan_mac_obj *VAR_10 = &VAR_6->sp_objs->mac_obj;
    int VAR_11;




    FUNC_1(VAR_4, &VAR_7);

    FUNC_1(VAR_5, &VAR_7);


    FUNC_1(VAR_0, &VAR_8);
    VAR_11 = VAR_10->delete_all(VAR_6, &VAR_6->sp_objs->mac_obj, &VAR_8,
                             &VAR_7);
    if (VAR_11 != 0) {
        FUNC_0(VAR_6, "Failed to clean ETH MACs (%d)\n", VAR_11);
    }


    VAR_8 = 0;
    FUNC_1(VAR_3, &VAR_8);
    VAR_11 = VAR_10->delete_all(VAR_6, VAR_10, &VAR_8,
                             &VAR_7);
    if (VAR_11 != 0) {
        FUNC_0(VAR_6, "Failed to clean UC list MACs (%d)\n", VAR_11);
    }



    VAR_9.mcast_obj = &VAR_6->mcast_obj;
    FUNC_1(VAR_5, &VAR_9.ramrod_flags);


    VAR_11 = FUNC_2(VAR_6, &VAR_9, VAR_2);
    if (VAR_11 < 0) {
        FUNC_0(VAR_6, "Failed to send DEL MCAST command (%d)\n", VAR_11);
    }



    VAR_11 = FUNC_2(VAR_6, &VAR_9, VAR_1);
    while (VAR_11 != 0) {
        if (VAR_11 < 0) {
            FUNC_0(VAR_6, "Failed to clean MCAST object (%d)\n", VAR_11);
            return;
        }

        VAR_11 = FUNC_2(VAR_6, &VAR_9, VAR_1);
    }
}
