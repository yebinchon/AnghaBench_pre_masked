
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_char ;
typedef int u32 ;
typedef TYPE_4__* tcb_p ;
struct sym_nvram {int type; } ;
typedef TYPE_5__* hcb_p ;
struct TYPE_17__ {int maxwide; int features; int multiplier; int clock_khz; int clock_divn; int rv_scntl3; int minsync; int maxsync; int minsync_dt; int maxsync_dt; int maxoffs_dt; int rv_ccntl1; scalar_t__ device_id; int revision_id; int sv_dmode; int sv_ctest4; int sv_ctest5; int maxburst; int rv_dmode; int rv_dcntl; int rv_ctest3; int rv_ctest5; int rv_ctest4; int rv_scntl0; int myaddr; int scsi_mode; int sv_stest4; int sv_scntl3; int sv_stest2; int rv_stest2; int sv_gpcntl; int sv_dcntl; int maxoffs; char* fw_name; int sv_ctest3; scalar_t__ ram_ba; TYPE_4__* target; int device; int rv_ccntl0; } ;
struct TYPE_14__ {int scsi_version; int spi_version; int period; int offset; scalar_t__ width; int options; } ;
struct TYPE_13__ {int scsi_version; int spi_version; } ;
struct TYPE_15__ {TYPE_2__ user; TYPE_1__ current; } ;
struct TYPE_16__ {int usrflags; int usrtags; TYPE_3__ tinfo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_19 ;
 int VAR_20 ;
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
 int FUNC_0 (int ) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 void* VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 unsigned long VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 scalar_t__ VAR_51 ;
 int VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int FUNC_2 (int,int,int) ;
 unsigned long* VAR_60 ;
 void* FUNC_3 (int,int) ;
 int VAR_61 ;
 int VAR_62 ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_5__*,int) ;
 char* FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,struct sym_nvram*) ;
 int FUNC_9 (TYPE_5__*,int,struct sym_nvram*) ;
 int FUNC_10 (TYPE_5__*,int ,char*) ;
 char* FUNC_11 (void*) ;
 int VAR_63 ;

