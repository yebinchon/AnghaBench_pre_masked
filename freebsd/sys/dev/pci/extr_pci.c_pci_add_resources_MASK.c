
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct resource_list {int dummy; } ;
struct pci_quirk {int devid; scalar_t__ type; scalar_t__ arg1; } ;
struct TYPE_3__ {int device; int vendor; int nummaps; scalar_t__ intpin; int intline; } ;
struct pci_devinfo {struct resource_list resources; TYPE_1__ cfg; } ;
typedef TYPE_1__ pcicfgregs ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct pci_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,struct resource_list*,int,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,struct resource_list*,int,int) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 struct pci_quirk* VAR_13 ;
 int FUNC_13 (int ,scalar_t__,int) ;
 int FUNC_14 (int ,int ,TYPE_1__*,struct resource_list*) ;
 scalar_t__ VAR_14 ;
 int * FUNC_15 (struct resource_list*,int ,scalar_t__) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

void
FUNC_18(device_t VAR_15, device_t VAR_16, int VAR_17, uint32_t VAR_18)
{
 struct pci_devinfo *VAR_19;
 pcicfgregs *VAR_20;
 struct resource_list *VAR_21;
 const struct pci_quirk *VAR_22;
 uint32_t VAR_23;
 int VAR_24;

 VAR_19 = FUNC_2(VAR_16);
 VAR_20 = &VAR_19->cfg;
 VAR_21 = &VAR_19->resources;
 VAR_23 = (VAR_20->device << 16) | VAR_20->vendor;


 FUNC_6(VAR_15, VAR_16, 0);


 if ((FUNC_10(VAR_16) == VAR_1) &&
     (FUNC_12(VAR_16) == VAR_8) &&
     ((FUNC_11(VAR_16) & VAR_6) ||
      (!FUNC_13(VAR_16, FUNC_0(0), 4) &&
       !FUNC_13(VAR_16, FUNC_0(2), 4))) )
  FUNC_8(VAR_15, VAR_16, VAR_21, VAR_17, VAR_18);
 else
  for (VAR_24 = 0; VAR_24 < VAR_20->nummaps;) {

   if ((FUNC_15(VAR_21, VAR_12, FUNC_0(VAR_24)) != ((void*)0)) ||
       (FUNC_15(VAR_21, VAR_11, FUNC_0(VAR_24)) != ((void*)0)) ||
       FUNC_9(VAR_16, FUNC_0(VAR_24))) {
    VAR_24++;
    continue;
   }




   for (VAR_22 = &VAR_13[0]; VAR_22->devid != 0; VAR_22++)
    if (VAR_22->devid == VAR_23 &&
        VAR_22->type == VAR_10 &&
        VAR_22->arg1 == FUNC_0(VAR_24))
     break;
   if (VAR_22->devid != 0) {
    VAR_24++;
    continue;
   }
   VAR_24 += FUNC_5(VAR_15, VAR_16, FUNC_0(VAR_24), VAR_21, VAR_17,
       VAR_18 & (1 << VAR_24));
  }




 for (VAR_22 = &VAR_13[0]; VAR_22->devid != 0; VAR_22++)
  if (VAR_22->devid == VAR_23 && VAR_22->type == VAR_9)
   FUNC_5(VAR_15, VAR_16, VAR_22->arg1, VAR_21, VAR_17, 0);

 if (VAR_20->intpin > 0 && FUNC_1(VAR_20->intline)) {
  FUNC_7(VAR_15, VAR_16, 0);

 }

 if (VAR_14 && FUNC_10(VAR_16) == VAR_0 &&
     FUNC_12(VAR_16) == VAR_7) {
  if (FUNC_11(VAR_16) == VAR_5)
   FUNC_17(VAR_16);
  else if (FUNC_11(VAR_16) == VAR_2)
   FUNC_3(VAR_16);
  else if (FUNC_11(VAR_16) == VAR_3)
   FUNC_4(VAR_16);
  else if (FUNC_11(VAR_16) == VAR_4)
   FUNC_16(VAR_16);
 }
}
