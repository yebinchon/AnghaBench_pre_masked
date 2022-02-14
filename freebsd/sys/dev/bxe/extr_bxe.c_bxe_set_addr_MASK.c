
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct ecore_vlan_mac_obj {int dummy; } ;
struct bxe_set_addr_ctx {int rc; TYPE_2__* sc; int ramrod_flags; } ;
struct TYPE_6__ {TYPE_1__* sp_objs; } ;
struct TYPE_5__ {struct ecore_vlan_mac_obj mac_obj; } ;


 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct sockaddr_dl*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int *,struct ecore_vlan_mac_obj*,int ,int ,int *) ;

__attribute__((used)) static u_int
FUNC_4(void *VAR_4, struct sockaddr_dl *VAR_5, u_int VAR_6)
{
    struct bxe_set_addr_ctx *VAR_7 = VAR_4;
    struct ecore_vlan_mac_obj *VAR_8 = &VAR_7->sc->sp_objs->mac_obj;
    int VAR_9;

    if (VAR_7->rc < 0)
 return (0);

    VAR_9 = FUNC_3(VAR_7->sc, (uint8_t *)FUNC_2(VAR_5), VAR_8, VAR_3,
                         VAR_1, &VAR_7->ramrod_flags);


    if (VAR_9 == -VAR_2)
 FUNC_0(VAR_7->sc, VAR_0, "Failed to schedule ADD operations (EEXIST)\n");
    else if (VAR_9 < 0) {
            FUNC_1(VAR_7->sc, "Failed to schedule ADD operations (%d)\n", VAR_9);
            VAR_7->rc = VAR_9;
    }

    return (1);
}
