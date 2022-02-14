
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef TYPE_4__* tcb_p ;
typedef TYPE_5__* hcb_p ;
struct TYPE_18__ {int rv_scntl0; int myaddr; int rv_dmode; int rv_ctest5; int rv_dcntl; int rv_ctest3; int rv_ctest4; int features; int rv_stest2; scalar_t__ device_id; int rv_ccntl0; int rv_ccntl1; int scsi_mode; int ram_ws; int path; scalar_t__ hcb_ba; scalar_t__ istat_sem; int scripta_sz; int scripta0; scalar_t__ scr_ram_seg; int scriptb_sz; int scriptb0; scalar_t__ ram_ba; int rv_scntl3; TYPE_4__* target; int (* fw_patch ) (TYPE_5__*) ;scalar_t__ dqueueget; void** dqueue; scalar_t__ dqueue_ba; scalar_t__ squeueput; void** squeue; scalar_t__ idletask_ba; scalar_t__ squeue_ba; } ;
struct TYPE_15__ {scalar_t__ options; int width; scalar_t__ offset; scalar_t__ period; } ;
struct TYPE_16__ {TYPE_2__ current; } ;
struct TYPE_14__ {scalar_t__ uval; int wval; scalar_t__ sval; } ;
struct TYPE_17__ {TYPE_3__ tinfo; TYPE_1__ head; scalar_t__ to_reset; } ;


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
 int VAR_15 ;
 unsigned long VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int ,unsigned long) ;
 unsigned long VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 unsigned long VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_10 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_11 (TYPE_5__*,int ) ;
 unsigned long VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 unsigned long VAR_36 ;
 int VAR_37 ;
 int FUNC_12 (int ) ;
 int VAR_38 ;
 unsigned long VAR_39 ;
 int FUNC_13 (int) ;
 void* FUNC_14 (scalar_t__) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int FUNC_15 (char*,char*) ;
 int VAR_71 ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_5__*,int ) ;
 char* FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (TYPE_5__*,int ) ;
 int FUNC_20 (TYPE_5__*) ;
 int VAR_72 ;
 int FUNC_21 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_22 (hcb_p VAR_73, int VAR_74)
{
  int VAR_75;
 u32 VAR_76;

 FUNC_12(VAR_20);




 if (VAR_74 == 1)
  FUNC_20(VAR_73);
 else {
  FUNC_3 (VAR_67, VAR_38|VAR_5);
  FUNC_6 (VAR_45, VAR_4);
 }




 VAR_76 = VAR_73->squeue_ba;
 for (VAR_75 = 0; VAR_75 < VAR_19*2; VAR_75 += 2) {
  VAR_73->squeue[VAR_75] = FUNC_14(VAR_73->idletask_ba);
  VAR_73->squeue[VAR_75+1] = FUNC_14(VAR_76 + (VAR_75+2)*4);
 }
 VAR_73->squeue[VAR_19*2-1] = FUNC_14(VAR_76);




 VAR_73->squeueput = 0;




 VAR_76 = VAR_73->dqueue_ba;
 for (VAR_75 = 0; VAR_75 < VAR_19*2; VAR_75 += 2) {
  VAR_73->dqueue[VAR_75] = 0;
  VAR_73->dqueue[VAR_75+1] = FUNC_14(VAR_76 + (VAR_75+2)*4);
 }
 VAR_73->dqueue[VAR_19*2-1] = FUNC_14(VAR_76);




 VAR_73->dqueueget = 0;






 VAR_73->fw_patch(VAR_73);




 FUNC_17(VAR_73, VAR_3);




 FUNC_3 (VAR_53, 0x00 );
 FUNC_13 (2000);

 FUNC_3 (VAR_60, VAR_73->rv_scntl0 | 0xc0);

 FUNC_3 (VAR_61, 0x00);

 FUNC_19(VAR_73, VAR_73->rv_scntl3);

 FUNC_3 (VAR_59 , VAR_28|VAR_73->myaddr);
 FUNC_9 (VAR_58, 1ul<<VAR_73->myaddr);
 FUNC_3 (VAR_53 , VAR_32 );
 FUNC_3 (VAR_50 , VAR_73->rv_dmode);
 FUNC_3 (VAR_47, VAR_73->rv_ctest5);

 FUNC_3 (VAR_48 , VAR_22|VAR_73->rv_dcntl);
 FUNC_3 (VAR_45, VAR_73->rv_ctest3);
 FUNC_3 (VAR_46, VAR_73->rv_ctest4);


 if (VAR_73->features & VAR_9)
  FUNC_3 (VAR_66, VAR_73->rv_stest2);
 else
  FUNC_3 (VAR_66, VAR_8|VAR_73->rv_stest2);

 FUNC_3 (VAR_67, VAR_38);
 FUNC_3 (VAR_69, 0x0c);




 if (VAR_73->device_id == VAR_25)
  FUNC_3 (VAR_41, VAR_6);
 if (VAR_73->device_id == VAR_24 &&
                                  1)
  FUNC_3 (VAR_65, FUNC_0(VAR_65) | 0x30);






 if (VAR_73->device_id == VAR_26)
  FUNC_3 (VAR_44, (1<<5));
 else if (VAR_73->device_id == VAR_27)
  VAR_73->rv_ccntl0 |= VAR_7;






 if (VAR_73->features & (VAR_10|VAR_13)) {
  FUNC_3 (VAR_42, VAR_73->rv_ccntl0);
  FUNC_3 (VAR_43, VAR_73->rv_ccntl1);
 }





 if (VAR_73->features & VAR_13) {
  FUNC_4 (VAR_56, FUNC_11 (VAR_73, VAR_70));
  FUNC_4 (VAR_57, FUNC_11 (VAR_73, VAR_70));
 }





 if (VAR_73->features & VAR_11)
  FUNC_3(VAR_52, FUNC_0(VAR_52) & ~0x01);
 else if (VAR_73->features & VAR_12)
  FUNC_3(VAR_52, (FUNC_0(VAR_52) & ~0x41) | 0x20);




 FUNC_9 (VAR_63 , VAR_36|VAR_16|VAR_18|VAR_31|VAR_39|VAR_29|VAR_23);
 FUNC_3 (VAR_49 , VAR_21|VAR_1|VAR_35|VAR_33|VAR_17);






 if (VAR_73->features & (VAR_14|VAR_15)) {
  FUNC_7 (VAR_63, VAR_30);
  if (VAR_74 == 0) {
   FUNC_2(100);
   FUNC_1 (VAR_64);
  }
  VAR_73->scsi_mode = FUNC_0 (VAR_68) & VAR_34;
 }







 for (VAR_75=0;VAR_75<VAR_37;VAR_75++) {
  tcb_p VAR_77 = &VAR_73->target[VAR_75];

  VAR_77->to_reset = 0;
  VAR_77->head.sval = 0;
  VAR_77->head.wval = VAR_73->rv_scntl3;
  VAR_77->head.uval = 0;

  VAR_77->tinfo.current.period = 0;
  VAR_77->tinfo.current.offset = 0;
  VAR_77->tinfo.current.width = VAR_2;
  VAR_77->tinfo.current.options = 0;
 }





 if (VAR_73->ram_ba) {
  if (VAR_72 > 1)
   FUNC_15 ("%s: Downloading SCSI SCRIPTS.\n",
    FUNC_18(VAR_73));
  if (VAR_73->ram_ws == 8192) {
   FUNC_8(4096, VAR_73->scriptb0, VAR_73->scriptb_sz);
   FUNC_4 (VAR_55, VAR_73->scr_ram_seg);
   FUNC_4 (VAR_54, VAR_73->scr_ram_seg);
   FUNC_4 (VAR_62, VAR_73->scr_ram_seg);
   VAR_76 = FUNC_11 (VAR_73, VAR_71);
  }
  else
   VAR_76 = FUNC_10 (VAR_73, VAR_40);
  FUNC_8(0, VAR_73->scripta0, VAR_73->scripta_sz);
 }
 else
  VAR_76 = FUNC_10 (VAR_73, VAR_40);

 VAR_73->istat_sem = 0;

 FUNC_4 (VAR_51, VAR_73->hcb_ba);
 FUNC_5 (VAR_76);




 if (VAR_74 != 0)
  FUNC_21(VAR_0, VAR_73->path, ((void*)0));
}
