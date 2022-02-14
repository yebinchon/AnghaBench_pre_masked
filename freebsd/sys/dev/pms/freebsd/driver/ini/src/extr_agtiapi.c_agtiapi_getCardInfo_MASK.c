
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agtiapi_softc {int my_dev; TYPE_1__* pCardInfo; } ;
typedef int U32_64 ;
struct TYPE_4__ {int busNum; int pciIOAddrUp; int pciIOAddrLow; int pciMemBase; int deviceNum; int pciMemBaseSpc; int vendorId; int deviceId; } ;
struct TYPE_3__ {int pciIOAddrUp; int pciIOAddrLow; int pciMemBase; int pciMemBaseSpc; } ;
typedef TYPE_2__ CardInfo_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5 ( struct agtiapi_softc *VAR_1,
                          U32_64 VAR_2,
                          void *VAR_3 )
{
  CardInfo_t *VAR_4;

  VAR_4 = (CardInfo_t *)VAR_3;

  VAR_4->deviceId = FUNC_2(VAR_1->my_dev);
  VAR_4->vendorId =FUNC_4(VAR_1->my_dev) ;
  FUNC_0( VAR_4->pciMemBaseSpc,
          VAR_1->pCardInfo->pciMemBaseSpc,
          ((sizeof(U32_64))*VAR_0) );
  VAR_4->deviceNum = FUNC_3(VAR_1->my_dev);
  VAR_4->pciMemBase = VAR_1->pCardInfo->pciMemBase;
  VAR_4->pciIOAddrLow = VAR_1->pCardInfo->pciIOAddrLow;
  VAR_4->pciIOAddrUp = VAR_1->pCardInfo->pciIOAddrUp;
  VAR_4->busNum =FUNC_1(VAR_1->my_dev);
  return 0;
}
