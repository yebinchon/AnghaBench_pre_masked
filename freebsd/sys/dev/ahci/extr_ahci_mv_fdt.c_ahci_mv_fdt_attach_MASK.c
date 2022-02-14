
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_controller {int numirqs; int * r_mem; scalar_t__ r_rid; int quirks; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ahci_controller*) ;
 int * FUNC_3 (int ,int ,scalar_t__*,int) ;
 int FUNC_4 (int ,int ,scalar_t__,int *) ;
 struct ahci_controller* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7)
{
 struct ahci_controller *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(VAR_7);
 VAR_8->dev = VAR_7;
 VAR_8->r_rid = 0;
 VAR_8->quirks = VAR_0;
 VAR_8->numirqs = 1;

 if (FUNC_7(VAR_7, "marvell,armada-380-ahci"))
  VAR_8->quirks |= VAR_1;


 VAR_8->r_mem = FUNC_3(VAR_7, VAR_6,
     &VAR_8->r_rid, VAR_4 | VAR_5);
 if (VAR_8->r_mem == ((void*)0)) {
  FUNC_6(VAR_7, "Failed to alloc memory for controller\n");
  return (VAR_2);
 }


 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9 != 0) {
  FUNC_6(VAR_7, "Failed to reset controller\n");
  FUNC_4(VAR_7, VAR_6, VAR_8->r_rid, VAR_8->r_mem);
  return (VAR_3);
 }

 FUNC_2(VAR_8);

 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 != 0) {
  FUNC_6(VAR_7, "Failed to initialize AHCI, with error %d\n", VAR_9);
  return (VAR_3);
 }

 return (0);
}
