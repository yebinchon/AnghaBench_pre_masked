
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ aif_send_command; } ;
struct aac_softc {int flags; int supported_options; int doorbell_mask; int hint_flags; int aac_max_fibs; int aac_max_fib_size; int aac_max_sectors; int aac_max_aif; int aac_sg_tablesize; scalar_t__ aac_hwif; int aac_max_msix; int aac_max_fibs_alloc; int aac_dev; int * aac_regs_res0; int aac_bhandle0; int aac_btag0; int aac_regs_rid0; TYPE_1__ aac_if; } ;
struct aac_sg_entry64 {int dummy; } ;
struct aac_sg_entry {int dummy; } ;
struct aac_fib_xporthdr {int dummy; } ;
struct aac_fib {int dummy; } ;
struct aac_blockwrite64 {int dummy; } ;
struct aac_blockwrite {int dummy; } ;
typedef int bus_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (struct aac_softc*) ;
 int FUNC_1 (struct aac_softc*,int) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_2 (int) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 char* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_3 (struct aac_softc*) ;
 scalar_t__ FUNC_4 (struct aac_softc*,int ,int ,int ,int ,int ,int*,int *) ;
 int * FUNC_5 (int ,int ,int *,int ) ;
 int * FUNC_6 (int ,int ,int *,int,int ) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct aac_softc*,char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_41 ;

