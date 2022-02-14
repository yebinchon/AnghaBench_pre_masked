
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_devinfo {int dummy; } ;
struct cardbus_softc {int dummy; } ;
struct TYPE_6__ {int * dev; scalar_t__ mfdev; } ;
struct TYPE_5__ {TYPE_4__ cfg; int resources; } ;
struct cardbus_devinfo {TYPE_1__ pci; int mprefetchable; } ;
typedef int * device_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cardbus_softc*,struct cardbus_devinfo*,int *,int *) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,int *,int) ;
 int * FUNC_8 (int *) ;
 struct cardbus_softc* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,struct cardbus_devinfo*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int,int ) ;
 int FUNC_15 (int *,TYPE_1__*) ;
 int FUNC_16 (int *,TYPE_1__*,int) ;
 int FUNC_17 (struct pci_devinfo*) ;
 int FUNC_18 (TYPE_1__*) ;
 scalar_t__ FUNC_19 (int *,int *,int,int,int,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_3)
{
 device_t VAR_4 = FUNC_8(VAR_3);
 device_t VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 struct cardbus_softc *VAR_12;

 VAR_12 = FUNC_9(VAR_3);
 FUNC_3(VAR_3);
 FUNC_1(VAR_4, VAR_3);
 FUNC_2(VAR_4, VAR_3);
 VAR_7 = FUNC_21(VAR_3);
 VAR_6 = FUNC_20(VAR_3);
 VAR_8 = 0;
 FUNC_12(&VAR_1);

 for (VAR_9 = 0; VAR_9 <= VAR_11; VAR_9++) {
  struct cardbus_devinfo *VAR_13;

  VAR_13 = (struct cardbus_devinfo *)
      FUNC_19(VAR_4, VAR_3, VAR_7, VAR_6, VAR_8, VAR_9);
  if (VAR_13 == ((void*)0))
   continue;
  if (VAR_13->pci.cfg.mfdev)
   VAR_11 = VAR_2;

  VAR_5 = FUNC_7(VAR_3, ((void*)0), -1);
  if (VAR_5 == ((void*)0)) {
   FUNC_0((VAR_3, "Cannot add child!\n"));
   FUNC_17((struct pci_devinfo *)VAR_13);
   continue;
  }
  VAR_13->pci.cfg.dev = VAR_5;
  FUNC_22(&VAR_13->pci.resources);
  FUNC_11(VAR_5, VAR_13);
  FUNC_4(VAR_12, VAR_13, VAR_3, VAR_5);
  if (FUNC_6(VAR_3, VAR_5) != 0)
   FUNC_0((VAR_3, "Warning: Bogus CIS ignored\n"));
  FUNC_16(VAR_13->pci.cfg.dev, &VAR_13->pci, 0);
  FUNC_15(VAR_13->pci.cfg.dev, &VAR_13->pci);
  FUNC_5(&VAR_13->pci.cfg);
  FUNC_14(VAR_3, VAR_5, 1, VAR_13->mprefetchable);
  FUNC_18(&VAR_13->pci);
  if (FUNC_10(VAR_5) == 0)
   VAR_10++;
  else
   FUNC_16(VAR_13->pci.cfg.dev, &VAR_13->pci, 1);
 }
 FUNC_13(&VAR_1);
 if (VAR_10 > 0)
  return (0);

 return (VAR_0);
}
