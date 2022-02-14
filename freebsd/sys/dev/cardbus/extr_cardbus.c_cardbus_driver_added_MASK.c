
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int domain; int bus; int slot; int func; int dev; } ;
struct TYPE_6__ {TYPE_1__ cfg; } ;
struct cardbus_devinfo {TYPE_2__ pci; } ;
typedef int driver_t ;
typedef int device_t ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,int **,int*) ;
 struct cardbus_devinfo* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int ,TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (char*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_12(device_t VAR_3, driver_t *VAR_4)
{
 int VAR_5;
 device_t *VAR_6;
 device_t VAR_7;
 int VAR_8;
 struct cardbus_devinfo *VAR_9;

 FUNC_0(VAR_4, VAR_3);
 if (FUNC_2(VAR_3, &VAR_6, &VAR_5) != 0)
  return;





 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7 = VAR_6[VAR_8];
  if (FUNC_5(VAR_7) != VAR_0)
      break;
 }
 if (VAR_8 > 0 && VAR_8 == VAR_5)
  FUNC_1(FUNC_4(VAR_3), VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7 = VAR_6[VAR_8];
  if (FUNC_5(VAR_7) != VAR_0)
   continue;
  VAR_9 = FUNC_3(VAR_7);
  FUNC_10(&VAR_9->pci);
  if (VAR_2)
   FUNC_11("pci%d:%d:%d:%d: reprobing on driver added\n",
       VAR_9->pci.cfg.domain, VAR_9->pci.cfg.bus,
       VAR_9->pci.cfg.slot, VAR_9->pci.cfg.func);
  FUNC_8(VAR_9->pci.cfg.dev, &VAR_9->pci);
  if (FUNC_6(VAR_7) != 0)
   FUNC_9(VAR_7, &VAR_9->pci, 1);
 }
 FUNC_7(VAR_6, VAR_1);
}
