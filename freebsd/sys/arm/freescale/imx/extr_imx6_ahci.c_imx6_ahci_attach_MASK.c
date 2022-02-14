
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ahci_controller {int numirqs; int * r_mem; scalar_t__ r_rid; scalar_t__ subdeviceid; scalar_t__ subvendorid; scalar_t__ deviceid; scalar_t__ vendorid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int ,int ,scalar_t__*,int ) ;
 int FUNC_15 (int ,int ,scalar_t__,int *) ;
 struct ahci_controller* FUNC_16 (int ) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (struct ahci_controller*,int ,int*) ;
 int FUNC_19 (struct ahci_controller*,int ,int ) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int) ;

__attribute__((used)) static int
FUNC_24(device_t VAR_13)
{
 struct ahci_controller* VAR_14;
 uint16_t VAR_15;
 uint32_t VAR_16;
 int VAR_17, VAR_18;

 VAR_14 = FUNC_16(VAR_13);


 VAR_17 = FUNC_20();
 if (VAR_17 != 0) {
  FUNC_17(VAR_13, "error enabling controller and phy\n");
  return (VAR_17);
 }

 VAR_14->vendorid = 0;
 VAR_14->deviceid = 0;
 VAR_14->subvendorid = 0;
 VAR_14->subdeviceid = 0;
 VAR_14->numirqs = 1;
 VAR_14->r_rid = 0;
 if ((VAR_14->r_mem = FUNC_14(VAR_13, VAR_12,
     &VAR_14->r_rid, VAR_6)) == ((void*)0)) {
  return (VAR_3);
 }

 VAR_16 = FUNC_22(VAR_5);

 VAR_16 &= ~(FUNC_11(7) |
        FUNC_10(0x1f) |
        FUNC_9(7) |
        FUNC_12(1) |
        FUNC_8(1) |
        FUNC_7(7) |
        FUNC_6(0xf) |
        FUNC_5(0x1f) |
        FUNC_4(1) |
        FUNC_3(1));

 VAR_16 |= FUNC_11(5) |
      FUNC_10(0x12) |
      FUNC_9(3) |
      FUNC_12(1) |
      FUNC_8(0) |
      FUNC_7(4) |
      FUNC_6(0) |
      FUNC_5(0x11) |
      FUNC_4(1);
 FUNC_23(VAR_5, VAR_16);


 VAR_17 = FUNC_19(VAR_14, VAR_7,
     VAR_8);
 if (VAR_17 != 0) {
  FUNC_17(VAR_13, "cannot reset PHY\n");
  goto fail;
 }

 for (VAR_18 = 50; VAR_18 > 0; --VAR_18) {
  FUNC_2(100);
  VAR_17 = FUNC_18(VAR_14, VAR_9,
      &VAR_15);
  if (VAR_17 != 0) {
   FUNC_17(VAR_13, "cannot read LANE0 status\n");
   goto fail;
  }
  if (VAR_15 & VAR_10) {
   break;
  }
 }
 if (VAR_18 <= 0) {
  FUNC_17(VAR_13, "time out reading LANE0 status\n");
  VAR_17 = VAR_4;
  goto fail;
 }


 VAR_16 = FUNC_0(VAR_14->r_mem, VAR_0);
 FUNC_1(VAR_14->r_mem, VAR_0, VAR_16 | VAR_1);


 VAR_16 = FUNC_0(VAR_14->r_mem, VAR_2);
 FUNC_1(VAR_14->r_mem, VAR_2, VAR_16 | (1 << 0));


 FUNC_1(VAR_14->r_mem, VAR_11,
   FUNC_21() / 1000);




 return (FUNC_13(VAR_13));

fail:
 FUNC_15(VAR_13, VAR_12, VAR_14->r_rid, VAR_14->r_mem);
 return (VAR_17);
}