__attribute__((used)) static int FUNC_12(hcb_p VAR_64, struct sym_nvram *VAR_65)
{
 u_char VAR_66;
 u32 VAR_67;
 int VAR_68;




 VAR_64->maxwide = (VAR_64->features & VAR_29)? 1 : 0;




 if (VAR_64->features & VAR_25)
  VAR_64->multiplier = 4;
 else if (VAR_64->features & VAR_16)
  VAR_64->multiplier = 2;
 else
  VAR_64->multiplier = 1;

 VAR_64->clock_khz = (VAR_64->features & VAR_13)? 80000 : 40000;
 VAR_64->clock_khz *= VAR_64->multiplier;

 if (VAR_64->clock_khz != 40000)
  FUNC_5(VAR_64, VAR_64->multiplier);




 VAR_68 = VAR_64->clock_divn - 1;
 while (--VAR_68 >= 0) {
  if (10ul * VAR_43 * VAR_64->clock_khz > VAR_60[VAR_68]) {
   ++VAR_68;
   break;
  }
 }
 VAR_64->rv_scntl3 = VAR_68+1;





 if (VAR_64->features & VAR_12)
  VAR_64->rv_scntl3 = 0;





 VAR_67 = FUNC_3(4 * VAR_60[0], VAR_64->clock_khz);
 if (VAR_67 <= 250) VAR_64->minsync = 10;
 else if (VAR_67 <= 303) VAR_64->minsync = 11;
 else if (VAR_67 <= 500) VAR_64->minsync = 12;
 else VAR_64->minsync = FUNC_3(VAR_67, 40);




 if (VAR_64->minsync < 25 &&
   !(VAR_64->features & (VAR_26|VAR_27|VAR_28)))
  VAR_64->minsync = 25;
 else if (VAR_64->minsync < 12 &&
   !(VAR_64->features & (VAR_27|VAR_28)))
  VAR_64->minsync = 12;




 VAR_67 = (11 * VAR_60[VAR_64->clock_divn - 1]) / (4 * VAR_64->clock_khz);
 VAR_64->maxsync = VAR_67 > 2540 ? 254 : VAR_67 / 10;




 if ((VAR_64->features & (VAR_12|VAR_28)) == (VAR_12|VAR_28)) {
  if (VAR_64->clock_khz == 160000) {
   VAR_64->minsync_dt = 9;
   VAR_64->maxsync_dt = 50;
   VAR_64->maxoffs_dt = 62;
  }
 }




 if (VAR_64->features & VAR_15)

  VAR_64->rv_ccntl1 |= (VAR_59 | VAR_10);







 if (VAR_64->features & VAR_23)
  VAR_64->rv_ccntl0 |= (VAR_7);






 if (VAR_64->device_id == VAR_33 &&
     VAR_64->revision_id < 0x2)
  VAR_64->rv_ccntl0 |= VAR_6;




 VAR_66 = VAR_47;
 if (VAR_66 == 255)
  VAR_66 = FUNC_2(VAR_64->sv_dmode, VAR_64->sv_ctest4,
           VAR_64->sv_ctest5);
 if (VAR_66 > 7)
  VAR_66 = 7;
 if (VAR_66 > VAR_64->maxburst)
  VAR_66 = VAR_64->maxburst;
 if ((VAR_64->device_id == VAR_34 &&
      VAR_64->revision_id >= 0x10 && VAR_64->revision_id <= 0x11) ||
     (VAR_64->device_id == VAR_35 &&
      VAR_64->revision_id <= 0x1))
  VAR_64->features &= ~(VAR_30|VAR_19|VAR_20);







 if (VAR_64->features & VAR_19)
  VAR_64->rv_dmode |= VAR_8;
 if (VAR_64->features & VAR_11)
  VAR_64->rv_dmode |= VAR_0;
 if (VAR_64->features & VAR_20)
  VAR_64->rv_dmode |= VAR_9;

 if ((VAR_64->features & VAR_24) && !VAR_64->ram_ba)



  VAR_64->rv_dcntl |= VAR_37;
 if (VAR_64->features & VAR_14)
  VAR_64->rv_dcntl |= VAR_3;
 if (VAR_64->features & VAR_30)
  VAR_64->rv_ctest3 |= VAR_58;
 if (VAR_64->features & VAR_17)
  VAR_64->rv_ctest5 |= VAR_5;




 if (VAR_51)
  VAR_64->rv_ctest4 |= VAR_32;
 if (VAR_54)
  VAR_64->rv_scntl0 |= 0x0a;




 VAR_64->myaddr = 255;
 FUNC_8 (VAR_64, VAR_65);







 if (VAR_64->myaddr == 255) {
  VAR_64->myaddr = FUNC_0(VAR_62) & 0x07;
  if (!VAR_64->myaddr)
   VAR_64->myaddr = VAR_48;
 }




 FUNC_6(VAR_64, VAR_66);
 VAR_64->scsi_mode = VAR_41;
 if (VAR_64->features & (VAR_27|VAR_28))
  VAR_64->scsi_mode = (VAR_64->sv_stest4 & VAR_39);
 else if (VAR_64->features & VAR_18) {
  if (VAR_52 == 1) {
   if (VAR_64->sv_scntl3) {
    if (VAR_64->sv_stest2 & 0x20)
     VAR_64->scsi_mode = VAR_40;
   }
   else if (VAR_65->type == VAR_55) {
    if (!(FUNC_0(VAR_61) & 0x08))
     VAR_64->scsi_mode = VAR_40;
   }
  }
  else if (VAR_52 == 2)
   VAR_64->scsi_mode = VAR_40;
 }
 if (VAR_64->scsi_mode == VAR_40)
  VAR_64->rv_stest2 |= 0x20;







 if ((VAR_53 ||
      (VAR_65->type == VAR_55 ||
       (VAR_65->type == VAR_57 &&
        VAR_64->device_id == VAR_36))) &&
     !(VAR_64->features & VAR_22) && !(VAR_64->sv_gpcntl & 0x01))
  VAR_64->features |= VAR_21;




 switch(VAR_49 & 3) {
 case 2:
  VAR_64->rv_dcntl |= VAR_31;
  break;
 case 1:
  VAR_64->rv_dcntl |= (VAR_64->sv_dcntl & VAR_31);
  break;
 default:
  break;
 }





 for (VAR_68 = 0 ; VAR_68 < VAR_42 ; VAR_68++) {
  tcb_p VAR_69 = &VAR_64->target[VAR_68];

  VAR_69->tinfo.user.scsi_version = VAR_69->tinfo.current.scsi_version= 2;
  VAR_69->tinfo.user.spi_version = VAR_69->tinfo.current.spi_version = 2;
  VAR_69->tinfo.user.period = VAR_64->minsync;
  if (VAR_64->features & VAR_28)
   VAR_69->tinfo.user.period = VAR_64->minsync_dt;
  VAR_69->tinfo.user.offset = VAR_64->maxoffs;
  VAR_69->tinfo.user.width = VAR_64->maxwide ? VAR_1 : VAR_2;
  VAR_69->usrflags |= (VAR_44 | VAR_56);
  VAR_69->usrtags = VAR_50;

  FUNC_9 (VAR_64, VAR_68, VAR_65);





  if (VAR_64->features & VAR_28) {
   if (VAR_69->tinfo.user.period <= 9 &&
       VAR_69->tinfo.user.width == VAR_1) {
    VAR_69->tinfo.user.options |= VAR_38;
    VAR_69->tinfo.user.offset = VAR_64->maxoffs_dt;
    VAR_69->tinfo.user.spi_version = 3;
   }
  }

  if (!VAR_69->usrtags)
   VAR_69->usrflags &= ~VAR_56;
 }




 VAR_68 = VAR_65->type;
 FUNC_4("%s: %s NVRAM, ID %d, Fast-%d, %s, %s\n", FUNC_7(VAR_64),
  VAR_68 == VAR_55 ? "Symbios" :
  (VAR_68 == VAR_57 ? "Tekram" : "No"),
  VAR_64->myaddr,
  (VAR_64->features & VAR_28) ? 80 :
  (VAR_64->features & VAR_27) ? 40 :
  (VAR_64->features & VAR_26) ? 20 : 10,
  FUNC_11(VAR_64->scsi_mode),
  (VAR_64->rv_scntl0 & 0xa) ? "parity checking" : "NO parity");



 if (VAR_63) {
  FUNC_4("%s: %s IRQ line driver%s\n",
   FUNC_7(VAR_64),
   VAR_64->rv_dcntl & VAR_31 ? "totem pole" : "open drain",
   VAR_64->ram_ba ? ", using on-chip SRAM" : "");
  FUNC_4("%s: using %s firmware.\n", FUNC_7(VAR_64), VAR_64->fw_name);
  if (VAR_64->features & VAR_23)
   FUNC_4("%s: handling phase mismatch from SCRIPTS.\n",
          FUNC_7(VAR_64));
 }



 if (VAR_63 > 1) {
  FUNC_4 ("%s: initial SCNTL3/DMODE/DCNTL/CTEST3/4/5 = "
   "(hex) %02x/%02x/%02x/%02x/%02x/%02x\n",
   FUNC_7(VAR_64), VAR_64->sv_scntl3, VAR_64->sv_dmode, VAR_64->sv_dcntl,
   VAR_64->sv_ctest3, VAR_64->sv_ctest4, VAR_64->sv_ctest5);

  FUNC_4 ("%s: final   SCNTL3/DMODE/DCNTL/CTEST3/4/5 = "
   "(hex) %02x/%02x/%02x/%02x/%02x/%02x\n",
   FUNC_7(VAR_64), VAR_64->rv_scntl3, VAR_64->rv_dmode, VAR_64->rv_dcntl,
   VAR_64->rv_ctest3, VAR_64->rv_ctest4, VAR_64->rv_ctest5);
 }



 FUNC_10(VAR_64, VAR_45, "SCAN AT BOOT");
 if (VAR_63)
  FUNC_10(VAR_64, VAR_46,
           "SCAN FOR LUNS");

 return 0;
}
