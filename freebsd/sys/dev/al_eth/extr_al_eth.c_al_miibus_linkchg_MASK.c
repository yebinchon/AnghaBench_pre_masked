
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct al_eth_adapter {TYPE_2__* mii; int dev; int hal_adapter; TYPE_1__* netdev; } ;
typedef int device_t ;
struct TYPE_4__ {int mii_media_status; int mii_media_active; } ;
struct TYPE_3__ {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int,int ,scalar_t__) ;
 struct al_eth_adapter* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_10)
{
 struct al_eth_adapter *VAR_11 = FUNC_2(VAR_10);
 uint8_t VAR_12 = 0;
 uint8_t VAR_13 = 0;

 if (VAR_11->mii == ((void*)0))
  return;

 if ((VAR_11->netdev->if_flags & VAR_3) == 0)
  return;


 if ((VAR_11->mii->mii_media_status & (VAR_8 | VAR_7)) !=
     (VAR_8 | VAR_7)) {
  return;
 }

 if ((VAR_11->mii->mii_media_active & VAR_9) != 0)
  VAR_12 = 1;

 VAR_13 = FUNC_0(VAR_11->mii->mii_media_active);

 if (VAR_13 == VAR_6) {
  FUNC_1(&VAR_11->hal_adapter, 0, 1,
      VAR_2, VAR_12);
  return;
 }

 if (VAR_13 == VAR_5) {
  FUNC_1(&VAR_11->hal_adapter, 0, 1,
      VAR_1, VAR_12);
  return;
 }

 if (VAR_13 == VAR_4) {
  FUNC_1(&VAR_11->hal_adapter, 0, 1,
      VAR_0, VAR_12);
  return;
 }

 FUNC_3(VAR_11->dev, "ERROR: unknown MII media active 0x%08x\n",
     VAR_11->mii->mii_media_active);
}
