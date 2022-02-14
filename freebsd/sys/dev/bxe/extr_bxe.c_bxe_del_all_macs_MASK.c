
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ecore_vlan_mac_obj {int (* delete_all ) (struct bxe_softc*,struct ecore_vlan_mac_obj*,unsigned long*,unsigned long*) ;} ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,unsigned long*) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_vlan_mac_obj*,unsigned long*,unsigned long*) ;

__attribute__((used)) static int
FUNC_3(struct bxe_softc *VAR_1,
                 struct ecore_vlan_mac_obj *VAR_2,
                 int VAR_3,
                 uint8_t VAR_4)
{
    unsigned long VAR_5 = 0, VAR_6 = 0;
    int VAR_7;


    if (VAR_4) {
        FUNC_1(VAR_0, &VAR_5);
    }


    FUNC_1(VAR_3, &VAR_6);

    VAR_7 = VAR_2->delete_all(VAR_1, VAR_2, &VAR_6, &VAR_5);
    if (VAR_7 < 0) {
        FUNC_0(VAR_1, "Failed to delete MACs (%d) mac_type %d wait_for_comp 0x%x\n",
            VAR_7, VAR_3, VAR_4);
    }

    return (VAR_7);
}
