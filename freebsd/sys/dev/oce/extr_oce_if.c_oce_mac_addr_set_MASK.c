
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int size_of_struct; int mac_addr; } ;
struct TYPE_7__ {int dev; TYPE_1__ macaddr; int ifp; int if_id; int pmac_id; } ;
typedef TYPE_2__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_2__*,int *,int ,int *) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(POCE_SOFTC VAR_0)
{
 uint32_t VAR_1 = VAR_0->pmac_id;
 int VAR_2 = 0;


 VAR_2 = FUNC_1((FUNC_0(VAR_0->ifp)), VAR_0->macaddr.mac_addr,
    VAR_0->macaddr.size_of_struct);
 if (!VAR_2)
  return;

 VAR_2 = FUNC_4(VAR_0, (uint8_t *)(FUNC_0(VAR_0->ifp)),
     VAR_0->if_id, &VAR_0->pmac_id);
 if (!VAR_2) {
  VAR_2 = FUNC_5(VAR_0, VAR_0->if_id, VAR_1);
  FUNC_2((FUNC_0(VAR_0->ifp)), VAR_0->macaddr.mac_addr,
     VAR_0->macaddr.size_of_struct);
 }
 if (VAR_2)
  FUNC_3(VAR_0->dev, "Failed update macaddress\n");

}
