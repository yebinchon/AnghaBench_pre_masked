
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_vlan_mac_obj {int dummy; } ;
struct bxe_softc {TYPE_1__* sp_objs; int ifp; } ;
struct bxe_set_addr_ctx {scalar_t__ rc; int ramrod_flags; int member_2; int member_1; struct bxe_softc* member_0; } ;
typedef int if_t ;
struct TYPE_2__ {struct ecore_vlan_mac_obj mac_obj; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_vlan_mac_obj*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct bxe_softc*,int *,struct ecore_vlan_mac_obj*,int ,int ,int *) ;
 int FUNC_4 (int ,int ,struct bxe_set_addr_ctx*) ;

__attribute__((used)) static int
FUNC_5(struct bxe_softc *VAR_4)
{
    if_t VAR_5 = VAR_4->ifp;
    struct ecore_vlan_mac_obj *VAR_6 = &VAR_4->sp_objs->mac_obj;
    struct bxe_set_addr_ctx VAR_7 = { VAR_4, 0, 0 };
    int VAR_8;


    VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_0, VAR_1);
    if (VAR_8 < 0) {
        FUNC_0(VAR_4, "Failed to schedule delete of all ETH MACs (%d)\n", VAR_8);
        return (VAR_8);
    }

    FUNC_4(VAR_5, VAR_3, &VAR_7);
    if (VAR_7.rc < 0)
 return (VAR_7.rc);


    FUNC_1(&VAR_7.ramrod_flags, VAR_2);
    return (FUNC_3(VAR_4, ((void*)0), VAR_6, VAR_1 ,
                            VAR_0, &VAR_7.ramrod_flags));
}
