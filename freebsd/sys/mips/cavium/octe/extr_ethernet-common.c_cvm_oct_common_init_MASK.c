
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ifnet {int if_mtu; scalar_t__ if_softc; } ;
struct TYPE_3__ {int phy_id; int dev; } ;
typedef TYPE_1__ cvm_oct_private_t ;
struct TYPE_4__ {int board_type; } ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ifnet*,int ) ;
 int FUNC_2 (struct ifnet*,int *) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (int ) ;

int FUNC_7(struct ifnet *VAR_2)
{
 uint8_t VAR_3[6];
 cvm_oct_private_t *VAR_4 = (cvm_oct_private_t *)VAR_2->if_softc;

 if (FUNC_0(((void*)0), VAR_3) != 0)
  return VAR_0;

 VAR_2->if_mtu = VAR_1;

 FUNC_3(VAR_2);

 FUNC_2(VAR_2, VAR_3);
 FUNC_1(VAR_2, VAR_2->if_mtu);




 switch (FUNC_5()->board_type) {







 default:
  break;
 }

 FUNC_6(VAR_4->dev);

 return 0;
}
