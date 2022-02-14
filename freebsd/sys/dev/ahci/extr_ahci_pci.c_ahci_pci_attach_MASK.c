
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct ahci_controller {int quirks; int vendorid; int subvendorid; int subdeviceid; scalar_t__ r_rid; int remap_offset; int remap_size; scalar_t__ remapped_devices; scalar_t__ r_msix_tab_rid; scalar_t__ r_msix_pba_rid; int msi; int numirqs; int * r_msix_pba; int * r_msix_table; void* r_mem; int deviceid; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ id; scalar_t__ rev; int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__*,scalar_t__*) ;
 void* FUNC_6 (int ,int ,scalar_t__*,int ) ;
 int FUNC_7 (int ) ;
 struct ahci_controller* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int ,int*) ;
 int FUNC_13 (int ,int*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_25(device_t VAR_13)
{
 struct ahci_controller *VAR_14 = FUNC_8(VAR_13);
 int VAR_15, VAR_16;
 uint32_t VAR_17 = FUNC_16(VAR_13);
 uint8_t VAR_18 = FUNC_17(VAR_13);
 int VAR_19, VAR_20;
 uint8_t VAR_21 = 0, VAR_22 = 0;

 VAR_19 = FUNC_21(VAR_13);
 VAR_20 = FUNC_22(VAR_13);

 VAR_16 = 0;
 while (VAR_12[VAR_16].id != 0 &&
     (VAR_12[VAR_16].id != VAR_17 ||
      VAR_12[VAR_16].rev > VAR_18))
  VAR_16++;
 VAR_14->quirks = VAR_12[VAR_16].quirks;


 if (FUNC_16(VAR_13) == 0x2363197b &&
     FUNC_19(VAR_13) == 0x1043 &&
     FUNC_18(VAR_13) == 0x81e4)
  VAR_14->quirks |= VAR_4;
 FUNC_24(FUNC_7(VAR_13), FUNC_9(VAR_13),
     "quirks", &VAR_14->quirks);
 VAR_14->vendorid = FUNC_20(VAR_13);
 VAR_14->deviceid = FUNC_15(VAR_13);
 VAR_14->subvendorid = FUNC_19(VAR_13);
 VAR_14->subdeviceid = FUNC_18(VAR_13);


 if (VAR_14->quirks & VAR_1)
  VAR_14->r_rid = FUNC_1(0);
 else
  VAR_14->r_rid = FUNC_1(5);
 if (!(VAR_14->r_mem = FUNC_6(VAR_13, VAR_11,
     &VAR_14->r_rid, VAR_10)))
  return VAR_6;







 if (FUNC_20(VAR_13) == 0x8086) {
  uint32_t VAR_23;

  VAR_23 = FUNC_0(VAR_14->r_mem, VAR_5);
  if (VAR_23 & 1) {
   uint32_t VAR_24 = FUNC_0(VAR_14->r_mem, 0x800);
   int VAR_25;

   VAR_14->remap_offset = 0x4000;
   VAR_14->remap_size = 0x4000;






   for (VAR_25 = 0; VAR_25 < 3; VAR_25++) {
    if (VAR_24 & (1 << VAR_25) &&
        (FUNC_0(VAR_14->r_mem, 0x880 + VAR_25 * 0x80) ==
         ((VAR_7 << 16) |
          (VAR_9 << 8) |
          VAR_8))) {
     VAR_14->remapped_devices++;
    }
   }


   if (VAR_14->remapped_devices > 0) {
    FUNC_10(VAR_13, "Detected %d nvme remapped devices\n",
        VAR_14->remapped_devices);
    VAR_14->quirks |= (VAR_3 | VAR_2);
   }
  }
 }


 if (VAR_14->quirks & VAR_3)
  VAR_20 = 0;


 if (VAR_20 > 0) {
  VAR_15 = FUNC_5(VAR_13, &VAR_21, &VAR_22);
  if (VAR_15 == 0) {
   VAR_14->r_msix_tab_rid = VAR_21;
   VAR_14->r_msix_pba_rid = VAR_22;
  } else {

   VAR_20 = 0;
  }
 }


 if (VAR_20 > 0) {




  VAR_14->r_msix_table = ((void*)0);
  if (VAR_14->r_msix_tab_rid != VAR_14->r_rid) {

   VAR_14->r_msix_table = FUNC_6(VAR_13, VAR_11,
       &VAR_14->r_msix_tab_rid, VAR_10);
   if (VAR_14->r_msix_table == ((void*)0)) {
    FUNC_3(VAR_13);
    return (VAR_6);
   }
  }





  VAR_14->r_msix_pba = ((void*)0);
  if ((VAR_14->r_msix_pba_rid != VAR_14->r_msix_tab_rid) &&
      (VAR_14->r_msix_pba_rid != VAR_14->r_rid)) {

   VAR_14->r_msix_pba = FUNC_6(VAR_13, VAR_11,
       &VAR_14->r_msix_pba_rid, VAR_10);
   if (VAR_14->r_msix_pba == ((void*)0)) {
    FUNC_3(VAR_13);
    return (VAR_6);
   }
  }
 }

 FUNC_14(VAR_13);

 if ((VAR_15 = FUNC_4(VAR_13)) != 0) {
  FUNC_3(VAR_13);
  return (VAR_15);
 }





 if (VAR_14->quirks & VAR_2)
  VAR_14->msi = 0;
 else if (VAR_14->quirks & VAR_0)
  VAR_14->msi = 1;
 else
  VAR_14->msi = 2;
 FUNC_24(FUNC_7(VAR_13),
     FUNC_9(VAR_13), "msi", &VAR_14->msi);
 VAR_14->numirqs = 1;
 if (VAR_19 == 0 && VAR_20 == 0)
  VAR_14->msi = 0;
 if (VAR_14->msi < 0)
  VAR_14->msi = 0;
 else if (VAR_14->msi == 1) {
  VAR_19 = FUNC_11(1, VAR_19);
  VAR_20 = FUNC_11(1, VAR_20);
 } else if (VAR_14->msi > 1)
  VAR_14->msi = 2;


 if (VAR_14->msi > 0) {
  VAR_15 = VAR_6;


  if (VAR_20 > 0) {
   VAR_15 = FUNC_13(VAR_13, &VAR_20);
   if (VAR_15 == 0)
    VAR_14->numirqs = VAR_20;
  }





  if ((VAR_15 != 0) && (VAR_19 > 0)) {
   VAR_15 = FUNC_12(VAR_13, &VAR_19);
   if (VAR_15 == 0)
    VAR_14->numirqs = VAR_19;
  }


  if (VAR_15 != 0) {
   VAR_14->msi = 0;
   FUNC_10(VAR_13, "Failed to allocate MSI/MSI-x, "
       "falling back to INTx\n");
  }
 }

 VAR_15 = FUNC_2(VAR_13);
 if (VAR_15 != 0) {
  if (VAR_14->msi > 0)
   FUNC_23(VAR_13);
  FUNC_3(VAR_13);
 }
 return VAR_15;
}
