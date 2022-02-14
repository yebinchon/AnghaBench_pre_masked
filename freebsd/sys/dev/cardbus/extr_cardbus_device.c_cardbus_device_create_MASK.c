
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct cardbus_softc {int sc_dev; } ;
struct TYPE_5__ {int func; } ;
struct TYPE_6__ {TYPE_1__ cfg; } ;
struct cardbus_devinfo {TYPE_3__* sc_cisdev; TYPE_2__ pci; int sc_cis; } ;
typedef int device_t ;
struct TYPE_7__ {struct cardbus_devinfo* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int *,scalar_t__,int ,int ,int,char*,int,int ) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;

int
FUNC_4(struct cardbus_softc *VAR_1, struct cardbus_devinfo *VAR_2,
    device_t VAR_3, device_t VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;

 FUNC_0(VAR_3, VAR_4, &VAR_2->sc_cis);
 VAR_5 = (FUNC_1(VAR_1->sc_dev) << 8) + VAR_2->pci.cfg.func;
 VAR_6 = FUNC_1(VAR_1->sc_dev);
 VAR_2->sc_cisdev = FUNC_2(&VAR_0, VAR_5, 0, 0, 0666,
     "cardbus%d.%d.cis", VAR_6, VAR_2->pci.cfg.func);
 if (VAR_2->pci.cfg.func == 0)
  FUNC_3(VAR_2->sc_cisdev, "cardbus%d.cis", VAR_6);
 VAR_2->sc_cisdev->si_drv1 = VAR_2;
 return (0);
}