__attribute__((used)) static int
FUNC_13(struct aac_softc *VAR_42)
{
 u_int32_t VAR_43, VAR_44, VAR_45, VAR_46;
 u_int32_t VAR_47 = 0, VAR_48 = 0, VAR_49, VAR_50;
 time_t VAR_51;

 FUNC_9(VAR_42, VAR_37, "");


 if (FUNC_0(VAR_42) & VAR_17) {
  VAR_51 = VAR_41;
  do {
   VAR_43 = FUNC_0(VAR_42);
   if (VAR_41 > (VAR_51 + VAR_19)) {
    FUNC_8(VAR_42->aac_dev,
        "FATAL: controller not coming ready, "
         "status %x\n", VAR_43);
    return(VAR_36);
   }
  } while (!(VAR_43 & VAR_18) && !(VAR_43 & VAR_16));




  VAR_50 = 10 * 10000;
  while (VAR_50) {
   FUNC_2(100);
   VAR_50--;
  }
 }




 VAR_51 = VAR_41;
 do {
  VAR_43 = FUNC_0(VAR_42);
  if (VAR_41 > (VAR_51 + VAR_0)) {
   FUNC_8(VAR_42->aac_dev,
          "FATAL: controller not coming ready, "
        "status %x\n", VAR_43);
   return(VAR_36);
  }
 } while (!(VAR_43 & VAR_33) || VAR_43 == 0xffffffff);





 if (VAR_42->flags & VAR_12) {
  if (FUNC_4(VAR_42, VAR_23, 0, 0, 0, 0,
         ((void*)0), ((void*)0))) {
   FUNC_8(VAR_42->aac_dev,
          "Error reading firmware version\n");
   return (VAR_35);
  }


  VAR_44 = (FUNC_1(VAR_42, 1) & 0xff) - 0x30;
  VAR_45 = (FUNC_1(VAR_42, 2) & 0xff) - 0x30;
  if (VAR_44 == 1) {
   FUNC_8(VAR_42->aac_dev,
       "Firmware version %d.%d is not supported.\n",
       VAR_44, VAR_45);
   return (VAR_34);
  }
 }





 if (FUNC_4(VAR_42, VAR_22, 0, 0, 0, 0, &VAR_49, ((void*)0))) {
  if (VAR_49 != VAR_24) {
   FUNC_8(VAR_42->aac_dev,
        "RequestAdapterInfo failed\n");
   return (VAR_35);
  }
 } else {
  VAR_47 = FUNC_1(VAR_42, 1);
  VAR_48 = FUNC_1(VAR_42, 2);
  VAR_42->supported_options = VAR_47;
  VAR_42->doorbell_mask = FUNC_1(VAR_42, 3);

  if ((VAR_47 & VAR_25) != 0 &&
      (VAR_42->flags & VAR_11) == 0)
   VAR_42->flags |= VAR_3;
  if (VAR_47 & VAR_31)
   VAR_42->flags |= VAR_5;
  if ((VAR_47 & VAR_32) != 0
   && (sizeof(bus_addr_t) > 4)
   && (VAR_42->hint_flags & 0x1)) {
   FUNC_8(VAR_42->aac_dev,
       "Enabling 64-bit address support\n");
   VAR_42->flags |= VAR_14;
  }
  if (VAR_42->aac_if.aif_send_command) {
   if (VAR_47 & VAR_28)
    VAR_42->flags |= VAR_7 | VAR_9;
   else if (VAR_47 & VAR_27)
    VAR_42->flags |= VAR_7 | VAR_8;
   else if ((VAR_47 & VAR_29) ||
    (VAR_47 & VAR_30))
    VAR_42->flags |= VAR_7 | VAR_10;
  }
  if (VAR_47 & VAR_26)
   VAR_42->flags |= VAR_4;
 }

 if (!(VAR_42->flags & VAR_7)) {
  FUNC_8(VAR_42->aac_dev, "Communication interface not supported!\n");
  return (VAR_36);
 }

 if (VAR_42->hint_flags & 2) {
  FUNC_8(VAR_42->aac_dev,
   "Sync. mode enforced by driver parameter. This will cause a significant performance decrease!\n");
  VAR_42->flags |= VAR_15;
 } else if (VAR_42->flags & VAR_10) {
  FUNC_8(VAR_42->aac_dev,
   "Async. mode not supported by current driver, sync. mode enforced.\nPlease update driver to get full performance.\n");
  VAR_42->flags |= VAR_15;
 }


 VAR_42->aac_max_fibs = (VAR_42->flags & VAR_2 ? 256:512);


 if (VAR_48 > FUNC_12(VAR_42->aac_regs_res0)) {
  FUNC_7(
   VAR_42->aac_dev, VAR_40,
   VAR_42->aac_regs_rid0, VAR_42->aac_regs_res0);
  VAR_42->aac_regs_res0 = FUNC_6(
   VAR_42->aac_dev, VAR_40, &VAR_42->aac_regs_rid0,
   VAR_48, VAR_39);
  if (VAR_42->aac_regs_res0 == ((void*)0)) {
   VAR_42->aac_regs_res0 = FUNC_5(
    VAR_42->aac_dev, VAR_40,
    &VAR_42->aac_regs_rid0, VAR_39);
   if (VAR_42->aac_regs_res0 == ((void*)0)) {
    FUNC_8(VAR_42->aac_dev,
     "couldn't allocate register window\n");
    return (VAR_36);
   }
  }
  VAR_42->aac_btag0 = FUNC_11(VAR_42->aac_regs_res0);
  VAR_42->aac_bhandle0 = FUNC_10(VAR_42->aac_regs_res0);
 }


 VAR_42->aac_max_fib_size = sizeof(struct aac_fib);
 VAR_42->aac_max_sectors = 128;
 VAR_42->aac_max_aif = 1;
 if (VAR_42->flags & VAR_14)
  VAR_42->aac_sg_tablesize = (VAR_1
   - sizeof(struct aac_blockwrite64))
   / sizeof(struct aac_sg_entry64);
 else
  VAR_42->aac_sg_tablesize = (VAR_1
   - sizeof(struct aac_blockwrite))
   / sizeof(struct aac_sg_entry);

 if (!FUNC_4(VAR_42, VAR_21, 0, 0, 0, 0, ((void*)0), ((void*)0))) {
  VAR_47 = FUNC_1(VAR_42, 1);
  VAR_42->aac_max_fib_size = (VAR_47 & 0xFFFF);
  VAR_42->aac_max_sectors = (VAR_47 >> 16) << 1;
  VAR_47 = FUNC_1(VAR_42, 2);
  VAR_42->aac_sg_tablesize = (VAR_47 >> 16);
  VAR_47 = FUNC_1(VAR_42, 3);
  VAR_42->aac_max_fibs = ((VAR_47 >> 16) & 0xFFFF);
  if (VAR_42->aac_max_fibs == 0 || VAR_42->aac_hwif != VAR_20)
   VAR_42->aac_max_fibs = (VAR_47 & 0xFFFF);
  VAR_47 = FUNC_1(VAR_42, 4);
  VAR_42->aac_max_aif = (VAR_47 & 0xFFFF);
  VAR_47 = FUNC_1(VAR_42, 5);
  VAR_42->aac_max_msix =(VAR_42->flags & VAR_9) ? VAR_47 : 0;
 }

 VAR_46 = VAR_42->aac_max_fib_size + 31;
 if (VAR_42->flags & VAR_8)
  VAR_46 += sizeof(struct aac_fib_xporthdr);
 if (VAR_46 > VAR_38) {
     VAR_42->aac_max_fib_size -= (VAR_46 - VAR_38);
  VAR_46 = VAR_38;
 }
 VAR_42->aac_max_fibs_alloc = VAR_38 / VAR_46;

 if (VAR_42->aac_max_fib_size > sizeof(struct aac_fib)) {
  VAR_42->flags |= VAR_13;
  FUNC_8(VAR_42->aac_dev, "Enable Raw I/O\n");
 }
 if ((VAR_42->flags & VAR_13) &&
     (VAR_42->flags & VAR_4)) {
  VAR_42->flags |= VAR_6;
  FUNC_8(VAR_42->aac_dev, "Enable 64-bit array\n");
 }




 return (0);
}
