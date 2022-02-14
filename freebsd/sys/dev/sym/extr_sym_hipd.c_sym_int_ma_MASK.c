
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
typedef int u32 ;
struct TYPE_16__ {int addr; int size; } ;
struct sym_pmc {int ret; TYPE_2__ sg; } ;
typedef TYPE_5__* hcb_p ;
typedef TYPE_6__* ccb_p ;
struct TYPE_15__ {void* size; void* addr; } ;
struct TYPE_17__ {int sel_scntl3; } ;
struct TYPE_18__ {TYPE_1__ wresid; TYPE_3__ select; struct sym_pmc pm1; struct sym_pmc pm0; } ;
struct TYPE_20__ {int lun; int host_status; int tag; TYPE_4__ phys; } ;
struct TYPE_19__ {int features; int rv_ctest3; int scripta_ba; int scripta_sz; int scriptb_ba; int scriptb_sz; int* msgout; scalar_t__ scriptb0; scalar_t__ scripta0; } ;


 int VAR_0 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* FUNC_9 (int) ;
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
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 TYPE_6__* FUNC_12 (TYPE_5__*,int) ;
 char* FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*) ;
 int VAR_46 ;

__attribute__((used)) static void FUNC_15 (hcb_p VAR_47)
{
 u32 VAR_48;
 u32 VAR_49;
 u32 VAR_50;
 u32 VAR_51;
 u32 VAR_52;
 u32 *VAR_53;
 u32 VAR_54, VAR_55;
 u32 *VAR_56;
        u32 VAR_57;
 u_int VAR_58;
 u_char VAR_59;
 u_char VAR_60, VAR_61;
 struct sym_pmc *VAR_62;
 ccb_p VAR_63;

 VAR_50 = FUNC_1 (VAR_32);
 VAR_48 = FUNC_1 (VAR_28);
 VAR_51 = FUNC_1 (VAR_31);

 VAR_59 = VAR_48 >> 24;
 VAR_49 = VAR_48 & 0xffffff;
 VAR_58 = 0;




 VAR_63 = FUNC_12(VAR_47, VAR_51);







 if ((VAR_59 & 7) != 1 && (VAR_59 & 7) != 5) {
  u_char VAR_64, VAR_65;

  if (VAR_47->features & VAR_8)
   VAR_58 = FUNC_2 (VAR_29);
  else {
   u32 VAR_66;




   VAR_66 = FUNC_1(VAR_30);





   if (VAR_66 & (VAR_5 << 16))
    VAR_58 = ((((VAR_66 >> 8) & 0x300) |
              (VAR_66 & 0xff)) - VAR_49) & 0x3ff;
   else
    VAR_58 = ((VAR_66 & 0xff) - VAR_49) & 0x7f;
  }







  VAR_49 += VAR_58;
  VAR_64 = FUNC_0 (VAR_35);
  if (VAR_64 & VAR_17) VAR_49++;
  if (!(VAR_47->features & VAR_7))
   if (VAR_64 & VAR_19) VAR_49++;
  if (VAR_63 && (VAR_63->phys.select.sel_scntl3 & VAR_6)) {
   VAR_65 = FUNC_0 (VAR_36);
   if (VAR_65 & VAR_18) VAR_49++;
   if (!(VAR_47->features & VAR_7))
    if (VAR_65 & VAR_20) VAR_49++;
  }




  FUNC_3 (VAR_27, VAR_47->rv_ctest3 | VAR_0);
  FUNC_3 (VAR_37, VAR_21|VAR_1);
 }




 if (VAR_2 & (VAR_4|VAR_3))
  FUNC_10 ("P%x%x RL=%d D=%d ", VAR_59&7, FUNC_0(VAR_33)&7,
   (unsigned) VAR_49, (unsigned) VAR_58);





 VAR_53 = ((void*)0);
 VAR_52 = 0;
 if (VAR_50 > VAR_47->scripta_ba &&
   VAR_50 <= VAR_47->scripta_ba + VAR_47->scripta_sz) {
  VAR_53 = (u32 *)((char*)VAR_47->scripta0 + (VAR_50-VAR_47->scripta_ba-8));
  VAR_52 = VAR_50;
 }
 else if (VAR_50 > VAR_47->scriptb_ba &&
   VAR_50 <= VAR_47->scriptb_ba + VAR_47->scriptb_sz) {
  VAR_53 = (u32 *)((char*)VAR_47->scriptb0 + (VAR_50-VAR_47->scriptb_ba-8));
  VAR_52 = VAR_50;
 }




 if (VAR_2 & VAR_3) {
  FUNC_10 ("\nCP=%p DSP=%x NXT=%x VDSP=%p CMD=%x ",
   VAR_63, (unsigned)VAR_50, (unsigned)VAR_52, VAR_53, VAR_59);
 }

 if (!VAR_53) {
  FUNC_10 ("%s: interrupted SCRIPT address not found.\n",
   FUNC_13 (VAR_47));
  goto reset_all;
 }

 if (!VAR_63) {
  FUNC_10 ("%s: SCSI phase error fixup: CCB already dequeued.\n",
   FUNC_13 (VAR_47));
  goto reset_all;
 }




 VAR_54 = FUNC_11(VAR_53[1]);

 if (VAR_59 & 0x10) {
  VAR_56 = (u32 *) ((char*) &VAR_63->phys + VAR_54);
  VAR_55 = FUNC_11(VAR_56[0]);
  VAR_54 = FUNC_11(VAR_56[1]);
 } else {
  VAR_56 = (u32 *) 0;
  VAR_55 = FUNC_11(VAR_53[0]) & 0xffffff;
 }

 if (VAR_2 & VAR_3) {
  FUNC_10 ("OCMD=%x\nTBLP=%p OLEN=%x OADR=%x\n",
   (unsigned) (FUNC_11(VAR_53[0]) >> 24),
   VAR_56,
   (unsigned) VAR_55,
   (unsigned) VAR_54);
 }






 if (((VAR_59 & 2) ? VAR_59 : (VAR_59 & ~4)) != (FUNC_11(VAR_53[0]) >> 24)) {
  FUNC_6(VAR_63);
  FUNC_10 ("internal error: cmd=%02x != %02x=(vdsp[0] >> 24)\n",
   (unsigned)VAR_59, (unsigned)FUNC_11(VAR_53[0]) >> 24);

  goto reset_all;
 }




 if (VAR_59 & 2) {
  FUNC_6(VAR_63);
  FUNC_10 ("phase change %x-%x %d@%08x resid=%d.\n",
   VAR_59&7, FUNC_0(VAR_33)&7, (unsigned)VAR_55,
   (unsigned)VAR_54, (unsigned)VAR_49);
  goto unexpected_phase;
 }
 VAR_61 = FUNC_0 (VAR_13);
 VAR_60 = VAR_61;

 if (VAR_60 & (VAR_11 | VAR_12 | VAR_10)) {
  if (VAR_60 & VAR_11)
   VAR_52 = FUNC_11(VAR_63->phys.pm0.ret);
  else if (VAR_60 & VAR_12)
   VAR_52 = FUNC_11(VAR_63->phys.pm1.ret);

  if (VAR_60 & VAR_10)
   VAR_60 ^= VAR_9;
 }

 if (!(VAR_60 & VAR_9)) {
  VAR_62 = &VAR_63->phys.pm0;
  VAR_57 = FUNC_7 (VAR_47, VAR_40);
 }
 else {
  VAR_62 = &VAR_63->phys.pm1;
  VAR_57 = FUNC_7 (VAR_47, VAR_41);
 }

 VAR_60 &= ~(VAR_11 | VAR_12 | VAR_10);
 if (VAR_60 != VAR_61)
  FUNC_3 (VAR_13, VAR_60);




 VAR_62->sg.addr = FUNC_9(VAR_54 + VAR_55 - VAR_49);
 VAR_62->sg.size = FUNC_9(VAR_49);
 VAR_62->ret = FUNC_9(VAR_52);







 VAR_52 = FUNC_7 (VAR_47, VAR_24);
 if ((VAR_59 & 7) == 1 && VAR_63 && (VAR_63->phys.select.sel_scntl3 & VAR_6) &&
     (FUNC_0 (VAR_34) & VAR_22)) {
  u32 VAR_67;






  VAR_67 = FUNC_11(VAR_62->sg.addr);
  VAR_63->phys.wresid.addr = FUNC_9(VAR_67);
  VAR_62->sg.addr = FUNC_9(VAR_67 + 1);
  VAR_67 = FUNC_11(VAR_62->sg.size);
  VAR_63->phys.wresid.size = FUNC_9((VAR_67&0xff000000) | 1);
  VAR_62->sg.size = FUNC_9(VAR_67 - 1);





  if ((VAR_67&0xffffff) == 1)
   VAR_57 = VAR_62->ret;





  VAR_52 = FUNC_8 (VAR_47, VAR_46);
 }

 if (VAR_2 & VAR_3) {
  FUNC_6(VAR_63);
  FUNC_10 ("PM %x %x %x / %x %x %x.\n",
   VAR_61, VAR_60, VAR_57,
   (unsigned)FUNC_11(VAR_62->sg.addr),
   (unsigned)FUNC_11(VAR_62->sg.size),
   (unsigned)FUNC_11(VAR_62->ret));
 }




 FUNC_4 (VAR_38, VAR_57);
 FUNC_5 (VAR_52);
 return;
unexpected_phase:
 VAR_50 -= 8;
 VAR_52 = 0;

 switch (VAR_59 & 7) {
 case 2:
  VAR_52 = FUNC_7 (VAR_47, VAR_24);
  break;





 case 6:






  if (VAR_50 == FUNC_7 (VAR_47, VAR_42)) {
   if (VAR_63->tag != VAR_16 && VAR_55 - VAR_49 <= 3) {
    VAR_63->host_status = VAR_14;
    VAR_47->msgout[0] = VAR_15 | VAR_63->lun;
    VAR_52 = FUNC_8 (VAR_47, VAR_26);
   }
   else
    VAR_52 = FUNC_8 (VAR_47, VAR_25);
  }
  else if (VAR_50 == FUNC_8 (VAR_47, VAR_45) ||
    VAR_50 == FUNC_8 (VAR_47, VAR_44) ||
    VAR_50 == FUNC_8 (VAR_47, VAR_43)) {
   VAR_52 = FUNC_8 (VAR_47, VAR_39);
  }
  break;





 }

 if (VAR_52) {
  FUNC_5 (VAR_52);
  return;
 }

reset_all:
 FUNC_14(VAR_47);
}
