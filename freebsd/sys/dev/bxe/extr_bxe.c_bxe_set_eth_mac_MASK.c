
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int mac_addr; } ;
struct bxe_softc {TYPE_2__* sp_objs; TYPE_1__ link_params; } ;
struct TYPE_4__ {int mac_obj; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct bxe_softc*,int ,int *,int ,int ,unsigned long*) ;

__attribute__((used)) static int
FUNC_3(struct bxe_softc *VAR_3,
                uint8_t VAR_4)
{
    unsigned long VAR_5 = 0;

    FUNC_0(VAR_3, VAR_0, "Adding Ethernet MAC\n");

    FUNC_1(VAR_2, &VAR_5);


    return (FUNC_2(VAR_3, VAR_3->link_params.mac_addr,
                            &VAR_3->sp_objs->mac_obj,
                            VAR_4, VAR_1, &VAR_5));
}
